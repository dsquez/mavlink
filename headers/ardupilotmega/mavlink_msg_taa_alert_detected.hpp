// MESSAGE TAA_ALERT_DETECTED support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief TAA_ALERT_DETECTED message
 *
 * 
 */
struct TAA_ALERT_DETECTED : mavlink::Message {
    static constexpr msgid_t MSG_ID = 20203;
    static constexpr size_t LENGTH = 18;
    static constexpr size_t MIN_LENGTH = 18;
    static constexpr uint8_t CRC_EXTRA = 121;
    static constexpr auto NAME = "TAA_ALERT_DETECTED";


    uint16_t sequence; /*<  Sequence number of alert. */
    uint16_t alert_count; /*<  Number of alert barks detected. */
    uint64_t seconds; /*< [s] Second field of timestamp. */
    uint32_t nanoseconds; /*< [ns] Nanosecond field of timestamp. */
    uint8_t volume; /*<  Negative dB of volume of bark detected. */
    uint8_t confidence; /*< [%] Confidence value. */


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
        ss << "  alert_count: " << alert_count << std::endl;
        ss << "  seconds: " << seconds << std::endl;
        ss << "  nanoseconds: " << nanoseconds << std::endl;
        ss << "  volume: " << +volume << std::endl;
        ss << "  confidence: " << +confidence << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << seconds;                       // offset: 0
        map << nanoseconds;                   // offset: 8
        map << sequence;                      // offset: 12
        map << alert_count;                   // offset: 14
        map << volume;                        // offset: 16
        map << confidence;                    // offset: 17
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> seconds;                       // offset: 0
        map >> nanoseconds;                   // offset: 8
        map >> sequence;                      // offset: 12
        map >> alert_count;                   // offset: 14
        map >> volume;                        // offset: 16
        map >> confidence;                    // offset: 17
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
