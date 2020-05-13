// MESSAGE TAA_PLAY_SOUND_ON_VEST support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief TAA_PLAY_SOUND_ON_VEST message
 *
 * 
 */
struct TAA_PLAY_SOUND_ON_VEST : mavlink::Message {
    static constexpr msgid_t MSG_ID = 20104;
    static constexpr size_t LENGTH = 7;
    static constexpr size_t MIN_LENGTH = 7;
    static constexpr uint8_t CRC_EXTRA = 104;
    static constexpr auto NAME = "TAA_PLAY_SOUND_ON_VEST";


    uint16_t sound_index; /*<  Index of sound to play on vest. */
    uint32_t sequence; /*<  Increment each time you send this command. */
    uint8_t volume_level; /*<  0 is default. otherwise, set volume level. */


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
        ss << "  sound_index: " << sound_index << std::endl;
        ss << "  sequence: " << sequence << std::endl;
        ss << "  volume_level: " << +volume_level << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << sequence;                      // offset: 0
        map << sound_index;                   // offset: 4
        map << volume_level;                  // offset: 6
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> sequence;                      // offset: 0
        map >> sound_index;                   // offset: 4
        map >> volume_level;                  // offset: 6
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
