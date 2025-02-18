cmake_minimum_required(VERSION 3.15)
project(FortIDE)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(Boost_USE_STATIC_LIBS       ON)
set(CMAKE_BUILD_TYPE "Release")
# Set Boost root and include/library directories 
set(BOOST_ROOT "${CMAKE_SOURCE_DIR}/deps/boost") 
set(BOOST_INCLUDEDIR "${BOOST_ROOT}/boost") 
set(BOOST_LIBRARYDIR "${BOOST_ROOT}/stage/lib") 
#set(SFML_DIR "${CMAKE_SOURCE_DIR}/deps/SFML/build") 
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
    ${FILETREE_SOURCES})
    
set (ANTLR_FORTRAN_SOURCES
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/ErrorListener.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90Lexer.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90LexerBase.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90Parser.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90ParserBaseListener.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90ParserBaseVisitor.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90ParserListener.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/F90Files/Fortran90ParserVisitor.cpp)

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
    ${CMAKE_SOURCE_DIR}/deps/portable-file-dialogs/
    ${CMAKE_SOURCE_DIR}/deps/ImGuiColorTextEdit/
    ${BOOST_ROOT}
    )

# Platform-specific settings
if (WIN32)
    target_compile_definitions(FortIDE PRIVATE ANTLR4CPP_STATIC _WIN32_WINNT=0x0601 _UNICODE UNICODE _CRT_SECURE_NO_WARNINGS SFML_STATIC)
    target_link_libraries(FortIDE PRIVATE OpenGL32 winmm)
elseif (UNIX)
    target_link_libraries(FortIDE PRIVATE pthread dl)
endif()

#[[
# Boost
find_package(Boost 1.86 REQUIRED COMPONENTS filesystem system)
if(Boost_FOUND)
    target_include_directories(FortIDE PRIVATE ${Boost_INCLUDE_DIRS})
    target_link_libraries(FortIDE PRIVATE Boost::filesystem Boost::system)
endif()
]]
#[[
find_package(SFML 3 REQUIRED COMPONENTS System Window Graphics)
if(SFMl_FOUND)
    target_link_libraries(FortIDE PRIVATE SFML::System SFMl::Window SFML::Graphics)
endif()
]]


# Link additional libraries
target_link_directories(FortIDE PRIVATE
    ${CMAKE_SOURCE_DIR}/deps/antlr4/runtime/Cpp/build/runtime/Release
    ${CMAKE_SOURCE_DIR}/deps/antlr4/runtime/Cpp/build/runtime/Debug
    ${CMAKE_SOURCE_DIR}/deps/libgit2/build/Release
    ${CMAKE_SOURCE_DIR}/deps/libgit2/build/Debug
    ${CMAKE_SOURCE_DIR}/deps/spdlog/build/Release
    ${CMAKE_SOURCE_DIR}/deps/SFML/build/lib/Release
    ${CMAKE_SOURCE_DIR}/deps/SFML/build/lib/Debug
    ${CMAKE_SOURCE_DIR}/deps/tinyxml2/build/Release
    ${CMAKE_SOURCE_DIR}/deps/tinyxml2/build/Debug
    ${BOOST_LIBRARYDIR}
    
)
target_link_libraries(FortIDE PRIVATE 
    antlr4-runtime
    #libboost_filesystem
    #libboost_system
    boost_system
    boost_filesystem
   # sfml-main-s
    #sfml-system-s
    #sfml-window-s
    #sfml-graphics-s
    #sfml-main-s-d
    sfml-graphics-d
    sfml-window-d
    sfml-system-d
    spdlog
    tinyxml2
    git2
    #winhttp
    #gdi32
    #winmm
    GL
    #ws2_32
    #crypt32
    #rpcrt4
   
)


# Set FortIDE as the startup project 
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT FortIDE)
