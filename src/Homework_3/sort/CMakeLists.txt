add_library(sort_functions STATIC "")
target_sources(sort_functions
	PRIVATE
		sort.c
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/sort.h
)

add_executable(sort "")
target_sources(sort
	PRIVATE
		main.c
)
target_link_libraries(sort
	sort_functions
)
include(FormatForDist)
packForDist(Assignment3
	sort.h
	sort.c
	main.c
)