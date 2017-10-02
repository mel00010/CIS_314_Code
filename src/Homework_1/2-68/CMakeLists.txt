add_library(2-68_functions STATIC "")
target_sources(2-68_functions
	PRIVATE
		2-68.c
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/2-68.h
)

add_executable(2-68 "")
target_sources(2-68
	PRIVATE
		main.c
)
target_link_libraries(2-68
	2-57_functions
	2-68_functions
)