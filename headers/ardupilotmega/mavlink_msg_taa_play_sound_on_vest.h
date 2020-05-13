#pragma once
// MESSAGE TAA_PLAY_SOUND_ON_VEST PACKING

#define MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST 20104


typedef struct __mavlink_taa_play_sound_on_vest_t {
 uint32_t sequence; /*<  Increment each time you send this command.*/
 uint16_t sound_index; /*<  Index of sound to play on vest.*/
 uint8_t volume_level; /*<  0 is default. otherwise, set volume level.*/
} mavlink_taa_play_sound_on_vest_t;

#define MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN 7
#define MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_MIN_LEN 7
#define MAVLINK_MSG_ID_20104_LEN 7
#define MAVLINK_MSG_ID_20104_MIN_LEN 7

#define MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_CRC 104
#define MAVLINK_MSG_ID_20104_CRC 104



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TAA_PLAY_SOUND_ON_VEST { \
    20104, \
    "TAA_PLAY_SOUND_ON_VEST", \
    3, \
    {  { "sound_index", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_taa_play_sound_on_vest_t, sound_index) }, \
         { "sequence", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_taa_play_sound_on_vest_t, sequence) }, \
         { "volume_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_taa_play_sound_on_vest_t, volume_level) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TAA_PLAY_SOUND_ON_VEST { \
    "TAA_PLAY_SOUND_ON_VEST", \
    3, \
    {  { "sound_index", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_taa_play_sound_on_vest_t, sound_index) }, \
         { "sequence", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_taa_play_sound_on_vest_t, sequence) }, \
         { "volume_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_taa_play_sound_on_vest_t, volume_level) }, \
         } \
}
#endif

/**
 * @brief Pack a taa_play_sound_on_vest message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sound_index  Index of sound to play on vest.
 * @param sequence  Increment each time you send this command.
 * @param volume_level  0 is default. otherwise, set volume level.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_play_sound_on_vest_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t sound_index, uint32_t sequence, uint8_t volume_level)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN];
    _mav_put_uint32_t(buf, 0, sequence);
    _mav_put_uint16_t(buf, 4, sound_index);
    _mav_put_uint8_t(buf, 6, volume_level);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN);
#else
    mavlink_taa_play_sound_on_vest_t packet;
    packet.sequence = sequence;
    packet.sound_index = sound_index;
    packet.volume_level = volume_level;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_MIN_LEN, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_CRC);
}

/**
 * @brief Pack a taa_play_sound_on_vest message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sound_index  Index of sound to play on vest.
 * @param sequence  Increment each time you send this command.
 * @param volume_level  0 is default. otherwise, set volume level.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_play_sound_on_vest_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t sound_index,uint32_t sequence,uint8_t volume_level)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN];
    _mav_put_uint32_t(buf, 0, sequence);
    _mav_put_uint16_t(buf, 4, sound_index);
    _mav_put_uint8_t(buf, 6, volume_level);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN);
#else
    mavlink_taa_play_sound_on_vest_t packet;
    packet.sequence = sequence;
    packet.sound_index = sound_index;
    packet.volume_level = volume_level;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_MIN_LEN, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_CRC);
}

/**
 * @brief Encode a taa_play_sound_on_vest struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param taa_play_sound_on_vest C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_play_sound_on_vest_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_taa_play_sound_on_vest_t* taa_play_sound_on_vest)
{
    return mavlink_msg_taa_play_sound_on_vest_pack(system_id, component_id, msg, taa_play_sound_on_vest->sound_index, taa_play_sound_on_vest->sequence, taa_play_sound_on_vest->volume_level);
}

/**
 * @brief Encode a taa_play_sound_on_vest struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param taa_play_sound_on_vest C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_play_sound_on_vest_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_taa_play_sound_on_vest_t* taa_play_sound_on_vest)
{
    return mavlink_msg_taa_play_sound_on_vest_pack_chan(system_id, component_id, chan, msg, taa_play_sound_on_vest->sound_index, taa_play_sound_on_vest->sequence, taa_play_sound_on_vest->volume_level);
}

/**
 * @brief Send a taa_play_sound_on_vest message
 * @param chan MAVLink channel to send the message
 *
 * @param sound_index  Index of sound to play on vest.
 * @param sequence  Increment each time you send this command.
 * @param volume_level  0 is default. otherwise, set volume level.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_taa_play_sound_on_vest_send(mavlink_channel_t chan, uint16_t sound_index, uint32_t sequence, uint8_t volume_level)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN];
    _mav_put_uint32_t(buf, 0, sequence);
    _mav_put_uint16_t(buf, 4, sound_index);
    _mav_put_uint8_t(buf, 6, volume_level);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST, buf, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_MIN_LEN, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_CRC);
#else
    mavlink_taa_play_sound_on_vest_t packet;
    packet.sequence = sequence;
    packet.sound_index = sound_index;
    packet.volume_level = volume_level;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST, (const char *)&packet, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_MIN_LEN, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_CRC);
#endif
}

/**
 * @brief Send a taa_play_sound_on_vest message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_taa_play_sound_on_vest_send_struct(mavlink_channel_t chan, const mavlink_taa_play_sound_on_vest_t* taa_play_sound_on_vest)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_taa_play_sound_on_vest_send(chan, taa_play_sound_on_vest->sound_index, taa_play_sound_on_vest->sequence, taa_play_sound_on_vest->volume_level);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST, (const char *)taa_play_sound_on_vest, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_MIN_LEN, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_CRC);
#endif
}

#if MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_taa_play_sound_on_vest_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t sound_index, uint32_t sequence, uint8_t volume_level)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, sequence);
    _mav_put_uint16_t(buf, 4, sound_index);
    _mav_put_uint8_t(buf, 6, volume_level);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST, buf, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_MIN_LEN, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_CRC);
#else
    mavlink_taa_play_sound_on_vest_t *packet = (mavlink_taa_play_sound_on_vest_t *)msgbuf;
    packet->sequence = sequence;
    packet->sound_index = sound_index;
    packet->volume_level = volume_level;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST, (const char *)packet, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_MIN_LEN, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_CRC);
#endif
}
#endif

#endif

// MESSAGE TAA_PLAY_SOUND_ON_VEST UNPACKING


/**
 * @brief Get field sound_index from taa_play_sound_on_vest message
 *
 * @return  Index of sound to play on vest.
 */
static inline uint16_t mavlink_msg_taa_play_sound_on_vest_get_sound_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field sequence from taa_play_sound_on_vest message
 *
 * @return  Increment each time you send this command.
 */
static inline uint32_t mavlink_msg_taa_play_sound_on_vest_get_sequence(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field volume_level from taa_play_sound_on_vest message
 *
 * @return  0 is default. otherwise, set volume level.
 */
static inline uint8_t mavlink_msg_taa_play_sound_on_vest_get_volume_level(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Decode a taa_play_sound_on_vest message into a struct
 *
 * @param msg The message to decode
 * @param taa_play_sound_on_vest C-struct to decode the message contents into
 */
static inline void mavlink_msg_taa_play_sound_on_vest_decode(const mavlink_message_t* msg, mavlink_taa_play_sound_on_vest_t* taa_play_sound_on_vest)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    taa_play_sound_on_vest->sequence = mavlink_msg_taa_play_sound_on_vest_get_sequence(msg);
    taa_play_sound_on_vest->sound_index = mavlink_msg_taa_play_sound_on_vest_get_sound_index(msg);
    taa_play_sound_on_vest->volume_level = mavlink_msg_taa_play_sound_on_vest_get_volume_level(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN? msg->len : MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN;
        memset(taa_play_sound_on_vest, 0, MAVLINK_MSG_ID_TAA_PLAY_SOUND_ON_VEST_LEN);
    memcpy(taa_play_sound_on_vest, _MAV_PAYLOAD(msg), len);
#endif
}
