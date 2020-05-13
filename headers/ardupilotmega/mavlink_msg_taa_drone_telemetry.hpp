// MESSAGE TAA_DRONE_TELEMETRY support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief TAA_DRONE_TELEMETRY message
 *
 * 
 */
struct TAA_DRONE_TELEMETRY : mavlink::Message {
    static constexpr msgid_t MSG_ID = 20101;
    static constexpr size_t LENGTH = 15;
    static constexpr size_t MIN_LENGTH = 15;
    static constexpr uint8_t CRC_EXTRA = 214;
    static constexpr auto NAME = "TAA_DRONE_TELEMETRY";


    uint16_t sequence; /*<  Incremented each time a drone hearbeat is sent. */
    uint8_t version; /*<  Version number of telemetry protocol. */
    uint64_t seconds; /*< [s] Seconds field of timestamp. */
    uint32_t nanoseconds; /*< [ns] Nanoseconds field of timestamp. */


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

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << seconds;                       // offset: 0
        map << nanoseconds;                   // offset: 8
        map << sequence;                      // offset: 12
        map << version;                       // offset: 14
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> seconds;                       // offset: 0
        map >> nanoseconds;                   // offset: 8
        map >> sequence;                      // offset: 12
        map >> version;                       // offset: 14
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
