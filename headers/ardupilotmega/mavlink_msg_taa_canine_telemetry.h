#pragma once
// MESSAGE TAA_CANINE_TELEMETRY PACKING

#define MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY 20201


typedef struct __mavlink_taa_canine_telemetry_t {
 uint64_t seconds; /*< [s] Second field of timestamp.*/
 double gps_lat; /*< [deg] Dog vest latitude.*/
 double gps_lon; /*< [deg] Dog vest longitude.*/
 uint32_t nanoseconds; /*< [ns] Nanoseconds field of timestamp.*/
 float altitude_msl; /*< [m] MSL altitude from gps.*/
 float altitude_hae; /*< [m] Meters above ellipsoid (from gps).*/
 float heading_angle; /*< [deg] Heading reading from compass.*/
 uint32_t seconds_since_last_alert; /*< [s] Seconds since last alert.*/
 uint16_t sequence; /*<  Incremented each time packet is sent.*/
 uint8_t version; /*<  Version number of protocol.*/
} mavlink_taa_canine_telemetry_t;

#define MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN 47
#define MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_MIN_LEN 47
#define MAVLINK_MSG_ID_20201_LEN 47
#define MAVLINK_MSG_ID_20201_MIN_LEN 47

#define MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_CRC 125
#define MAVLINK_MSG_ID_20201_CRC 125



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TAA_CANINE_TELEMETRY { \
    20201, \
    "TAA_CANINE_TELEMETRY", \
    10, \
    {  { "sequence", NULL, MAVLINK_TYPE_UINT16_T, 0, 44, offsetof(mavlink_taa_canine_telemetry_t, sequence) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 46, offsetof(mavlink_taa_canine_telemetry_t, version) }, \
         { "seconds", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_taa_canine_telemetry_t, seconds) }, \
         { "nanoseconds", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_taa_canine_telemetry_t, nanoseconds) }, \
         { "gps_lat", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_taa_canine_telemetry_t, gps_lat) }, \
         { "gps_lon", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_taa_canine_telemetry_t, gps_lon) }, \
         { "altitude_msl", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_taa_canine_telemetry_t, altitude_msl) }, \
         { "altitude_hae", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_taa_canine_telemetry_t, altitude_hae) }, \
         { "heading_angle", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_taa_canine_telemetry_t, heading_angle) }, \
         { "seconds_since_last_alert", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_taa_canine_telemetry_t, seconds_since_last_alert) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TAA_CANINE_TELEMETRY { \
    "TAA_CANINE_TELEMETRY", \
    10, \
    {  { "sequence", NULL, MAVLINK_TYPE_UINT16_T, 0, 44, offsetof(mavlink_taa_canine_telemetry_t, sequence) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 46, offsetof(mavlink_taa_canine_telemetry_t, version) }, \
         { "seconds", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_taa_canine_telemetry_t, seconds) }, \
         { "nanoseconds", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_taa_canine_telemetry_t, nanoseconds) }, \
         { "gps_lat", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_taa_canine_telemetry_t, gps_lat) }, \
         { "gps_lon", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_taa_canine_telemetry_t, gps_lon) }, \
         { "altitude_msl", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_taa_canine_telemetry_t, altitude_msl) }, \
         { "altitude_hae", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_taa_canine_telemetry_t, altitude_hae) }, \
         { "heading_angle", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_taa_canine_telemetry_t, heading_angle) }, \
         { "seconds_since_last_alert", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_taa_canine_telemetry_t, seconds_since_last_alert) }, \
         } \
}
#endif

/**
 * @brief Pack a taa_canine_telemetry message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sequence  Incremented each time packet is sent.
 * @param version  Version number of protocol.
 * @param seconds [s] Second field of timestamp.
 * @param nanoseconds [ns] Nanoseconds field of timestamp.
 * @param gps_lat [deg] Dog vest latitude.
 * @param gps_lon [deg] Dog vest longitude.
 * @param altitude_msl [m] MSL altitude from gps.
 * @param altitude_hae [m] Meters above ellipsoid (from gps).
 * @param heading_angle [deg] Heading reading from compass.
 * @param seconds_since_last_alert [s] Seconds since last alert.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_canine_telemetry_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t sequence, uint8_t version, uint64_t seconds, uint32_t nanoseconds, double gps_lat, double gps_lon, float altitude_msl, float altitude_hae, float heading_angle, uint32_t seconds_since_last_alert)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN];
    _mav_put_uint64_t(buf, 0, seconds);
    _mav_put_double(buf, 8, gps_lat);
    _mav_put_double(buf, 16, gps_lon);
    _mav_put_uint32_t(buf, 24, nanoseconds);
    _mav_put_float(buf, 28, altitude_msl);
    _mav_put_float(buf, 32, altitude_hae);
    _mav_put_float(buf, 36, heading_angle);
    _mav_put_uint32_t(buf, 40, seconds_since_last_alert);
    _mav_put_uint16_t(buf, 44, sequence);
    _mav_put_uint8_t(buf, 46, version);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN);
#else
    mavlink_taa_canine_telemetry_t packet;
    packet.seconds = seconds;
    packet.gps_lat = gps_lat;
    packet.gps_lon = gps_lon;
    packet.nanoseconds = nanoseconds;
    packet.altitude_msl = altitude_msl;
    packet.altitude_hae = altitude_hae;
    packet.heading_angle = heading_angle;
    packet.seconds_since_last_alert = seconds_since_last_alert;
    packet.sequence = sequence;
    packet.version = version;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_CRC);
}

/**
 * @brief Pack a taa_canine_telemetry message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sequence  Incremented each time packet is sent.
 * @param version  Version number of protocol.
 * @param seconds [s] Second field of timestamp.
 * @param nanoseconds [ns] Nanoseconds field of timestamp.
 * @param gps_lat [deg] Dog vest latitude.
 * @param gps_lon [deg] Dog vest longitude.
 * @param altitude_msl [m] MSL altitude from gps.
 * @param altitude_hae [m] Meters above ellipsoid (from gps).
 * @param heading_angle [deg] Heading reading from compass.
 * @param seconds_since_last_alert [s] Seconds since last alert.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_taa_canine_telemetry_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t sequence,uint8_t version,uint64_t seconds,uint32_t nanoseconds,double gps_lat,double gps_lon,float altitude_msl,float altitude_hae,float heading_angle,uint32_t seconds_since_last_alert)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN];
    _mav_put_uint64_t(buf, 0, seconds);
    _mav_put_double(buf, 8, gps_lat);
    _mav_put_double(buf, 16, gps_lon);
    _mav_put_uint32_t(buf, 24, nanoseconds);
    _mav_put_float(buf, 28, altitude_msl);
    _mav_put_float(buf, 32, altitude_hae);
    _mav_put_float(buf, 36, heading_angle);
    _mav_put_uint32_t(buf, 40, seconds_since_last_alert);
    _mav_put_uint16_t(buf, 44, sequence);
    _mav_put_uint8_t(buf, 46, version);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN);
#else
    mavlink_taa_canine_telemetry_t packet;
    packet.seconds = seconds;
    packet.gps_lat = gps_lat;
    packet.gps_lon = gps_lon;
    packet.nanoseconds = nanoseconds;
    packet.altitude_msl = altitude_msl;
    packet.altitude_hae = altitude_hae;
    packet.heading_angle = heading_angle;
    packet.seconds_since_last_alert = seconds_since_last_alert;
    packet.sequence = sequence;
    packet.version = version;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_CRC);
}

/**
 * @brief Encode a taa_canine_telemetry struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param taa_canine_telemetry C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_canine_telemetry_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_taa_canine_telemetry_t* taa_canine_telemetry)
{
    return mavlink_msg_taa_canine_telemetry_pack(system_id, component_id, msg, taa_canine_telemetry->sequence, taa_canine_telemetry->version, taa_canine_telemetry->seconds, taa_canine_telemetry->nanoseconds, taa_canine_telemetry->gps_lat, taa_canine_telemetry->gps_lon, taa_canine_telemetry->altitude_msl, taa_canine_telemetry->altitude_hae, taa_canine_telemetry->heading_angle, taa_canine_telemetry->seconds_since_last_alert);
}

/**
 * @brief Encode a taa_canine_telemetry struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param taa_canine_telemetry C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_taa_canine_telemetry_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_taa_canine_telemetry_t* taa_canine_telemetry)
{
    return mavlink_msg_taa_canine_telemetry_pack_chan(system_id, component_id, chan, msg, taa_canine_telemetry->sequence, taa_canine_telemetry->version, taa_canine_telemetry->seconds, taa_canine_telemetry->nanoseconds, taa_canine_telemetry->gps_lat, taa_canine_telemetry->gps_lon, taa_canine_telemetry->altitude_msl, taa_canine_telemetry->altitude_hae, taa_canine_telemetry->heading_angle, taa_canine_telemetry->seconds_since_last_alert);
}

/**
 * @brief Send a taa_canine_telemetry message
 * @param chan MAVLink channel to send the message
 *
 * @param sequence  Incremented each time packet is sent.
 * @param version  Version number of protocol.
 * @param seconds [s] Second field of timestamp.
 * @param nanoseconds [ns] Nanoseconds field of timestamp.
 * @param gps_lat [deg] Dog vest latitude.
 * @param gps_lon [deg] Dog vest longitude.
 * @param altitude_msl [m] MSL altitude from gps.
 * @param altitude_hae [m] Meters above ellipsoid (from gps).
 * @param heading_angle [deg] Heading reading from compass.
 * @param seconds_since_last_alert [s] Seconds since last alert.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_taa_canine_telemetry_send(mavlink_channel_t chan, uint16_t sequence, uint8_t version, uint64_t seconds, uint32_t nanoseconds, double gps_lat, double gps_lon, float altitude_msl, float altitude_hae, float heading_angle, uint32_t seconds_since_last_alert)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN];
    _mav_put_uint64_t(buf, 0, seconds);
    _mav_put_double(buf, 8, gps_lat);
    _mav_put_double(buf, 16, gps_lon);
    _mav_put_uint32_t(buf, 24, nanoseconds);
    _mav_put_float(buf, 28, altitude_msl);
    _mav_put_float(buf, 32, altitude_hae);
    _mav_put_float(buf, 36, heading_angle);
    _mav_put_uint32_t(buf, 40, seconds_since_last_alert);
    _mav_put_uint16_t(buf, 44, sequence);
    _mav_put_uint8_t(buf, 46, version);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY, buf, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_CRC);
#else
    mavlink_taa_canine_telemetry_t packet;
    packet.seconds = seconds;
    packet.gps_lat = gps_lat;
    packet.gps_lon = gps_lon;
    packet.nanoseconds = nanoseconds;
    packet.altitude_msl = altitude_msl;
    packet.altitude_hae = altitude_hae;
    packet.heading_angle = heading_angle;
    packet.seconds_since_last_alert = seconds_since_last_alert;
    packet.sequence = sequence;
    packet.version = version;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY, (const char *)&packet, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_CRC);
#endif
}

/**
 * @brief Send a taa_canine_telemetry message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_taa_canine_telemetry_send_struct(mavlink_channel_t chan, const mavlink_taa_canine_telemetry_t* taa_canine_telemetry)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_taa_canine_telemetry_send(chan, taa_canine_telemetry->sequence, taa_canine_telemetry->version, taa_canine_telemetry->seconds, taa_canine_telemetry->nanoseconds, taa_canine_telemetry->gps_lat, taa_canine_telemetry->gps_lon, taa_canine_telemetry->altitude_msl, taa_canine_telemetry->altitude_hae, taa_canine_telemetry->heading_angle, taa_canine_telemetry->seconds_since_last_alert);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY, (const char *)taa_canine_telemetry, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_CRC);
#endif
}

#if MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_taa_canine_telemetry_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t sequence, uint8_t version, uint64_t seconds, uint32_t nanoseconds, double gps_lat, double gps_lon, float altitude_msl, float altitude_hae, float heading_angle, uint32_t seconds_since_last_alert)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, seconds);
    _mav_put_double(buf, 8, gps_lat);
    _mav_put_double(buf, 16, gps_lon);
    _mav_put_uint32_t(buf, 24, nanoseconds);
    _mav_put_float(buf, 28, altitude_msl);
    _mav_put_float(buf, 32, altitude_hae);
    _mav_put_float(buf, 36, heading_angle);
    _mav_put_uint32_t(buf, 40, seconds_since_last_alert);
    _mav_put_uint16_t(buf, 44, sequence);
    _mav_put_uint8_t(buf, 46, version);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY, buf, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_CRC);
#else
    mavlink_taa_canine_telemetry_t *packet = (mavlink_taa_canine_telemetry_t *)msgbuf;
    packet->seconds = seconds;
    packet->gps_lat = gps_lat;
    packet->gps_lon = gps_lon;
    packet->nanoseconds = nanoseconds;
    packet->altitude_msl = altitude_msl;
    packet->altitude_hae = altitude_hae;
    packet->heading_angle = heading_angle;
    packet->seconds_since_last_alert = seconds_since_last_alert;
    packet->sequence = sequence;
    packet->version = version;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY, (const char *)packet, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_CRC);
#endif
}
#endif

#endif

// MESSAGE TAA_CANINE_TELEMETRY UNPACKING


/**
 * @brief Get field sequence from taa_canine_telemetry message
 *
 * @return  Incremented each time packet is sent.
 */
static inline uint16_t mavlink_msg_taa_canine_telemetry_get_sequence(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  44);
}

/**
 * @brief Get field version from taa_canine_telemetry message
 *
 * @return  Version number of protocol.
 */
static inline uint8_t mavlink_msg_taa_canine_telemetry_get_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  46);
}

/**
 * @brief Get field seconds from taa_canine_telemetry message
 *
 * @return [s] Second field of timestamp.
 */
static inline uint64_t mavlink_msg_taa_canine_telemetry_get_seconds(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field nanoseconds from taa_canine_telemetry message
 *
 * @return [ns] Nanoseconds field of timestamp.
 */
static inline uint32_t mavlink_msg_taa_canine_telemetry_get_nanoseconds(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  24);
}

/**
 * @brief Get field gps_lat from taa_canine_telemetry message
 *
 * @return [deg] Dog vest latitude.
 */
static inline double mavlink_msg_taa_canine_telemetry_get_gps_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  8);
}

/**
 * @brief Get field gps_lon from taa_canine_telemetry message
 *
 * @return [deg] Dog vest longitude.
 */
static inline double mavlink_msg_taa_canine_telemetry_get_gps_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  16);
}

/**
 * @brief Get field altitude_msl from taa_canine_telemetry message
 *
 * @return [m] MSL altitude from gps.
 */
static inline float mavlink_msg_taa_canine_telemetry_get_altitude_msl(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field altitude_hae from taa_canine_telemetry message
 *
 * @return [m] Meters above ellipsoid (from gps).
 */
static inline float mavlink_msg_taa_canine_telemetry_get_altitude_hae(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field heading_angle from taa_canine_telemetry message
 *
 * @return [deg] Heading reading from compass.
 */
static inline float mavlink_msg_taa_canine_telemetry_get_heading_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field seconds_since_last_alert from taa_canine_telemetry message
 *
 * @return [s] Seconds since last alert.
 */
static inline uint32_t mavlink_msg_taa_canine_telemetry_get_seconds_since_last_alert(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  40);
}

/**
 * @brief Decode a taa_canine_telemetry message into a struct
 *
 * @param msg The message to decode
 * @param taa_canine_telemetry C-struct to decode the message contents into
 */
static inline void mavlink_msg_taa_canine_telemetry_decode(const mavlink_message_t* msg, mavlink_taa_canine_telemetry_t* taa_canine_telemetry)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    taa_canine_telemetry->seconds = mavlink_msg_taa_canine_telemetry_get_seconds(msg);
    taa_canine_telemetry->gps_lat = mavlink_msg_taa_canine_telemetry_get_gps_lat(msg);
    taa_canine_telemetry->gps_lon = mavlink_msg_taa_canine_telemetry_get_gps_lon(msg);
    taa_canine_telemetry->nanoseconds = mavlink_msg_taa_canine_telemetry_get_nanoseconds(msg);
    taa_canine_telemetry->altitude_msl = mavlink_msg_taa_canine_telemetry_get_altitude_msl(msg);
    taa_canine_telemetry->altitude_hae = mavlink_msg_taa_canine_telemetry_get_altitude_hae(msg);
    taa_canine_telemetry->heading_angle = mavlink_msg_taa_canine_telemetry_get_heading_angle(msg);
    taa_canine_telemetry->seconds_since_last_alert = mavlink_msg_taa_canine_telemetry_get_seconds_since_last_alert(msg);
    taa_canine_telemetry->sequence = mavlink_msg_taa_canine_telemetry_get_sequence(msg);
    taa_canine_telemetry->version = mavlink_msg_taa_canine_telemetry_get_version(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN? msg->len : MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN;
        memset(taa_canine_telemetry, 0, MAVLINK_MSG_ID_TAA_CANINE_TELEMETRY_LEN);
    memcpy(taa_canine_telemetry, _MAV_PAYLOAD(msg), len);
#endif
}
