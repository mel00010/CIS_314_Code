add_library(2-64_functions STATIC "")
target_sources(2-64_functions
	PRIVATE
		2-64.c
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/2-64.h
)

add_executable(2-64 "")
target_sources(2-64
	PRIVATE
		main.c
)
target_link_libraries(2-64
	2-64_functions
)
include(FormatForDist)
packForDist(Assignment1
	2-64.h
	2-64.c
	main.c
)