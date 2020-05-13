#pragma once
// MESSAGE TAA_DRONE_TELEMETRY PACKING

#define MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY 20101


typedef struct __mavlink_taa_drone_telemetry_t {
 uint64_t seconds; /*< [s] Seconds field of timestamp.*/
 uint32_t nanoseconds; /*< [ns] Nanoseconds field of timestamp.*/
 uint16_t sequence; /*<  Incremented each time a drone hearbeat is sent.*/
 uint8_t version; /*<  Version number of telemetry protocol.*/
} mavlink_taa_drone_telemetry_t;

#define MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN 15
#define MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_MIN_LEN 15
#define MAVLINK_MSG_ID_20101_LEN 15
#define MAVLINK_MSG_ID_20101_MIN_LEN 15

#define MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_CRC 214
#define MAVLINK_MSG_ID_20101_CRC 214



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TAA_DRONE_TELEMETRY { \
    20101, \
    "TAA_DRONE_TELEMETRY", \
    4, \
    {  { "sequence", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_taa_drone_telemetry_t, sequence) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_taa_drone_telemetry_t, version) }, \
         { "seconds", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_taa_drone_telemetry_t, seconds) }, \
         { "nanoseconds", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_taa_drone_telemetry_t, nanoseconds) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TAA_DRONE_TELEMETRY { \
    "TAA_DRONE_TELEMETRY", \
    4, \
    {  { "sequence", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_taa_drone_telemetry_t, sequence) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_taa_drone_telemetry_t, version) }, \
         { "seconds", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_taa_drone_telemetry_t, seconds) }, \
         { "nanoseconds", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_taa_drone_telemetry_t, nanoseconds) }, \
         } \
}
#endif

/**
 * @brief Pack a taa_drone_telemetry message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sequence  Incremented each time a drone hearbeat is sent.
 * @param version  Version number of telemetry protocol.
 * @param seconds [s] Seconds field of timestamp.
 * @param nanoseconds [ns] Nanoseconds field of timestamp.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_drone_telemetry_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t sequence, uint8_t version, uint64_t seconds, uint32_t nanoseconds)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN];
    _mav_put_uint64_t(buf, 0, seconds);
    _mav_put_uint32_t(buf, 8, nanoseconds);
    _mav_put_uint16_t(buf, 12, sequence);
    _mav_put_uint8_t(buf, 14, version);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN);
#else
    mavlink_taa_drone_telemetry_t packet;
    packet.seconds = seconds;
    packet.nanoseconds = nanoseconds;
    packet.sequence = sequence;
    packet.version = version;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_CRC);
}

/**
 * @brief Pack a taa_drone_telemetry message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sequence  Incremented each time a drone hearbeat is sent.
 * @param version  Version number of telemetry protocol.
 * @param seconds [s] Seconds field of timestamp.
 * @param nanoseconds [ns] Nanoseconds field of timestamp.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_drone_telemetry_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t sequence,uint8_t version,uint64_t seconds,uint32_t nanoseconds)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN];
    _mav_put_uint64_t(buf, 0, seconds);
    _mav_put_uint32_t(buf, 8, nanoseconds);
    _mav_put_uint16_t(buf, 12, sequence);
    _mav_put_uint8_t(buf, 14, version);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN);
#else
    mavlink_taa_drone_telemetry_t packet;
    packet.seconds = seconds;
    packet.nanoseconds = nanoseconds;
    packet.sequence = sequence;
    packet.version = version;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_CRC);
}

/**
 * @brief Encode a taa_drone_telemetry struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param taa_drone_telemetry C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_drone_telemetry_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_taa_drone_telemetry_t* taa_drone_telemetry)
{
    return mavlink_msg_taa_drone_telemetry_pack(system_id, component_id, msg, taa_drone_telemetry->sequence, taa_drone_telemetry->version, taa_drone_telemetry->seconds, taa_drone_telemetry->nanoseconds);
}

/**
 * @brief Encode a taa_drone_telemetry struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param taa_drone_telemetry C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_drone_telemetry_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_taa_drone_telemetry_t* taa_drone_telemetry)
{
    return mavlink_msg_taa_drone_telemetry_pack_chan(system_id, component_id, chan, msg, taa_drone_telemetry->sequence, taa_drone_telemetry->version, taa_drone_telemetry->seconds, taa_drone_telemetry->nanoseconds);
}

/**
 * @brief Send a taa_drone_telemetry message
 * @param chan MAVLink channel to send the message
 *
 * @param sequence  Incremented each time a drone hearbeat is sent.
 * @param version  Version number of telemetry protocol.
 * @param seconds [s] Seconds field of timestamp.
 * @param nanoseconds [ns] Nanoseconds field of timestamp.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_taa_drone_telemetry_send(mavlink_channel_t chan, uint16_t sequence, uint8_t version, uint64_t seconds, uint32_t nanoseconds)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN];
    _mav_put_uint64_t(buf, 0, seconds);
    _mav_put_uint32_t(buf, 8, nanoseconds);
    _mav_put_uint16_t(buf, 12, sequence);
    _mav_put_uint8_t(buf, 14, version);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY, buf, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_CRC);
#else
    mavlink_taa_drone_telemetry_t packet;
    packet.seconds = seconds;
    packet.nanoseconds = nanoseconds;
    packet.sequence = sequence;
    packet.version = version;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY, (const char *)&packet, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_CRC);
#endif
}

/**
 * @brief Send a taa_drone_telemetry message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_taa_drone_telemetry_send_struct(mavlink_channel_t chan, const mavlink_taa_drone_telemetry_t* taa_drone_telemetry)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_taa_drone_telemetry_send(chan, taa_drone_telemetry->sequence, taa_drone_telemetry->version, taa_drone_telemetry->seconds, taa_drone_telemetry->nanoseconds);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY, (const char *)taa_drone_telemetry, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_CRC);
#endif
}

#if MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_taa_drone_telemetry_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t sequence, uint8_t version, uint64_t seconds, uint32_t nanoseconds)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, seconds);
    _mav_put_uint32_t(buf, 8, nanoseconds);
    _mav_put_uint16_t(buf, 12, sequence);
    _mav_put_uint8_t(buf, 14, version);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY, buf, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_CRC);
#else
    mavlink_taa_drone_telemetry_t *packet = (mavlink_taa_drone_telemetry_t *)msgbuf;
    packet->seconds = seconds;
    packet->nanoseconds = nanoseconds;
    packet->sequence = sequence;
    packet->version = version;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY, (const char *)packet, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_CRC);
#endif
}
#endif

#endif

// MESSAGE TAA_DRONE_TELEMETRY UNPACKING


/**
 * @brief Get field sequence from taa_drone_telemetry message
 *
 * @return  Incremented each time a drone hearbeat is sent.
 */
static inline uint16_t mavlink_msg_taa_drone_telemetry_get_sequence(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field version from taa_drone_telemetry message
 *
 * @return  Version number of telemetry protocol.
 */
static inline uint8_t mavlink_msg_taa_drone_telemetry_get_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field seconds from taa_drone_telemetry message
 *
 * @return [s] Seconds field of timestamp.
 */
static inline uint64_t mavlink_msg_taa_drone_telemetry_get_seconds(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field nanoseconds from taa_drone_telemetry message
 *
 * @return [ns] Nanoseconds field of timestamp.
 */
static inline uint32_t mavlink_msg_taa_drone_telemetry_get_nanoseconds(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Decode a taa_drone_telemetry message into a struct
 *
 * @param msg The message to decode
 * @param taa_drone_telemetry C-struct to decode the message contents into
 */
static inline void mavlink_msg_taa_drone_telemetry_decode(const mavlink_message_t* msg, mavlink_taa_drone_telemetry_t* taa_drone_telemetry)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    taa_drone_telemetry->seconds = mavlink_msg_taa_drone_telemetry_get_seconds(msg);
    taa_drone_telemetry->nanoseconds = mavlink_msg_taa_drone_telemetry_get_nanoseconds(msg);
    taa_drone_telemetry->sequence = mavlink_msg_taa_drone_telemetry_get_sequence(msg);
    taa_drone_telemetry->version = mavlink_msg_taa_drone_telemetry_get_version(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN? msg->len : MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN;
        memset(taa_drone_telemetry, 0, MAVLINK_MSG_ID_TAA_DRONE_TELEMETRY_LEN);
    memcpy(taa_drone_telemetry, _MAV_PAYLOAD(msg), len);
#endif
}
