# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/Users/ab25cq/comelang/piccolo_os/build/_deps/picotool-src")
  file(MAKE_DIRECTORY "/Users/ab25cq/comelang/piccolo_os/build/_deps/picotool-src")
endif()
file(MAKE_DIRECTORY
  "/Users/ab25cq/comelang/piccolo_os/build/_deps/picotool-build"
  "/Users/ab25cq/comelang/piccolo_os/build/_deps"
  "/Users/ab25cq/comelang/piccolo_os/build/picotool/tmp"
  "/Users/ab25cq/comelang/piccolo_os/build/picotool/src/picotoolBuild-stamp"
  "/Users/ab25cq/comelang/piccolo_os/build/picotool/src"
  "/Users/ab25cq/comelang/piccolo_os/build/picotool/src/picotoolBuild-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/ab25cq/comelang/piccolo_os/build/picotool/src/picotoolBuild-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/ab25cq/comelang/piccolo_os/build/picotool/src/picotoolBuild-stamp${cfgdir}") # cfgdir has leading slash
endif()
