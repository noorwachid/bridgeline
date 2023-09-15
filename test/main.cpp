#include "bridgeline/color.h"
#include "bridgeline/size.h"
#include "bridgeline/style.h"
#include <iostream>

using namespace BridgeLine;

int main() {
	std::cout << "normal"
			  << "\n";
	std::cout << bold("bold") << "\n";
	std::cout << italize("italic") << "\n";
	std::cout << underline("underlined") << "\n";
	std::cout << dim("dimmed") << "\n";
	std::cout << cross("crossed") << "\n";
	std::cout << colorizeBackground(" OUT ", 0x2390FF) << " " << colorizeForeground("hello world", 0x33FE83) << "\n";
	std::cout << getSize().toString() << "\n";

	return 0;
}
