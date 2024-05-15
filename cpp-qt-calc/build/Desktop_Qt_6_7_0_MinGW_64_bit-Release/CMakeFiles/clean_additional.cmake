# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\cpp-qt-calc_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\cpp-qt-calc_autogen.dir\\ParseCache.txt"
  "cpp-qt-calc_autogen"
  )
endif()
