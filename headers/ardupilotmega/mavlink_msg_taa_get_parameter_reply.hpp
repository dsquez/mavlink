// MESSAGE TAA_GET_PARAMETER_REPLY support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief TAA_GET_PARAMETER_REPLY message
 *
 * 
 */
struct TAA_GET_PARAMETER_REPLY : mavlink::Message {
    static constexpr msgid_t MSG_ID = 20202;
    static constexpr size_t LENGTH = 8;
    static constexpr size_t MIN_LENGTH = 8;
    static constexpr uint8_t CRC_EXTRA = 246;
    static constexpr auto NAME = "TAA_GET_PARAMETER_REPLY";


    uint16_t parameter_list_version; /*<  Identifier of parameter list version. */
    uint16_t parameter_index; /*<  Parameter Index. */
    uint32_t parameter_value; /*<  Value of vest parameter. */


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
        ss << "  parameter_value: " << parameter_value << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << parameter_value;               // offset: 0
        map << parameter_list_version;        // offset: 4
        map << parameter_index;               // offset: 6
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> parameter_value;               // offset: 0
        map >> parameter_list_version;        // offset: 4
        map >> parameter_index;               // offset: 6
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
