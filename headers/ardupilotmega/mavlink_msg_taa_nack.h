#pragma once
// MESSAGE TAA_NACK PACKING

#define MAVLINK_MSG_ID_TAA_NACK 20002


typedef struct __mavlink_taa_nack_t {
 uint32_t error_type; /*<  why the message is being rejected.*/
 uint16_t message_type; /*<  Type of packet not being acknowledged.*/
 uint16_t sequence_response; /*<  Sequence number of packet not being acknowledged.*/
} mavlink_taa_nack_t;

#define MAVLINK_MSG_ID_TAA_NACK_LEN 8
#define MAVLINK_MSG_ID_TAA_NACK_MIN_LEN 8
#define MAVLINK_MSG_ID_20002_LEN 8
#define MAVLINK_MSG_ID_20002_MIN_LEN 8

#define MAVLINK_MSG_ID_TAA_NACK_CRC 120
#define MAVLINK_MSG_ID_20002_CRC 120



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TAA_NACK { \
    20002, \
    "TAA_NACK", \
    3, \
    {  { "message_type", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_taa_nack_t, message_type) }, \
         { "sequence_response", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_taa_nack_t, sequence_response) }, \
         { "error_type", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_taa_nack_t, error_type) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TAA_NACK { \
    "TAA_NACK", \
    3, \
    {  { "message_type", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_taa_nack_t, message_type) }, \
         { "sequence_response", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_taa_nack_t, sequence_response) }, \
         { "error_type", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_taa_nack_t, error_type) }, \
         } \
}
#endif

/**
 * @brief Pack a taa_nack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param message_type  Type of packet not being acknowledged.
 * @param sequence_response  Sequence number of packet not being acknowledged.
 * @param error_type  why the message is being rejected.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_nack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t message_type, uint16_t sequence_response, uint32_t error_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_NACK_LEN];
    _mav_put_uint32_t(buf, 0, error_type);
    _mav_put_uint16_t(buf, 4, message_type);
    _mav_put_uint16_t(buf, 6, sequence_response);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_NACK_LEN);
#else
    mavlink_taa_nack_t packet;
    packet.error_type = error_type;
    packet.message_type = message_type;
    packet.sequence_response = sequence_response;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_NACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_NACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TAA_NACK_MIN_LEN, MAVLINK_MSG_ID_TAA_NACK_LEN, MAVLINK_MSG_ID_TAA_NACK_CRC);
}

/**
 * @brief Pack a taa_nack message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param message_type  Type of packet not being acknowledged.
 * @param sequence_response  Sequence number of packet not being acknowledged.
 * @param error_type  why the message is being rejected.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_nack_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t message_type,uint16_t sequence_response,uint32_t error_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_NACK_LEN];
    _mav_put_uint32_t(buf, 0, error_type);
    _mav_put_uint16_t(buf, 4, message_type);
    _mav_put_uint16_t(buf, 6, sequence_response);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_NACK_LEN);
#else
    mavlink_taa_nack_t packet;
    packet.error_type = error_type;
    packet.message_type = message_type;
    packet.sequence_response = sequence_response;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_NACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_NACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TAA_NACK_MIN_LEN, MAVLINK_MSG_ID_TAA_NACK_LEN, MAVLINK_MSG_ID_TAA_NACK_CRC);
}

/**
 * @brief Encode a taa_nack struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param taa_nack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_nack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_taa_nack_t* taa_nack)
{
    return mavlink_msg_taa_nack_pack(system_id, component_id, msg, taa_nack->message_type, taa_nack->sequence_response, taa_nack->error_type);
}

/**
 * @brief Encode a taa_nack struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param taa_nack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_nack_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_taa_nack_t* taa_nack)
{
    return mavlink_msg_taa_nack_pack_chan(system_id, component_id, chan, msg, taa_nack->message_type, taa_nack->sequence_response, taa_nack->error_type);
}

/**
 * @brief Send a taa_nack message
 * @param chan MAVLink channel to send the message
 *
 * @param message_type  Type of packet not being acknowledged.
 * @param sequence_response  Sequence number of packet not being acknowledged.
 * @param error_type  why the message is being rejected.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_taa_nack_send(mavlink_channel_t chan, uint16_t message_type, uint16_t sequence_response, uint32_t error_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_NACK_LEN];
    _mav_put_uint32_t(buf, 0, error_type);
    _mav_put_uint16_t(buf, 4, message_type);
    _mav_put_uint16_t(buf, 6, sequence_response);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_NACK, buf, MAVLINK_MSG_ID_TAA_NACK_MIN_LEN, MAVLINK_MSG_ID_TAA_NACK_LEN, MAVLINK_MSG_ID_TAA_NACK_CRC);
#else
    mavlink_taa_nack_t packet;
    packet.error_type = error_type;
    packet.message_type = message_type;
    packet.sequence_response = sequence_response;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_NACK, (const char *)&packet, MAVLINK_MSG_ID_TAA_NACK_MIN_LEN, MAVLINK_MSG_ID_TAA_NACK_LEN, MAVLINK_MSG_ID_TAA_NACK_CRC);
#endif
}

/**
 * @brief Send a taa_nack message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_taa_nack_send_struct(mavlink_channel_t chan, const mavlink_taa_nack_t* taa_nack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_taa_nack_send(chan, taa_nack->message_type, taa_nack->sequence_response, taa_nack->error_type);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_NACK, (const char *)taa_nack, MAVLINK_MSG_ID_TAA_NACK_MIN_LEN, MAVLINK_MSG_ID_TAA_NACK_LEN, MAVLINK_MSG_ID_TAA_NACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_TAA_NACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_taa_nack_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t message_type, uint16_t sequence_response, uint32_t error_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, error_type);
    _mav_put_uint16_t(buf, 4, message_type);
    _mav_put_uint16_t(buf, 6, sequence_response);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_NACK, buf, MAVLINK_MSG_ID_TAA_NACK_MIN_LEN, MAVLINK_MSG_ID_TAA_NACK_LEN, MAVLINK_MSG_ID_TAA_NACK_CRC);
#else
    mavlink_taa_nack_t *packet = (mavlink_taa_nack_t *)msgbuf;
    packet->error_type = error_type;
    packet->message_type = message_type;
    packet->sequence_response = sequence_response;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_NACK, (const char *)packet, MAVLINK_MSG_ID_TAA_NACK_MIN_LEN, MAVLINK_MSG_ID_TAA_NACK_LEN, MAVLINK_MSG_ID_TAA_NACK_CRC);
#endif
}
#endif

#endif

// MESSAGE TAA_NACK UNPACKING


/**
 * @brief Get field message_type from taa_nack message
 *
 * @return  Type of packet not being acknowledged.
 */
static inline uint16_t mavlink_msg_taa_nack_get_message_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field sequence_response from taa_nack message
 *
 * @return  Sequence number of packet not being acknowledged.
 */
static inline uint16_t mavlink_msg_taa_nack_get_sequence_response(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field error_type from taa_nack message
 *
 * @return  why the message is being rejected.
 */
static inline uint32_t mavlink_msg_taa_nack_get_error_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Decode a taa_nack message into a struct
 *
 * @param msg The message to decode
 * @param taa_nack C-struct to decode the message contents into
 */
static inline void mavlink_msg_taa_nack_decode(const mavlink_message_t* msg, mavlink_taa_nack_t* taa_nack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    taa_nack->error_type = mavlink_msg_taa_nack_get_error_type(msg);
    taa_nack->message_type = mavlink_msg_taa_nack_get_message_type(msg);
    taa_nack->sequence_response = mavlink_msg_taa_nack_get_sequence_response(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TAA_NACK_LEN? msg->len : MAVLINK_MSG_ID_TAA_NACK_LEN;
        memset(taa_nack, 0, MAVLINK_MSG_ID_TAA_NACK_LEN);
    memcpy(taa_nack, _MAV_PAYLOAD(msg), len);
#endif
}
