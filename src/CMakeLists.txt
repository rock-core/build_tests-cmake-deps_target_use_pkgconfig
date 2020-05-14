rock_library(deps_target_use_pkgconfig
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp
    DEPS_PKGCONFIG deps_target)

rock_executable(deps_target_use_pkgconfig_bin Main.cpp
    DEPS deps_target_use_pkgconfig)

