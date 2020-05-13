#pragma once
// MESSAGE TAA_SET_PARAMETERS_ON_VEST PACKING

#define MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST 20103


typedef struct __mavlink_taa_set_parameters_on_vest_t {
 uint32_t parameter_value; /*<  Value to set.*/
 uint16_t parameter_list_version; /*<  Identifier of parameter list version.*/
 uint16_t parameter_index; /*<  Parameter index to set.*/
 uint8_t interpretation_type; /*<  Interpret value as 0=uint32, 1=int32, 2=float32.*/
} mavlink_taa_set_parameters_on_vest_t;

#define MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN 9
#define MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_MIN_LEN 9
#define MAVLINK_MSG_ID_20103_LEN 9
#define MAVLINK_MSG_ID_20103_MIN_LEN 9

#define MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_CRC 134
#define MAVLINK_MSG_ID_20103_CRC 134



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TAA_SET_PARAMETERS_ON_VEST { \
    20103, \
    "TAA_SET_PARAMETERS_ON_VEST", \
    4, \
    {  { "parameter_list_version", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_taa_set_parameters_on_vest_t, parameter_list_version) }, \
         { "parameter_index", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_taa_set_parameters_on_vest_t, parameter_index) }, \
         { "parameter_value", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_taa_set_parameters_on_vest_t, parameter_value) }, \
         { "interpretation_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_taa_set_parameters_on_vest_t, interpretation_type) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TAA_SET_PARAMETERS_ON_VEST { \
    "TAA_SET_PARAMETERS_ON_VEST", \
    4, \
    {  { "parameter_list_version", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_taa_set_parameters_on_vest_t, parameter_list_version) }, \
         { "parameter_index", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_taa_set_parameters_on_vest_t, parameter_index) }, \
         { "parameter_value", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_taa_set_parameters_on_vest_t, parameter_value) }, \
         { "interpretation_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_taa_set_parameters_on_vest_t, interpretation_type) }, \
         } \
}
#endif

/**
 * @brief Pack a taa_set_parameters_on_vest message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param parameter_list_version  Identifier of parameter list version.
 * @param parameter_index  Parameter index to set.
 * @param parameter_value  Value to set.
 * @param interpretation_type  Interpret value as 0=uint32, 1=int32, 2=float32.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_set_parameters_on_vest_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t parameter_list_version, uint16_t parameter_index, uint32_t parameter_value, uint8_t interpretation_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN];
    _mav_put_uint32_t(buf, 0, parameter_value);
    _mav_put_uint16_t(buf, 4, parameter_list_version);
    _mav_put_uint16_t(buf, 6, parameter_index);
    _mav_put_uint8_t(buf, 8, interpretation_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN);
#else
    mavlink_taa_set_parameters_on_vest_t packet;
    packet.parameter_value = parameter_value;
    packet.parameter_list_version = parameter_list_version;
    packet.parameter_index = parameter_index;
    packet.interpretation_type = interpretation_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_MIN_LEN, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_CRC);
}

/**
 * @brief Pack a taa_set_parameters_on_vest message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param parameter_list_version  Identifier of parameter list version.
 * @param parameter_index  Parameter index to set.
 * @param parameter_value  Value to set.
 * @param interpretation_type  Interpret value as 0=uint32, 1=int32, 2=float32.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_set_parameters_on_vest_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t parameter_list_version,uint16_t parameter_index,uint32_t parameter_value,uint8_t interpretation_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN];
    _mav_put_uint32_t(buf, 0, parameter_value);
    _mav_put_uint16_t(buf, 4, parameter_list_version);
    _mav_put_uint16_t(buf, 6, parameter_index);
    _mav_put_uint8_t(buf, 8, interpretation_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN);
#else
    mavlink_taa_set_parameters_on_vest_t packet;
    packet.parameter_value = parameter_value;
    packet.parameter_list_version = parameter_list_version;
    packet.parameter_index = parameter_index;
    packet.interpretation_type = interpretation_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_MIN_LEN, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_CRC);
}

/**
 * @brief Encode a taa_set_parameters_on_vest struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param taa_set_parameters_on_vest C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_set_parameters_on_vest_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_taa_set_parameters_on_vest_t* taa_set_parameters_on_vest)
{
    return mavlink_msg_taa_set_parameters_on_vest_pack(system_id, component_id, msg, taa_set_parameters_on_vest->parameter_list_version, taa_set_parameters_on_vest->parameter_index, taa_set_parameters_on_vest->parameter_value, taa_set_parameters_on_vest->interpretation_type);
}

/**
 * @brief Encode a taa_set_parameters_on_vest struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param taa_set_parameters_on_vest C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_set_parameters_on_vest_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_taa_set_parameters_on_vest_t* taa_set_parameters_on_vest)
{
    return mavlink_msg_taa_set_parameters_on_vest_pack_chan(system_id, component_id, chan, msg, taa_set_parameters_on_vest->parameter_list_version, taa_set_parameters_on_vest->parameter_index, taa_set_parameters_on_vest->parameter_value, taa_set_parameters_on_vest->interpretation_type);
}

/**
 * @brief Send a taa_set_parameters_on_vest message
 * @param chan MAVLink channel to send the message
 *
 * @param parameter_list_version  Identifier of parameter list version.
 * @param parameter_index  Parameter index to set.
 * @param parameter_value  Value to set.
 * @param interpretation_type  Interpret value as 0=uint32, 1=int32, 2=float32.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_taa_set_parameters_on_vest_send(mavlink_channel_t chan, uint16_t parameter_list_version, uint16_t parameter_index, uint32_t parameter_value, uint8_t interpretation_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN];
    _mav_put_uint32_t(buf, 0, parameter_value);
    _mav_put_uint16_t(buf, 4, parameter_list_version);
    _mav_put_uint16_t(buf, 6, parameter_index);
    _mav_put_uint8_t(buf, 8, interpretation_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST, buf, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_MIN_LEN, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_CRC);
#else
    mavlink_taa_set_parameters_on_vest_t packet;
    packet.parameter_value = parameter_value;
    packet.parameter_list_version = parameter_list_version;
    packet.parameter_index = parameter_index;
    packet.interpretation_type = interpretation_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST, (const char *)&packet, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_MIN_LEN, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_CRC);
#endif
}

/**
 * @brief Send a taa_set_parameters_on_vest message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_taa_set_parameters_on_vest_send_struct(mavlink_channel_t chan, const mavlink_taa_set_parameters_on_vest_t* taa_set_parameters_on_vest)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_taa_set_parameters_on_vest_send(chan, taa_set_parameters_on_vest->parameter_list_version, taa_set_parameters_on_vest->parameter_index, taa_set_parameters_on_vest->parameter_value, taa_set_parameters_on_vest->interpretation_type);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST, (const char *)taa_set_parameters_on_vest, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_MIN_LEN, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_CRC);
#endif
}

#if MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_taa_set_parameters_on_vest_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t parameter_list_version, uint16_t parameter_index, uint32_t parameter_value, uint8_t interpretation_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, parameter_value);
    _mav_put_uint16_t(buf, 4, parameter_list_version);
    _mav_put_uint16_t(buf, 6, parameter_index);
    _mav_put_uint8_t(buf, 8, interpretation_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST, buf, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_MIN_LEN, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_CRC);
#else
    mavlink_taa_set_parameters_on_vest_t *packet = (mavlink_taa_set_parameters_on_vest_t *)msgbuf;
    packet->parameter_value = parameter_value;
    packet->parameter_list_version = parameter_list_version;
    packet->parameter_index = parameter_index;
    packet->interpretation_type = interpretation_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST, (const char *)packet, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_MIN_LEN, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_CRC);
#endif
}
#endif

#endif

// MESSAGE TAA_SET_PARAMETERS_ON_VEST UNPACKING


/**
 * @brief Get field parameter_list_version from taa_set_parameters_on_vest message
 *
 * @return  Identifier of parameter list version.
 */
static inline uint16_t mavlink_msg_taa_set_parameters_on_vest_get_parameter_list_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field parameter_index from taa_set_parameters_on_vest message
 *
 * @return  Parameter index to set.
 */
static inline uint16_t mavlink_msg_taa_set_parameters_on_vest_get_parameter_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field parameter_value from taa_set_parameters_on_vest message
 *
 * @return  Value to set.
 */
static inline uint32_t mavlink_msg_taa_set_parameters_on_vest_get_parameter_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field interpretation_type from taa_set_parameters_on_vest message
 *
 * @return  Interpret value as 0=uint32, 1=int32, 2=float32.
 */
static inline uint8_t mavlink_msg_taa_set_parameters_on_vest_get_interpretation_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Decode a taa_set_parameters_on_vest message into a struct
 *
 * @param msg The message to decode
 * @param taa_set_parameters_on_vest C-struct to decode the message contents into
 */
static inline void mavlink_msg_taa_set_parameters_on_vest_decode(const mavlink_message_t* msg, mavlink_taa_set_parameters_on_vest_t* taa_set_parameters_on_vest)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    taa_set_parameters_on_vest->parameter_value = mavlink_msg_taa_set_parameters_on_vest_get_parameter_value(msg);
    taa_set_parameters_on_vest->parameter_list_version = mavlink_msg_taa_set_parameters_on_vest_get_parameter_list_version(msg);
    taa_set_parameters_on_vest->parameter_index = mavlink_msg_taa_set_parameters_on_vest_get_parameter_index(msg);
    taa_set_parameters_on_vest->interpretation_type = mavlink_msg_taa_set_parameters_on_vest_get_interpretation_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN? msg->len : MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN;
        memset(taa_set_parameters_on_vest, 0, MAVLINK_MSG_ID_TAA_SET_PARAMETERS_ON_VEST_LEN);
    memcpy(taa_set_parameters_on_vest, _MAV_PAYLOAD(msg), len);
#endif
}
