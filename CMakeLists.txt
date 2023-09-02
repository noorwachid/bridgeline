cmake_minimum_required(VERSION 3.11)

project("tcontent")

add_library("tcontent" SHARED
	"source/TContent/Color.cpp"
	"source/TContent/Style.cpp"
	"source/TContent/Size.cpp"
)

target_include_directories("tcontent" PUBLIC "source")
