add_library(3-54_functions STATIC "")
target_sources(3-54_functions
	PRIVATE
		3-54.c
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/3-54.h
)

add_executable(3-54 "")
target_sources(3-54
	PRIVATE
		main.c
)
target_link_libraries(3-54
	3-54_functions
)
include(FormatForDist)
packForDist(Assignment3
	3-54.h
	3-54.c
	main.c
)