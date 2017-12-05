find_package(Curses REQUIRED)

add_executable(8-1 "")
target_sources(8-1 
	PRIVATE
		main.c
		8-1.c
		8-1.h
)

include_directories( ${CURSES_INCLUDE_DIRS} )
target_link_libraries( 8-1 ${CURSES_LIBRARIES} )
add_definitions(-DHAVE_CURSES)

include(FormatForDist)
packForDist(Assignment8
	8-1.h
	8-1.c
	main.c
)
