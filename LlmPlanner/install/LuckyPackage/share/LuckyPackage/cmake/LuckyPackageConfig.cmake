# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_LuckyPackage_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED LuckyPackage_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(LuckyPackage_FOUND FALSE)
  elseif(NOT LuckyPackage_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(LuckyPackage_FOUND FALSE)
  endif()
  return()
endif()
set(_LuckyPackage_CONFIG_INCLUDED TRUE)

# output package information
if(NOT LuckyPackage_FIND_QUIETLY)
  message(STATUS "Found LuckyPackage: 0.0.0 (${LuckyPackage_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'LuckyPackage' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${LuckyPackage_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(LuckyPackage_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${LuckyPackage_DIR}/${_extra}")
endforeach()
