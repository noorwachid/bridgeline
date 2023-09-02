#pragma once

#include <string>

namespace TContent
{
	std::string ColorizeForeground(const std::string& text, uint32_t value);

	std::string ColorizeBackground(const std::string& text, uint32_t value);

	uint8_t Cast24To8(uint32_t value);
}
