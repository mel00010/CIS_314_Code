add_library(2-71_functions STATIC "")
target_sources(2-71_functions
	PRIVATE
		2-71.c
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/2-71.h
)

add_executable(2-71 "")
target_sources(2-71
	PRIVATE
		main.c
)
target_link_libraries(2-71
	2-71_functions
)
include(FormatForDist)
packForDist(Assignment2
	2-71.h
	2-71.c
	main.c
)