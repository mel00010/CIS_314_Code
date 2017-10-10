add_library(2-57_functions STATIC "")
target_sources(2-57_functions
	PRIVATE
		2-57.c
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/2-57.h
)

add_executable(2-57 "")
target_sources(2-57
	PRIVATE
		main.c
)
target_link_libraries(2-57
	2-57_functions
)
include(FormatForDist)
packForDist(Assignment1
	2-57.h
	2-57.c
	main.c
)