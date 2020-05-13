// MESSAGE TAA_CANINE_TELEMETRY support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief TAA_CANINE_TELEMETRY message
 *
 * 
 */
struct TAA_CANINE_TELEMETRY : mavlink::Message {
    static constexpr msgid_t MSG_ID = 20201;
    static constexpr size_t LENGTH = 47;
    static constexpr size_t MIN_LENGTH = 47;
    static constexpr uint8_t CRC_EXTRA = 125;
    static constexpr auto NAME = "TAA_CANINE_TELEMETRY";


    uint16_t sequence; /*<  Incremented each time packet is sent. */
    uint8_t version; /*<  Version number of protocol. */
    uint64_t seconds; /*< [s] Second field of timestamp. */
    uint32_t nanoseconds; /*< [ns] Nanoseconds field of timestamp. */
    double gps_lat; /*< [deg] Dog vest latitude. */
    double gps_lon; /*< [deg] Dog vest longitude. */
    float altitude_msl; /*< [m] MSL altitude from gps. */
    float altitude_hae; /*< [m] Meters above ellipsoid (from gps). */
    float heading_angle; /*< [deg] Heading reading from compass. */
    uint32_t seconds_since_last_alert; /*< [s] Seconds since last alert. */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  sequence: " << sequence << std::endl;
        ss << "  version: " << +version << std::endl;
        ss << "  seconds: " << seconds << std::endl;
        ss << "  nanoseconds: " << nanoseconds << std::endl;
        ss << "  gps_lat: " << gps_lat << std::endl;
        ss << "  gps_lon: " << gps_lon << std::endl;
        ss << "  altitude_msl: " << altitude_msl << std::endl;
        ss << "  altitude_hae: " << altitude_hae << std::endl;
        ss << "  heading_angle: " << heading_angle << std::endl;
        ss << "  seconds_since_last_alert: " << seconds_since_last_alert << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << seconds;                       // offset: 0
        map << gps_lat;                       // offset: 8
        map << gps_lon;                       // offset: 16
        map << nanoseconds;                   // offset: 24
        map << altitude_msl;                  // offset: 28
        map << altitude_hae;                  // offset: 32
        map << heading_angle;                 // offset: 36
        map << seconds_since_last_alert;      // offset: 40
        map << sequence;                      // offset: 44
        map << version;                       // offset: 46
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> seconds;                       // offset: 0
        map >> gps_lat;                       // offset: 8
        map >> gps_lon;                       // offset: 16
        map >> nanoseconds;                   // offset: 24
        map >> altitude_msl;                  // offset: 28
        map >> altitude_hae;                  // offset: 32
        map >> heading_angle;                 // offset: 36
        map >> seconds_since_last_alert;      // offset: 40
        map >> sequence;                      // offset: 44
        map >> version;                       // offset: 46
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
