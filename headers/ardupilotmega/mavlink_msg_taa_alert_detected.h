#pragma once
// MESSAGE TAA_ALERT_DETECTED PACKING

#define MAVLINK_MSG_ID_TAA_ALERT_DETECTED 20203


typedef struct __mavlink_taa_alert_detected_t {
 uint64_t seconds; /*< [s] Second field of timestamp.*/
 uint32_t nanoseconds; /*< [ns] Nanosecond field of timestamp.*/
 uint16_t sequence; /*<  Sequence number of alert.*/
 uint16_t alert_count; /*<  Number of alert barks detected.*/
 uint8_t volume; /*<  Negative dB of volume of bark detected.*/
 uint8_t confidence; /*< [%] Confidence value.*/
} mavlink_taa_alert_detected_t;

#define MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN 18
#define MAVLINK_MSG_ID_TAA_ALERT_DETECTED_MIN_LEN 18
#define MAVLINK_MSG_ID_20203_LEN 18
#define MAVLINK_MSG_ID_20203_MIN_LEN 18

#define MAVLINK_MSG_ID_TAA_ALERT_DETECTED_CRC 121
#define MAVLINK_MSG_ID_20203_CRC 121



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TAA_ALERT_DETECTED { \
    20203, \
    "TAA_ALERT_DETECTED", \
    6, \
    {  { "sequence", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_taa_alert_detected_t, sequence) }, \
         { "alert_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_taa_alert_detected_t, alert_count) }, \
         { "seconds", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_taa_alert_detected_t, seconds) }, \
         { "nanoseconds", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_taa_alert_detected_t, nanoseconds) }, \
         { "volume", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_taa_alert_detected_t, volume) }, \
         { "confidence", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_taa_alert_detected_t, confidence) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TAA_ALERT_DETECTED { \
    "TAA_ALERT_DETECTED", \
    6, \
    {  { "sequence", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_taa_alert_detected_t, sequence) }, \
         { "alert_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_taa_alert_detected_t, alert_count) }, \
         { "seconds", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_taa_alert_detected_t, seconds) }, \
         { "nanoseconds", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_taa_alert_detected_t, nanoseconds) }, \
         { "volume", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_taa_alert_detected_t, volume) }, \
         { "confidence", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_taa_alert_detected_t, confidence) }, \
         } \
}
#endif

/**
 * @brief Pack a taa_alert_detected message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sequence  Sequence number of alert.
 * @param alert_count  Number of alert barks detected.
 * @param seconds [s] Second field of timestamp.
 * @param nanoseconds [ns] Nanosecond field of timestamp.
 * @param volume  Negative dB of volume of bark detected.
 * @param confidence [%] Confidence value.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_alert_detected_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t sequence, uint16_t alert_count, uint64_t seconds, uint32_t nanoseconds, uint8_t volume, uint8_t confidence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN];
    _mav_put_uint64_t(buf, 0, seconds);
    _mav_put_uint32_t(buf, 8, nanoseconds);
    _mav_put_uint16_t(buf, 12, sequence);
    _mav_put_uint16_t(buf, 14, alert_count);
    _mav_put_uint8_t(buf, 16, volume);
    _mav_put_uint8_t(buf, 17, confidence);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN);
#else
    mavlink_taa_alert_detected_t packet;
    packet.seconds = seconds;
    packet.nanoseconds = nanoseconds;
    packet.sequence = sequence;
    packet.alert_count = alert_count;
    packet.volume = volume;
    packet.confidence = confidence;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_ALERT_DETECTED;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_MIN_LEN, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_CRC);
}

/**
 * @brief Pack a taa_alert_detected message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sequence  Sequence number of alert.
 * @param alert_count  Number of alert barks detected.
 * @param seconds [s] Second field of timestamp.
 * @param nanoseconds [ns] Nanosecond field of timestamp.
 * @param volume  Negative dB of volume of bark detected.
 * @param confidence [%] Confidence value.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_alert_detected_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t sequence,uint16_t alert_count,uint64_t seconds,uint32_t nanoseconds,uint8_t volume,uint8_t confidence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN];
    _mav_put_uint64_t(buf, 0, seconds);
    _mav_put_uint32_t(buf, 8, nanoseconds);
    _mav_put_uint16_t(buf, 12, sequence);
    _mav_put_uint16_t(buf, 14, alert_count);
    _mav_put_uint8_t(buf, 16, volume);
    _mav_put_uint8_t(buf, 17, confidence);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN);
#else
    mavlink_taa_alert_detected_t packet;
    packet.seconds = seconds;
    packet.nanoseconds = nanoseconds;
    packet.sequence = sequence;
    packet.alert_count = alert_count;
    packet.volume = volume;
    packet.confidence = confidence;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_ALERT_DETECTED;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_MIN_LEN, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_CRC);
}

/**
 * @brief Encode a taa_alert_detected struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param taa_alert_detected C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_alert_detected_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_taa_alert_detected_t* taa_alert_detected)
{
    return mavlink_msg_taa_alert_detected_pack(system_id, component_id, msg, taa_alert_detected->sequence, taa_alert_detected->alert_count, taa_alert_detected->seconds, taa_alert_detected->nanoseconds, taa_alert_detected->volume, taa_alert_detected->confidence);
}

/**
 * @brief Encode a taa_alert_detected struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param taa_alert_detected C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_alert_detected_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_taa_alert_detected_t* taa_alert_detected)
{
    return mavlink_msg_taa_alert_detected_pack_chan(system_id, component_id, chan, msg, taa_alert_detected->sequence, taa_alert_detected->alert_count, taa_alert_detected->seconds, taa_alert_detected->nanoseconds, taa_alert_detected->volume, taa_alert_detected->confidence);
}

/**
 * @brief Send a taa_alert_detected message
 * @param chan MAVLink channel to send the message
 *
 * @param sequence  Sequence number of alert.
 * @param alert_count  Number of alert barks detected.
 * @param seconds [s] Second field of timestamp.
 * @param nanoseconds [ns] Nanosecond field of timestamp.
 * @param volume  Negative dB of volume of bark detected.
 * @param confidence [%] Confidence value.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_taa_alert_detected_send(mavlink_channel_t chan, uint16_t sequence, uint16_t alert_count, uint64_t seconds, uint32_t nanoseconds, uint8_t volume, uint8_t confidence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN];
    _mav_put_uint64_t(buf, 0, seconds);
    _mav_put_uint32_t(buf, 8, nanoseconds);
    _mav_put_uint16_t(buf, 12, sequence);
    _mav_put_uint16_t(buf, 14, alert_count);
    _mav_put_uint8_t(buf, 16, volume);
    _mav_put_uint8_t(buf, 17, confidence);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_ALERT_DETECTED, buf, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_MIN_LEN, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_CRC);
#else
    mavlink_taa_alert_detected_t packet;
    packet.seconds = seconds;
    packet.nanoseconds = nanoseconds;
    packet.sequence = sequence;
    packet.alert_count = alert_count;
    packet.volume = volume;
    packet.confidence = confidence;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_ALERT_DETECTED, (const char *)&packet, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_MIN_LEN, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_CRC);
#endif
}

/**
 * @brief Send a taa_alert_detected message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_taa_alert_detected_send_struct(mavlink_channel_t chan, const mavlink_taa_alert_detected_t* taa_alert_detected)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_taa_alert_detected_send(chan, taa_alert_detected->sequence, taa_alert_detected->alert_count, taa_alert_detected->seconds, taa_alert_detected->nanoseconds, taa_alert_detected->volume, taa_alert_detected->confidence);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_ALERT_DETECTED, (const char *)taa_alert_detected, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_MIN_LEN, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_CRC);
#endif
}

#if MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_taa_alert_detected_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t sequence, uint16_t alert_count, uint64_t seconds, uint32_t nanoseconds, uint8_t volume, uint8_t confidence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, seconds);
    _mav_put_uint32_t(buf, 8, nanoseconds);
    _mav_put_uint16_t(buf, 12, sequence);
    _mav_put_uint16_t(buf, 14, alert_count);
    _mav_put_uint8_t(buf, 16, volume);
    _mav_put_uint8_t(buf, 17, confidence);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_ALERT_DETECTED, buf, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_MIN_LEN, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_CRC);
#else
    mavlink_taa_alert_detected_t *packet = (mavlink_taa_alert_detected_t *)msgbuf;
    packet->seconds = seconds;
    packet->nanoseconds = nanoseconds;
    packet->sequence = sequence;
    packet->alert_count = alert_count;
    packet->volume = volume;
    packet->confidence = confidence;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_ALERT_DETECTED, (const char *)packet, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_MIN_LEN, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_CRC);
#endif
}
#endif

#endif

// MESSAGE TAA_ALERT_DETECTED UNPACKING


/**
 * @brief Get field sequence from taa_alert_detected message
 *
 * @return  Sequence number of alert.
 */
static inline uint16_t mavlink_msg_taa_alert_detected_get_sequence(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field alert_count from taa_alert_detected message
 *
 * @return  Number of alert barks detected.
 */
static inline uint16_t mavlink_msg_taa_alert_detected_get_alert_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field seconds from taa_alert_detected message
 *
 * @return [s] Second field of timestamp.
 */
static inline uint64_t mavlink_msg_taa_alert_detected_get_seconds(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field nanoseconds from taa_alert_detected message
 *
 * @return [ns] Nanosecond field of timestamp.
 */
static inline uint32_t mavlink_msg_taa_alert_detected_get_nanoseconds(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field volume from taa_alert_detected message
 *
 * @return  Negative dB of volume of bark detected.
 */
static inline uint8_t mavlink_msg_taa_alert_detected_get_volume(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field confidence from taa_alert_detected message
 *
 * @return [%] Confidence value.
 */
static inline uint8_t mavlink_msg_taa_alert_detected_get_confidence(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Decode a taa_alert_detected message into a struct
 *
 * @param msg The message to decode
 * @param taa_alert_detected C-struct to decode the message contents into
 */
static inline void mavlink_msg_taa_alert_detected_decode(const mavlink_message_t* msg, mavlink_taa_alert_detected_t* taa_alert_detected)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    taa_alert_detected->seconds = mavlink_msg_taa_alert_detected_get_seconds(msg);
    taa_alert_detected->nanoseconds = mavlink_msg_taa_alert_detected_get_nanoseconds(msg);
    taa_alert_detected->sequence = mavlink_msg_taa_alert_detected_get_sequence(msg);
    taa_alert_detected->alert_count = mavlink_msg_taa_alert_detected_get_alert_count(msg);
    taa_alert_detected->volume = mavlink_msg_taa_alert_detected_get_volume(msg);
    taa_alert_detected->confidence = mavlink_msg_taa_alert_detected_get_confidence(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN? msg->len : MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN;
        memset(taa_alert_detected, 0, MAVLINK_MSG_ID_TAA_ALERT_DETECTED_LEN);
    memcpy(taa_alert_detected, _MAV_PAYLOAD(msg), len);
#endif
}
