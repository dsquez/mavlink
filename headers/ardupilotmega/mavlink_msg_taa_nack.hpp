// MESSAGE TAA_NACK support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief TAA_NACK message
 *
 * Not acknowledgement message
 */
struct TAA_NACK : mavlink::Message {
    static constexpr msgid_t MSG_ID = 20002;
    static constexpr size_t LENGTH = 8;
    static constexpr size_t MIN_LENGTH = 8;
    static constexpr uint8_t CRC_EXTRA = 120;
    static constexpr auto NAME = "TAA_NACK";


    uint16_t message_type; /*<  Type of packet not being acknowledged. */
    uint16_t sequence_response; /*<  Sequence number of packet not being acknowledged. */
    uint32_t error_type; /*<  why the message is being rejected. */


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
        ss << "  message_type: " << message_type << std::endl;
        ss << "  sequence_response: " << sequence_response << std::endl;
        ss << "  error_type: " << error_type << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << error_type;                    // offset: 0
        map << message_type;                  // offset: 4
        map << sequence_response;             // offset: 6
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> error_type;                    // offset: 0
        map >> message_type;                  // offset: 4
        map >> sequence_response;             // offset: 6
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
