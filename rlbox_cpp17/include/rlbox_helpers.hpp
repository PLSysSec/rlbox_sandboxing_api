#pragma once

#include <stdlib.h>
#include <iostream>

namespace rlbox {
    namespace detail {
        const int CompileErrorCode = 42;

        inline void dynamic_check(bool check, const char * const msg) {
            if (!check) {
                #ifdef RLBOX_USE_EXCEPTIONS
                    throw std::runtime_error(msg);
                #else
                    std::cerr << msg << std::endl;
                    abort();
                #endif
            }
        }

        #ifdef RLBOX_NO_COMPILE_CHECKS
            #if defined(RLBOX_USE_EXCEPTIONS)
                #define rlbox_detail_static_check(CondExpr, Message) if (!(CondExpr)) throw std::runtime_error(Message)
            #else
                #define rlbox_detail_static_check(CondExpr, Message) if (!(CondExpr)) abort()
            #endif
        #else
            #define rlbox_detail_static_check(CondExpr, Message) static_assert(CondExpr, Message)
        #endif
    };
}