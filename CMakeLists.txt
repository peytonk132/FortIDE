cmake_minimum_required(VERSION 3.15)
set(CMAKE_TOOLCHAIN_FILE "${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")
set(VCPKG_TARGET_TRIPLET "x64-linux-dynamic")
project(FortIDE)

# Set C++ standard
set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(Boost_USE_STATIC_LIBS       ON)
#set(CMAKE_BUILD_TYPE Release)
set(ImGui-SFML_DIR "${VCPKG_ROOT}/installed/x64-linux-dynamic/share/imgui-sfml/")
# Policy to handle FindBoost module removal warning 
cmake_policy(SET CMP0167 OLD)

# Create the executable target
add_executable(FortIDE src/Main.cpp)  # Replace `main.cpp` with your main source file

file(GLOB FILETREE_SOURCES ${CMAKE_SOURCE_DIR}/src/mainfunc/FileTree/*.cpp)
set (MAIN_SOURCES
    ${CMAKE_SOURCE_DIR}/src/mainfunc/mainfunc.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/c_Parser.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/Config.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/f_MainMenu.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/searchParser/s_Parser.cpp
    ${CMAKE_SOURCE_DIR}/src/mainfunc/FileTree/FileTree.cpp
        ${CMAKE_SOURCE_DIR}/deps/portable-file-dialogs/portable-file-dialogs.h
    ${CMAKE_SOURCE_DIR}/deps/ImGuiColorTextEdit/ImGuiDebugPanel.cpp
    ${CMAKE_SOURCE_DIR}/deps/ImGuiColorTextEdit/LanguageDefinitions.cpp
    ${CMAKE_SOURCE_DIR}/deps/ImGuiColorTextEdit/TextEditor.cpp
    ${CMAKE_SOURCE_DIR}/deps/ImGuiColorTextEdit/UnitTests.cpp

    ${FILETREE_SOURCES})
    

# Add source files to the target
target_sources(FortIDE PRIVATE ${IMGUI_SOURCES} ${MAIN_SOURCES} ${ANTLR_FORTRAN_SOURCES})


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

###########################################
### automated and manual finding for ANTLR4
##  and the runtime
###########################################

find_package(antlr4-runtime REQUIRED)
target_link_libraries(FortIDE PRIVATE antlr4_shared)

#[[
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
]]

###########################################

###########################################
### Automated finding for Boost
###########################################

# Find and link Boost
find_package(Boost 1.86 REQUIRED COMPONENTS filesystem system)
#target_include_directories(FortIDE PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(FortIDE PRIVATE ${Boost_LIBRARIES})

###########################################


###########################################
### Automated finding for SFML
###########################################

# Find and link SFML
find_package(SFML COMPONENTS Network Graphics Window Audio System CONFIG REQUIRED)
target_link_libraries(FortIDE PRIVATE SFML::Network SFML::Graphics SFML::Window SFML::Audio SFML::System)


###########################################


###########################################
### Automated finding for tinyxml2
##########################################


# Find and link tinyxml2 (system-installed)
find_package(tinyxml2 CONFIG REQUIRED)  # Prefer config mode
target_link_libraries(FortIDE PRIVATE tinyxml2::tinyxml2)

##########################################


##########################################
### Automated finding for Dear ImGui
##########################################

find_package(imgui CONFIG REQUIRED)
target_link_libraries(FortIDE PRIVATE imgui::imgui)

#[[
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
# Find ImGui library file
find_library(IMGUI_LIBRARY
        NAMES imgui
        PATHS /usr/lib /usr/local/lib
)
if(IMGUI_LIBRARY)
    target_link_libraries(FortIDE PRIVATE ${IMGUI_LIBRARY})
else()
    message(FATAL_ERROR "ImGui libs not found!")
endif()
]]

##########################################


##########################################
### Automated finding for ImGui-SFML
##########################################
find_package(ImGui-SFML CONFIG REQUIRED)
target_link_libraries(FortIDE PRIVATE ImGui-SFML::ImGui-SFML)

#[[
# Find and link ImGui (system-installed)
find_path(IMGUI-SFML_INCLUDE_DIR "imgui-SFML.h"
        PATHS /usr/include /usr/local/include
)
if(IMGUI-SFML_INCLUDE_DIR)
    target_include_directories(FortIDE PRIVATE ${IMGUI-SFML_INCLUDE_DIR})
else()
    message(FATAL_ERROR "ImGui-SFML headers not found!")
endif()

# Find ImGui library file
find_library(IMGUI-SFML_LIBRARY
        NAMES ImGui-SFML
        PATHS /usr/lib /usr/local/lib
)
if(IMGUI-SFML_LIBRARY)
    target_link_libraries(FortIDE PRIVATE ${IMGUI-SFML_LIBRARY})
else()
    message(FATAL_ERROR "ImGui-SFML libs not found!")
endif()
]]


#####################################


#####################################
### Automated and manual finding for LibGit2
######################################

find_package(libgit2 CONFIG REQUIRED)
target_link_libraries(FortIDE PRIVATE libgit2::libgit2package)


#[[
# Find and link ImGui (system-installed)
find_path(LG2_INCLUDE_DIR "git2.h"
        PATHS /usr/include /usr/local/include
        PATH_SUFFIXES git2
)
if(LG2_INCLUDE_DIR)
    target_include_directories(FortIDE PRIVATE ${LG2_INCLUDE_DIR})
else()
    message(FATAL_ERROR "LibGit2 headers not found!")
endif()

# Find ImGui library file
find_library(LG2_LIBRARY
        NAMES git2
        PATHS /usr/lib /usr/local/lib
)
if(LG2_LIBRARY)
    target_link_libraries(FortIDE PRIVATE ${LG2_LIBRARY})
else()
    message(FATAL_ERROR "LibGit2 libs not found!")
endif()
]]


########################################

########################################
### Automated finding for SPDLOG
########################################

# Find and link tinyxml2 (system-installed)
find_package(spdlog CONFIG REQUIRED)  # Prefer config mode
target_link_libraries(FortIDE PRIVATE spdlog::spdlog_header_only)


# Set FortIDE as the startup project 
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT FortIDE)
