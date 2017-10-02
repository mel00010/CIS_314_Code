add_library(2-60_functions STATIC "")
target_sources(2-60_functions
	PRIVATE
		2-60.c
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/2-60.h
)

add_executable(2-60 "")
target_sources(2-60
	PRIVATE
		main.c
)
target_link_libraries(2-60
	2-57_functions
	2-60_functions
)