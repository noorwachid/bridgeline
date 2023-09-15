#pragma once

#include <string>

namespace BridgeLine {
	struct ParserData {
		std::string program;
		std::vector<std::string> arguments;
		std::unordered_map<std::string, std::vector<std::string>> flags;
	};

	class Parser {
	public:
		void set(const std::string& flag, size_t n = 0);

		ParserData parse(int argc, char** argv);

	private:
		struct Rule {
			std::string flag;
			size_t n = 0;
		};

		std::unordered_map<std::string, Rule> _rules;
	};
}
