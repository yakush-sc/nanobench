#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

// FIXME: DOCTEST doesn't support baremetal targets without mutex & pthreads
#ifndef __linux
#define DOCTEST_CONFIG_NO_POSIX_SIGNALS
namespace std {
    struct mutex {
        void lock() {}
        void unlock() {}
    };
}
#endif

#include <thirdparty/doctest/doctest.h>
