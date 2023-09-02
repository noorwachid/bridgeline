#pragma once

#include <string>

namespace TContent
{
	struct Size 
	{
		uint32_t width;
		uint32_t height;

		std::string ToString() const;
	};

	Size GetSize();
}
