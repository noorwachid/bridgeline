cmake_minimum_required(VERSION 3.11)

project("bridgeline")
set(CMAKE_CXX_STANDARD 17)

add_library("bridgeline" SHARED
	"source/bridgeline/color.cpp"
	"source/bridgeline/style.cpp"
	"source/bridgeline/size.cpp"
	"source/bridgeline/parser.cpp"
)

target_include_directories("bridgeline" PUBLIC "source")

add_executable("bridgeline-ansi" "test/ansi.cpp")
target_link_libraries("bridgeline-ansi" "bridgeline")

add_executable("bridgeline-parser" "test/parser.cpp")
target_link_libraries("bridgeline-parser" "bridgeline")
