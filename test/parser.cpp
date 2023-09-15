#include "bridgeline/parser.h"
#include <iostream>

int main(int argc, char** argv) {
	BridgeLine::Parser parser;

	parser.set("zero");
	parser.set("one", 1);
	parser.set("two", 2);
	parser.set("three", 3);

	auto data = parser.parse(argc, argv);

	std::cout << "program: " << data.program << "\n";
	std::cout << "arguments:\n";
	for (const std::string& argument: data.arguments) {
		std::cout << "  - " << argument << "\n";
	}
	std::cout << "flags:\n";
	for (const auto& [flag, arguments]: data.flags) {
		std::cout << "  " << flag << ":\n";
		for (const std::string& argument: arguments) {
			std::cout << "    - " << argument << "\n";
		}
	}

	return 0;
}
