#include "TContent/Size.h"
#include "TContent/Style.h"
#include "TContent/Color.h"
#include <iostream>

using namespace TContent;

int main()
{
	std::cout << "normal" << "\n";
	std::cout << Bold("bold") << "\n";
	std::cout << Italic("italic") << "\n";
	std::cout << Underline("underlined") << "\n";
	std::cout << Dim("dimmed") << "\n";
	std::cout << Cross("crossed") << "\n";
	std::cout << ColorizeBackground(" OUT ", 0x2390FF) << " " << ColorizeForeground("hello world", 0x33FE83) << "\n";
	std::cout << GetSize().ToString() << "\n";

	return 0;
}
