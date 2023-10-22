# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CCapplication_autogen"
  "CMakeFiles\\CCapplication_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CCapplication_autogen.dir\\ParseCache.txt"
  )
endif()
