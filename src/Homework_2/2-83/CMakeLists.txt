add_library(2-83_functions STATIC "")
target_sources(2-83_functions
	PRIVATE
		2-83.c
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/2-83.h
)

add_executable(2-83 "")
target_sources(2-83
	PRIVATE
		main.c
)
target_link_libraries(2-83
	2-83_functions
)
include(FormatForDist)
packForDist(Assignment2
	2-83.h
	2-83.c
	main.c
)