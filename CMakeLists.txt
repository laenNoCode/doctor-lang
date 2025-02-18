cmake_minimum_required(VERSION 3.7)

project("doctorlang")

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# compiler must be at least 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS_DEBUG_INIT "-g")
# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)
# add external build for antlrcpp
include(ExternalAntlr4Cpp)
# add antrl4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
set(ANTLR_EXECUTABLE ${CMAKE_CURRENT_SOURCE_DIR}/tools/antlr-4.13.1-complete.jar)
# add macros to generate ANTLR Cpp code from grammar
find_package(ANTLR REQUIRED)

if (NOT WIN32)
  set(CMAKE_CXX_FLAGS "-Wdeprecated -Wno-attributes" )
endif()

if (APPLE)
  set(CMAKE_CXX_FLAGS "-Wdeprecated -std=c++11" )
endif()

if (MSVC)
  set(CMAKE_CXX_FLAGS "/EHsc /wd4127 /wd4311 /wd4312 /wd4512 /wd4571 /wd4640 /wd4706 /wd4710 /wd4800 /wd4804 /wd4820 /wd4996")
endif()
antlr_target(DoctorLangGrammarParser ${PROJECT_SOURCE_DIR}/src/antlr/DoctorLang.g4 VISITOR OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/src/generated/)

# add our project source directories
include_directories(${PROJECT_SOURCE_DIR}
					 ${PROJECT_SOURCE_DIR}/src/generated/
           ${PROJECT_SOURCE_DIR}/src/cpp/
  )


add_executable(doctorlang src/cpp/main.cpp src/cpp/DoctorVisitor.cpp          
               ${ANTLR_DoctorLangGrammarParser_CXX_OUTPUTS})

# link required libraries
target_link_libraries(doctorlang antlr4_static ${SYSTEM_LIBS})

# copy the input file next to the generated executable
#add_custom_command(TARGET antlr4-tutorial POST_BUILD
#  COMMAND ${CMAKE_COMMAND} -E copy_if_different
#  "${PROJECT_SOURCE_DIR}/input.scene"
#  $<TARGET_FILE_DIR:antlr4-tutorial>)

# necessary because the default working directory of Visual Studio
# is not the same as the one in which the binary is created
# so we copy the input file twice:
# one for when you launch the executale in Visual Studio (CTRL+F5)
# one for when you launch it normally
#if (WIN32)
#add_custom_command(TARGET antlr4-tutorial POST_BUILD
#COMMAND ${CMAKE_COMMAND} -E copy_if_different
#"${PROJECT_SOURCE_DIR}/input.scene"
#$<TARGET_FILE_DIR:antlr4-tutorial>/../)
#endif()
