#include "BridgeLine/Size.h"

#if defined(__unix__) || defined(__APPLE__)
#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>
#endif

namespace BridgeLine {
	std::string Size::toString() const {
		return std::to_string(width) + " x " + std::to_string(height);
	}

	Size getSize() {
		Size size;

#if defined(__unix__) || defined(__APPLE__)
		::winsize w;
		::ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

		size.width = w.ws_col;
		size.height = w.ws_row;
#else
		size.width = 80;
		size.height = 80;
#endif

		return size;
	}
}
