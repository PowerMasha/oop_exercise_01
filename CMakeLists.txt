project(1lab)

add_executable(oop_exercise_01
	main.cpp
	complex.cpp)

set(CMAKE_CXX_FLAGS
	"${CMAKE_CXX_FLAGS} -Wall -Wextra")
