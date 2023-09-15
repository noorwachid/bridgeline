#pragma once

#include <string>

namespace BridgeLine {
	std::string colorizeForeground(const std::string& text, uint32_t value);

	std::string colorizeBackground(const std::string& text, uint32_t value);

	uint8_t convert24To8(uint32_t value);
}
