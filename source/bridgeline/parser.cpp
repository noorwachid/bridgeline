#include "bridgeline/parser.h"
#include <iostream>

namespace BridgeLine {
	void Parser::set(const std::string& flag, size_t n) {
		Rule rule;
		rule.flag = flag;
		rule.n = n;
		_rules[flag] = rule;
	}

	ParserData Parser::parse(int argc, char** argv) {
		ParserData data;
		data.program = argv[0];
		std::string activeFlag;

		for (int i = 1; i < argc;) {
			char* arg = argv[i];
			size_t argSize = std::strlen(argv[i]);
			if (argSize > 1 && arg[0] == '-' && arg[1] == '-') {
				if (argSize == 2) {
					for (int j = i + 1; j < argc; j++) {
						data.arguments.push_back(argv[j]);
					}
					break;
				}

				std::string flag(argv[i] + 2, argSize - 2);
				data.flags[flag] = {};
				if (_rules.count(flag)) {
					activeFlag = flag;
				}
			} else {
				if (!activeFlag.empty()) {
					Rule& rule = _rules[activeFlag];
					auto& activeArguments = data.flags[activeFlag];

					if (rule.n > activeArguments.size()) {
						activeArguments.push_back(argv[i]);
						++i;
						continue;
					}
				}

				data.arguments.push_back(argv[i]);
			}
			++i;
		}

		return data;
	}
}

