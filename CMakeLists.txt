cmake_minimum_required(VERSION 3.15)
project(FortIDE)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(Boost_USE_STATIC_LIBS ON)
set(CMAKE_BUILD_TYPE "Debug")

# Policy to handle FindBoost module removal warning 
cmake_policy(SET CMP0167 OLD)

# Create the executable target
add_compile_options(-g -pg)
add_link_options(-pg)
add_executable(FortIDE src/Main.cpp)

# Source file organization
file(GLOB FILETREE_SOURCES ${CMAKE_SOURCE_DIR}/src/mainfunc/FileTree/*.cpp)

set(MAIN_SOURCES
    ${CMAKE_SOURCE_DIR}/src/mainfunc/mainfunc.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/c_Parser.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/Config.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/f_MainMenu.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/searchParser/s_Parser.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/FileTree/FileTree.cpp

    ${CMAKE_SOURCE_DIR}/deps/ImGuiColorTextEdit/ImGuiDebugPanel.cpp
    ${CMAKE_SOURCE_DIR}/deps/ImGuiColorTextEdit/LanguageDefinitions.cpp
    ${CMAKE_SOURCE_DIR}/deps/ImGuiColorTextEdit/TextEditor.cpp
    ${CMAKE_SOURCE_DIR}/deps/ImGuiColorTextEdit/UnitTests.cpp
    ${FILETREE_SOURCES}
)

set(ANTLR_FORTRAN_SOURCES
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/ErrorListener.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90Lexer.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90ParserBaseListener.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90Parser.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90ParserBaseListener.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90ParserBaseVisitor.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90ParserListener.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90ParserVisitor.cpp
)

# Add source files to the target
target_sources(FortIDE PRIVATE ${MAIN_SOURCES} ${ANTLR_FORTRAN_SOURCES})



# Platform-specific settings
if (WIN32)
    target_compile_definitions(FortIDE PRIVATE 
        ANTLR4CPP_STATIC 
        _WIN32_WINNT=0x0601 
        _UNICODE UNICODE 
        _CRT_SECURE_NO_WARNINGS 
        SFML_STATIC
    )
    target_link_libraries(FortIDE PRIVATE OpenGL32 winmm)
elseif (UNIX)
    target_link_libraries(FortIDE PRIVATE pthread dl)
endif()


find_package(antlr4-runtime REQUIRED)
target_link_libraries(FortIDE PRIVATE antlr4-runtime)
# Find and link ImGui (system-installed)
find_path(ANTLR4_INCLUDE_DIR "antlr4-runtime.h" 
    PATHS /usr/include/antlr4-runtime/ /usr/local/include
    PATH_SUFFIXES antlr4
)
if(ANTLR4_INCLUDE_DIR)
  target_include_directories(FortIDE PRIVATE ${ANTLR4_INCLUDE_DIR})
else()
  message(FATAL_ERROR "Antlr headers not found!")
endif()

# Find and link Boost
find_package(Boost 1.88 REQUIRED COMPONENTS filesystem system)
target_include_directories(FortIDE PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(FortIDE PRIVATE ${Boost_LIBRARIES})

# Find and link SFML
find_package(SFML 3 REQUIRED COMPONENTS System Window Graphics)
target_include_directories(FortIDE PRIVATE ${SFML_INCLUDE_DIR})
target_link_libraries(FortIDE PRIVATE ${SFML_LIBRARIES})

# Find and link tinyxml2 (system-installed)
find_package(tinyxml2 CONFIG REQUIRED)  # Prefer config mode
target_link_libraries(FortIDE PRIVATE tinyxml2::tinyxml2)


# Find and link tinyxml2 (system-installed)
find_package(spdlog REQUIRED)  # Prefer config mode
target_link_libraries(FortIDE PRIVATE spdlog::spdlog)

# Find and link ImGui (system-installed)
find_path(IMGUI_INCLUDE_DIR "imgui.h" 
    PATHS /usr/include /usr/local/include
    PATH_SUFFIXES imgui
)
if(IMGUI_INCLUDE_DIR)
    target_include_directories(FortIDE PRIVATE ${IMGUI_INCLUDE_DIR})
else()
    message(FATAL_ERROR "ImGui headers not found!")
endif()
# Find and link tinyxml2 (system-installed)
find_package(spdlog CONFIG REQUIRED)  # Prefer config mode
target_link_libraries(FortIDE PRIVATE spdlog::spdlog)



# Set FortIDE as the startup project 
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT FortIDE)
