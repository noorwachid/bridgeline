#pragma once

#include <string>

namespace BridgeLine {
	struct Size {
		uint32_t width;
		uint32_t height;

		std::string toString() const;
	};

	Size getSize();
}
