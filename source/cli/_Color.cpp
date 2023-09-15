#include "TContent/Color.h"

namespace TContent
{
	std::string ColorizeForeground(const std::string& text, uint32_t value)
	{
        uint8_t red = (value >> 0x10 & 0xFF);
		uint8_t green = (value >> 0x08 & 0xFF); 
		uint8_t blue = (value >> 0x00 & 0xFF);

		return "\x1B[38;2;" + std::to_string(red) + ';' + std::to_string(green) + ';' + std::to_string(blue) + 'm' + text + "\x1B[39m";
	}

	std::string ColorizeBackground(const std::string& text, uint32_t value)
	{
        uint8_t red = (value >> 0x10 & 0xFF);
		uint8_t green = (value >> 0x08 & 0xFF); 
		uint8_t blue = (value >> 0x00 & 0xFF);

		return "\x1B[48;2;" + std::to_string(red) + ';' + std::to_string(green) + ';' + std::to_string(blue) + 'm' + text + "\x1B[49m";
	}

	uint8_t Cast24To8(uint32_t value) 
    {
        uint8_t red = (value >> 0x10 & 0xFF);
		uint8_t green = (value >> 0x08 & 0xFF); 
		uint8_t blue = (value >> 0x00 & 0xFF);

        uint8_t result = 0;

		// 24 grade grayscale
		if (red == green && green == blue) 
        {
			// pitch black
			if (red == 0) 
			{
				result = 0x10;
			}
            else if (red == 0xFF) // pure white 
			{ 
				result = 0xE7;
			}
            else // grade
            {
				uint8_t grade = red / 0x0B;
				result = grade + 0xE8;
			}
		} 
        else // 6 grade rgb
		{
			result = (red * 36 / 51) + (green * 6 / 51) + (blue / 51) + 16;
		}

        return result;
    }
}
