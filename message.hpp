#ifndef TEST_LIB_PLATFORM_DEPS_MESSAGE_HPP
#define TEST_LIB_PLATFORM_DEPS_MESSAGE_HPP

#ifdef __linux__
#include <test-lib-linux-only/message.hpp>
#endif

#ifdef __APPLE__
#include <test-lib-macos-only/message.hpp>
#endif

#endif
