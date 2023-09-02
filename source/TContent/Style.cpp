#include "TContent/Style.h"

namespace TContent
{
	std::string Bold(const std::string& text)
	{
		return "\x1B[1m" + text + "\x1B[22m";
	}

	std::string Dim(const std::string& text)
	{
		return "\x1B[2m" + text + "\x1B[22m";
	}

	std::string Italic(const std::string& text)
	{
		return "\x1B[3m" + text + "\x1B[23m";
	}

	std::string Underline(const std::string& text)
	{
		return "\x1B[4m" + text + "\x1B[24m";
	}

	std::string Reverse(const std::string& text)
	{
		return "\x1B[7m" + text + "\x1B[27m";
	}

	std::string Cross(const std::string& text)
	{
		return "\x1B[9m" + text + "\x1B[29m";
	}
}
