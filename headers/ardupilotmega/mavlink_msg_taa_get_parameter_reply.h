#pragma once
// MESSAGE TAA_GET_PARAMETER_REPLY PACKING

#define MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY 20202


typedef struct __mavlink_taa_get_parameter_reply_t {
 uint32_t parameter_value; /*<  Value of vest parameter.*/
 uint16_t parameter_list_version; /*<  Identifier of parameter list version.*/
 uint16_t parameter_index; /*<  Parameter Index.*/
} mavlink_taa_get_parameter_reply_t;

#define MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN 8
#define MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_MIN_LEN 8
#define MAVLINK_MSG_ID_20202_LEN 8
#define MAVLINK_MSG_ID_20202_MIN_LEN 8

#define MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_CRC 246
#define MAVLINK_MSG_ID_20202_CRC 246



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TAA_GET_PARAMETER_REPLY { \
    20202, \
    "TAA_GET_PARAMETER_REPLY", \
    3, \
    {  { "parameter_list_version", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_taa_get_parameter_reply_t, parameter_list_version) }, \
         { "parameter_index", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_taa_get_parameter_reply_t, parameter_index) }, \
         { "parameter_value", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_taa_get_parameter_reply_t, parameter_value) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TAA_GET_PARAMETER_REPLY { \
    "TAA_GET_PARAMETER_REPLY", \
    3, \
    {  { "parameter_list_version", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_taa_get_parameter_reply_t, parameter_list_version) }, \
         { "parameter_index", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_taa_get_parameter_reply_t, parameter_index) }, \
         { "parameter_value", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_taa_get_parameter_reply_t, parameter_value) }, \
         } \
}
#endif

/**
 * @brief Pack a taa_get_parameter_reply message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param parameter_list_version  Identifier of parameter list version.
 * @param parameter_index  Parameter Index.
 * @param parameter_value  Value of vest parameter.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_get_parameter_reply_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t parameter_list_version, uint16_t parameter_index, uint32_t parameter_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN];
    _mav_put_uint32_t(buf, 0, parameter_value);
    _mav_put_uint16_t(buf, 4, parameter_list_version);
    _mav_put_uint16_t(buf, 6, parameter_index);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN);
#else
    mavlink_taa_get_parameter_reply_t packet;
    packet.parameter_value = parameter_value;
    packet.parameter_list_version = parameter_list_version;
    packet.parameter_index = parameter_index;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_MIN_LEN, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_CRC);
}

/**
 * @brief Pack a taa_get_parameter_reply message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param parameter_list_version  Identifier of parameter list version.
 * @param parameter_index  Parameter Index.
 * @param parameter_value  Value of vest parameter.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_get_parameter_reply_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t parameter_list_version,uint16_t parameter_index,uint32_t parameter_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN];
    _mav_put_uint32_t(buf, 0, parameter_value);
    _mav_put_uint16_t(buf, 4, parameter_list_version);
    _mav_put_uint16_t(buf, 6, parameter_index);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN);
#else
    mavlink_taa_get_parameter_reply_t packet;
    packet.parameter_value = parameter_value;
    packet.parameter_list_version = parameter_list_version;
    packet.parameter_index = parameter_index;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_MIN_LEN, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_CRC);
}

/**
 * @brief Encode a taa_get_parameter_reply struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param taa_get_parameter_reply C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_get_parameter_reply_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_taa_get_parameter_reply_t* taa_get_parameter_reply)
{
    return mavlink_msg_taa_get_parameter_reply_pack(system_id, component_id, msg, taa_get_parameter_reply->parameter_list_version, taa_get_parameter_reply->parameter_index, taa_get_parameter_reply->parameter_value);
}

/**
 * @brief Encode a taa_get_parameter_reply struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param taa_get_parameter_reply C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_get_parameter_reply_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_taa_get_parameter_reply_t* taa_get_parameter_reply)
{
    return mavlink_msg_taa_get_parameter_reply_pack_chan(system_id, component_id, chan, msg, taa_get_parameter_reply->parameter_list_version, taa_get_parameter_reply->parameter_index, taa_get_parameter_reply->parameter_value);
}

/**
 * @brief Send a taa_get_parameter_reply message
 * @param chan MAVLink channel to send the message
 *
 * @param parameter_list_version  Identifier of parameter list version.
 * @param parameter_index  Parameter Index.
 * @param parameter_value  Value of vest parameter.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_taa_get_parameter_reply_send(mavlink_channel_t chan, uint16_t parameter_list_version, uint16_t parameter_index, uint32_t parameter_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN];
    _mav_put_uint32_t(buf, 0, parameter_value);
    _mav_put_uint16_t(buf, 4, parameter_list_version);
    _mav_put_uint16_t(buf, 6, parameter_index);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY, buf, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_MIN_LEN, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_CRC);
#else
    mavlink_taa_get_parameter_reply_t packet;
    packet.parameter_value = parameter_value;
    packet.parameter_list_version = parameter_list_version;
    packet.parameter_index = parameter_index;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY, (const char *)&packet, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_MIN_LEN, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_CRC);
#endif
}

/**
 * @brief Send a taa_get_parameter_reply message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_taa_get_parameter_reply_send_struct(mavlink_channel_t chan, const mavlink_taa_get_parameter_reply_t* taa_get_parameter_reply)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_taa_get_parameter_reply_send(chan, taa_get_parameter_reply->parameter_list_version, taa_get_parameter_reply->parameter_index, taa_get_parameter_reply->parameter_value);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY, (const char *)taa_get_parameter_reply, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_MIN_LEN, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_CRC);
#endif
}

#if MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_taa_get_parameter_reply_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t parameter_list_version, uint16_t parameter_index, uint32_t parameter_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, parameter_value);
    _mav_put_uint16_t(buf, 4, parameter_list_version);
    _mav_put_uint16_t(buf, 6, parameter_index);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY, buf, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_MIN_LEN, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_CRC);
#else
    mavlink_taa_get_parameter_reply_t *packet = (mavlink_taa_get_parameter_reply_t *)msgbuf;
    packet->parameter_value = parameter_value;
    packet->parameter_list_version = parameter_list_version;
    packet->parameter_index = parameter_index;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY, (const char *)packet, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_MIN_LEN, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_CRC);
#endif
}
#endif

#endif

// MESSAGE TAA_GET_PARAMETER_REPLY UNPACKING


/**
 * @brief Get field parameter_list_version from taa_get_parameter_reply message
 *
 * @return  Identifier of parameter list version.
 */
static inline uint16_t mavlink_msg_taa_get_parameter_reply_get_parameter_list_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field parameter_index from taa_get_parameter_reply message
 *
 * @return  Parameter Index.
 */
static inline uint16_t mavlink_msg_taa_get_parameter_reply_get_parameter_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field parameter_value from taa_get_parameter_reply message
 *
 * @return  Value of vest parameter.
 */
static inline uint32_t mavlink_msg_taa_get_parameter_reply_get_parameter_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Decode a taa_get_parameter_reply message into a struct
 *
 * @param msg The message to decode
 * @param taa_get_parameter_reply C-struct to decode the message contents into
 */
static inline void mavlink_msg_taa_get_parameter_reply_decode(const mavlink_message_t* msg, mavlink_taa_get_parameter_reply_t* taa_get_parameter_reply)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    taa_get_parameter_reply->parameter_value = mavlink_msg_taa_get_parameter_reply_get_parameter_value(msg);
    taa_get_parameter_reply->parameter_list_version = mavlink_msg_taa_get_parameter_reply_get_parameter_list_version(msg);
    taa_get_parameter_reply->parameter_index = mavlink_msg_taa_get_parameter_reply_get_parameter_index(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN? msg->len : MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN;
        memset(taa_get_parameter_reply, 0, MAVLINK_MSG_ID_TAA_GET_PARAMETER_REPLY_LEN);
    memcpy(taa_get_parameter_reply, _MAV_PAYLOAD(msg), len);
#endif
}
