cmake_minimum_required(VERSION 3.11)

project("cli")
set(CMAKE_CXX_STANDARD 17)

add_library("cli" SHARED
	"source/cli/color.cpp"
	"source/cli/style.cpp"
	"source/cli/size.cpp"
)

target_include_directories("cli" PUBLIC "source")

add_executable("cli-test" "test/main.cpp")

target_link_libraries("cli-test" "cli")
