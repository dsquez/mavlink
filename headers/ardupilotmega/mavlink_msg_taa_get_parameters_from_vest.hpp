// MESSAGE TAA_GET_PARAMETERS_FROM_VEST support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief TAA_GET_PARAMETERS_FROM_VEST message
 *
 * 
 */
struct TAA_GET_PARAMETERS_FROM_VEST : mavlink::Message {
    static constexpr msgid_t MSG_ID = 20102;
    static constexpr size_t LENGTH = 4;
    static constexpr size_t MIN_LENGTH = 4;
    static constexpr uint8_t CRC_EXTRA = 139;
    static constexpr auto NAME = "TAA_GET_PARAMETERS_FROM_VEST";


    uint16_t parameter_list_version; /*<  Identifier of parameter list version. */
    uint16_t parameter_index; /*<  Parameter index to get. */


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
        ss << "  parameter_list_version: " << parameter_list_version << std::endl;
        ss << "  parameter_index: " << parameter_index << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << parameter_list_version;        // offset: 0
        map << parameter_index;               // offset: 2
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> parameter_list_version;        // offset: 0
        map >> parameter_index;               // offset: 2
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
