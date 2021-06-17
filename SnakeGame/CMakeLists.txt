# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.11)

# 프로젝트 정보
project(
	snake_game
	VERSION 0.1
	DESCRIPTION "snake_game_project"
	LANGUAGES CXX)

# Status 보여주는 메세지
message(STATUS ">> PROJECT NAME: ${PROJECT_NAME}")

find_package(Curses REQUIRED)
# print out the properties of dev environment of ncurses
message(STATUS ">> CURSES_INCLUDE_DIRS: ${CURSES_INCLUDE_DIRS}")
message(STATUS ">> CURSES_LIBRARY: ${CURSES_LIBRARIES}")

# tell the build to include the headers from ncurses
include_directories(${CURSES_INCLUDE_DIRS})

# 생성할 실행파일 추가(.cpp 파일)
add_executable (${PROJECT_NAME}
	src/main.cpp
	src/snake.cpp
	src/game_board.cpp)

# tell it to link the executable target against ncurese
target_link_libraries(${PROJECT_NAME} ${CURSES_LIBRARIES})

# include 경로 지정(.h 파일) 
target_include_directories(${PROJECT_NAME}
	PUBLIC
	include)

