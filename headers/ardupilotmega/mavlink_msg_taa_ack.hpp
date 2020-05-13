// MESSAGE TAA_ACK support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief TAA_ACK message
 *
 * Acknowledgement message. Message received and desired action was carried out.
 */
struct TAA_ACK : mavlink::Message {
    static constexpr msgid_t MSG_ID = 20001;
    static constexpr size_t LENGTH = 4;
    static constexpr size_t MIN_LENGTH = 4;
    static constexpr uint8_t CRC_EXTRA = 146;
    static constexpr auto NAME = "TAA_ACK";


    uint16_t message_type; /*<  Type of packet being acknowledged */
    uint16_t sequence_response; /*<  Replies with the sequence number of the packet it is acknowledging */


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

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << message_type;                  // offset: 0
        map << sequence_response;             // offset: 2
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> message_type;                  // offset: 0
        map >> sequence_response;             // offset: 2
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
