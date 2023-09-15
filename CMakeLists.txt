cmake_minimum_required(VERSION 3.11)

project("bridgeline")
set(CMAKE_CXX_STANDARD 17)

add_library("bridgeline" SHARED
	"source/bridgeline/color.cpp"
	"source/bridgeline/style.cpp"
	"source/bridgeline/size.cpp"
)

target_include_directories("bridgeline" PUBLIC "source")

add_executable("bridgeline-test" "test/main.cpp")

target_link_libraries("bridgeline-test" "cli")
