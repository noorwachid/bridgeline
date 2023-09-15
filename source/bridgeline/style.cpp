#include "bridgeline/style.h"

namespace BridgeLine {
	std::string bold(const std::string& text) {
		return "\x1B[1m" + text + "\x1B[22m";
	}

	std::string dim(const std::string& text) {
		return "\x1B[2m" + text + "\x1B[22m";
	}

	std::string italize(const std::string& text) {
		return "\x1B[3m" + text + "\x1B[23m";
	}

	std::string underline(const std::string& text) {
		return "\x1B[4m" + text + "\x1B[24m";
	}

	std::string reverse(const std::string& text) {
		return "\x1B[7m" + text + "\x1B[27m";
	}

	std::string cross(const std::string& text) {
		return "\x1B[9m" + text + "\x1B[29m";
	}
}
