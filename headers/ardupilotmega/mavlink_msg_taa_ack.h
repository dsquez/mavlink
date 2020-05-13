#pragma once
// MESSAGE TAA_ACK PACKING

#define MAVLINK_MSG_ID_TAA_ACK 20001


typedef struct __mavlink_taa_ack_t {
 uint16_t message_type; /*<  Type of packet being acknowledged*/
 uint16_t sequence_response; /*<  Replies with the sequence number of the packet it is acknowledging*/
} mavlink_taa_ack_t;

#define MAVLINK_MSG_ID_TAA_ACK_LEN 4
#define MAVLINK_MSG_ID_TAA_ACK_MIN_LEN 4
#define MAVLINK_MSG_ID_20001_LEN 4
#define MAVLINK_MSG_ID_20001_MIN_LEN 4

#define MAVLINK_MSG_ID_TAA_ACK_CRC 146
#define MAVLINK_MSG_ID_20001_CRC 146



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TAA_ACK { \
    20001, \
    "TAA_ACK", \
    2, \
    {  { "message_type", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_taa_ack_t, message_type) }, \
         { "sequence_response", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_taa_ack_t, sequence_response) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TAA_ACK { \
    "TAA_ACK", \
    2, \
    {  { "message_type", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_taa_ack_t, message_type) }, \
         { "sequence_response", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_taa_ack_t, sequence_response) }, \
         } \
}
#endif

/**
 * @brief Pack a taa_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param message_type  Type of packet being acknowledged
 * @param sequence_response  Replies with the sequence number of the packet it is acknowledging
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t message_type, uint16_t sequence_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_ACK_LEN];
    _mav_put_uint16_t(buf, 0, message_type);
    _mav_put_uint16_t(buf, 2, sequence_response);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_ACK_LEN);
#else
    mavlink_taa_ack_t packet;
    packet.message_type = message_type;
    packet.sequence_response = sequence_response;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_ACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TAA_ACK_MIN_LEN, MAVLINK_MSG_ID_TAA_ACK_LEN, MAVLINK_MSG_ID_TAA_ACK_CRC);
}

/**
 * @brief Pack a taa_ack message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param message_type  Type of packet being acknowledged
 * @param sequence_response  Replies with the sequence number of the packet it is acknowledging
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_ack_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t message_type,uint16_t sequence_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_ACK_LEN];
    _mav_put_uint16_t(buf, 0, message_type);
    _mav_put_uint16_t(buf, 2, sequence_response);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_ACK_LEN);
#else
    mavlink_taa_ack_t packet;
    packet.message_type = message_type;
    packet.sequence_response = sequence_response;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_ACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TAA_ACK_MIN_LEN, MAVLINK_MSG_ID_TAA_ACK_LEN, MAVLINK_MSG_ID_TAA_ACK_CRC);
}

/**
 * @brief Encode a taa_ack struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param taa_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_ack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_taa_ack_t* taa_ack)
{
    return mavlink_msg_taa_ack_pack(system_id, component_id, msg, taa_ack->message_type, taa_ack->sequence_response);
}

/**
 * @brief Encode a taa_ack struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param taa_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_ack_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_taa_ack_t* taa_ack)
{
    return mavlink_msg_taa_ack_pack_chan(system_id, component_id, chan, msg, taa_ack->message_type, taa_ack->sequence_response);
}

/**
 * @brief Send a taa_ack message
 * @param chan MAVLink channel to send the message
 *
 * @param message_type  Type of packet being acknowledged
 * @param sequence_response  Replies with the sequence number of the packet it is acknowledging
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_taa_ack_send(mavlink_channel_t chan, uint16_t message_type, uint16_t sequence_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_ACK_LEN];
    _mav_put_uint16_t(buf, 0, message_type);
    _mav_put_uint16_t(buf, 2, sequence_response);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_ACK, buf, MAVLINK_MSG_ID_TAA_ACK_MIN_LEN, MAVLINK_MSG_ID_TAA_ACK_LEN, MAVLINK_MSG_ID_TAA_ACK_CRC);
#else
    mavlink_taa_ack_t packet;
    packet.message_type = message_type;
    packet.sequence_response = sequence_response;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_ACK, (const char *)&packet, MAVLINK_MSG_ID_TAA_ACK_MIN_LEN, MAVLINK_MSG_ID_TAA_ACK_LEN, MAVLINK_MSG_ID_TAA_ACK_CRC);
#endif
}

/**
 * @brief Send a taa_ack message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_taa_ack_send_struct(mavlink_channel_t chan, const mavlink_taa_ack_t* taa_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_taa_ack_send(chan, taa_ack->message_type, taa_ack->sequence_response);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_ACK, (const char *)taa_ack, MAVLINK_MSG_ID_TAA_ACK_MIN_LEN, MAVLINK_MSG_ID_TAA_ACK_LEN, MAVLINK_MSG_ID_TAA_ACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_TAA_ACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_taa_ack_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t message_type, uint16_t sequence_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, message_type);
    _mav_put_uint16_t(buf, 2, sequence_response);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_ACK, buf, MAVLINK_MSG_ID_TAA_ACK_MIN_LEN, MAVLINK_MSG_ID_TAA_ACK_LEN, MAVLINK_MSG_ID_TAA_ACK_CRC);
#else
    mavlink_taa_ack_t *packet = (mavlink_taa_ack_t *)msgbuf;
    packet->message_type = message_type;
    packet->sequence_response = sequence_response;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_ACK, (const char *)packet, MAVLINK_MSG_ID_TAA_ACK_MIN_LEN, MAVLINK_MSG_ID_TAA_ACK_LEN, MAVLINK_MSG_ID_TAA_ACK_CRC);
#endif
}
#endif

#endif

// MESSAGE TAA_ACK UNPACKING


/**
 * @brief Get field message_type from taa_ack message
 *
 * @return  Type of packet being acknowledged
 */
static inline uint16_t mavlink_msg_taa_ack_get_message_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field sequence_response from taa_ack message
 *
 * @return  Replies with the sequence number of the packet it is acknowledging
 */
static inline uint16_t mavlink_msg_taa_ack_get_sequence_response(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Decode a taa_ack message into a struct
 *
 * @param msg The message to decode
 * @param taa_ack C-struct to decode the message contents into
 */
static inline void mavlink_msg_taa_ack_decode(const mavlink_message_t* msg, mavlink_taa_ack_t* taa_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    taa_ack->message_type = mavlink_msg_taa_ack_get_message_type(msg);
    taa_ack->sequence_response = mavlink_msg_taa_ack_get_sequence_response(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TAA_ACK_LEN? msg->len : MAVLINK_MSG_ID_TAA_ACK_LEN;
        memset(taa_ack, 0, MAVLINK_MSG_ID_TAA_ACK_LEN);
    memcpy(taa_ack, _MAV_PAYLOAD(msg), len);
#endif
}
