add_library(2-72_functions STATIC "")
target_sources(2-72_functions
	PRIVATE
		2-72.c
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/2-72.h
)

add_executable(2-72 "")
target_sources(2-72
	PRIVATE
		main.c
)
target_link_libraries(2-72
	2-72_functions
)
include(FormatForDist)
packForDist(Assignment2
	2-72.h
	2-72.c
	main.c
)