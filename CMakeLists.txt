cmake_minimum_required(VERSION 3.15)
project(FortIDE)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(Boost_USE_STATIC_LIBS       ON)
set(CMAKE_BUILD_TYPE "Release")
# Set Boost root and include/library directories 
set(BOOST_ROOT "${CMAKE_SOURCE_DIR}/deps/boost") 
set(BOOST_INCLUDEDIR "${BOOST_ROOT}/boost") 
set(BOOST_LIBRARYDIR "${BOOST_ROOT}/stage/lib") 
set(SFML_DIR "${CMAKE_SOURCE_DIR}/deps/SFML") 
set(spdlog_DIR "${CMAKE_SOURCE_DIR}/deps/spdlog/build") 
set(TinyXML_DIR "${CMAKE_SOURCE_DIR}/deps/tinyxml2")
# Policy to handle FindBoost module removal warning 
cmake_policy(SET CMP0167 OLD)

# Create the executable target
add_executable(FortIDE src/Main.cpp)  # Replace `main.cpp` with your main source file

# Specify source files for ImGui
set(IMGUI_SOURCES
    ${CMAKE_SOURCE_DIR}/deps/imgui/imgui.cpp
    ${CMAKE_SOURCE_DIR}/deps/imgui/imgui_draw.cpp
    ${CMAKE_SOURCE_DIR}/deps/imgui/imgui_tables.cpp
    ${CMAKE_SOURCE_DIR}/deps/imgui/imgui_widgets.cpp
    ${CMAKE_SOURCE_DIR}/deps/imgui/imgui_demo.cpp  # Optional
)
file(GLOB FILETREE_SOURCES ${CMAKE_SOURCE_DIR}/src/mainfunc/FileTree/*.cpp)
set (MAIN_SOURCES
    ${CMAKE_SOURCE_DIR}/src/mainfunc/mainfunc.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/c_Parser.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/Config.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/f_MainMenu.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/searchParser/s_Parser.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/FileTree/FileTree.cpp
    ${CMAKE_SOURCE_DIR}/deps/imgui-sfml/imgui-SFML.cpp
    ${CMAKE_SOURCE_DIR}/deps/ImGuiColorTextEdit/ImGuiDebugPanel.cpp
    ${CMAKE_SOURCE_DIR}/deps/ImGuiColorTextEdit/LanguageDefinitions.cpp
    ${CMAKE_SOURCE_DIR}/deps/ImGuiColorTextEdit/TextEditor.cpp
    ${CMAKE_SOURCE_DIR}/deps/ImGuiColorTextEdit/UnitTests.cpp
    ${FILETREE_SOURCES}



)
    
set (ANTLR_FORTRAN_SOURCES
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/ErrorListener.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90Lexer.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90LexerBase.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90Parser.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90ParserBaseListener.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90ParserBaseVisitor.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90ParserListener.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90ParserVisitor.cpp
    )

# Add source files to the target
target_sources(FortIDE PRIVATE ${IMGUI_SOURCES} ${MAIN_SOURCES} ${ANTLR_FORTRAN_SOURCES})

# Include directories
target_include_directories(FortIDE PRIVATE 
    ${CMAKE_SOURCE_DIR}/deps/spdlog/include
    ${CMAKE_SOURCE_DIR}/deps/libgit2/include
    ${CMAKE_SOURCE_DIR}/deps/imgui
    ${CMAKE_SOURCE_DIR}/deps/imgui-sfml
    ${CMAKE_SOURCE_DIR}/deps/SFML/include
    ${CMAKE_SOURCE_DIR}/deps/tinyxml2/
    ${CMAKE_SOURCE_DIR}/deps/boost_1_86_0
    ${CMAKE_SOURCE_DIR}/deps/antlr4/runtime/Cpp/runtime/src
    ${CMAKE_SOURCE_DIR}/deps/nativefiledialog/src/include
    ${CMAKE_SOURCE_DIR}/deps/ImGuiColorTextEdit/

)

# Platform-specific settings
if (WIN32)
    target_compile_definitions(FortIDE PRIVATE ANTLR4CPP_STATIC _WIN32_WINNT=0x0601 _UNICODE UNICODE _CRT_SECURE_NO_WARNINGS SFML_STATIC)
    target_link_libraries(FortIDE PRIVATE OpenGL32 winmm)
elseif (UNIX)
    target_link_libraries(FortIDE PRIVATE pthread dl)
endif()

# Boost
set(Boost_DEBUG ON)
find_package(Boost 1.87 REQUIRED COMPONENTS filesystem system)
if(Boost_FOUND)
    target_include_directories(FortIDE PRIVATE ${Boost_INCLUDE_DIRS})
    target_link_libraries(FortIDE PRIVATE Boost::filesystem Boost::system)
endif()

# SFML
set(SFML_STATIC_LIBRARIES ON)
find_package(SFML 3 REQUIRED COMPONENTS Main Graphics Window System)
if(SFML_FOUND)
    target_link_libraries(FortIDE PRIVATE sfml-main-s sfml-graphics-s sfml-window-s sfml-system-s)
else()
    message(FATAL_ERROR "SFML not found or incomplete configuration.")
endif()
# Spdlog
find_package(spdlog REQUIRED)
if(spdlog_FOUND)
    target_link_libraries(FortIDE PRIVATE spdlog)
endif()


find_package(TinyXML REQUIRED)
if(TinyXML_FOUND)
    target_include_directories(FortIDE PRIVATE ${TinyXML_INCLUDE_DIRS})
    target_link_libraries(FortIDE PRIVATE ${TinyXML_LIBRARIES})
endif()

# Link additional libraries
target_link_directories(FortIDE PRIVATE
    ${CMAKE_SOURCE_DIR}/deps/antlr4/runtime/Cpp/build/runtime/
    ${CMAKE_SOURCE_DIR}/deps/nativefiledialog/build/lib/Release/x64
    ${CMAKE_SOURCE_DIR}/deps/libgit2/build/
    ${CMAKE_SOURCE_DIR}/deps/spdlog/build/
    ${CMAKE_SOURCE_DIR}/deps/SFML/build/lib/
    ${CMAKE_SOURCE_DIR}/deps/tinyxml2/build/
)
target_link_libraries(FortIDE PRIVATE 
    libantlr4-runtime-static
    libtinyxml2
    git2
    nfd
    winhttp
    crypt32
    rpcrt4
)


# Set FortIDE as the startup project 
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT FortIDE)
