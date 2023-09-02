#include "TContent/Size.h"

#if defined(__unix__) || defined(__APPLE__)
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#endif


namespace TContent
{
	std::string Size::ToString() const
	{
		return std::to_string(width) + " x " + std::to_string(height);
	}

	Size GetSize()
	{
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

