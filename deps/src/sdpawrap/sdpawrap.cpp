#include <cxx_wrap.hpp>
#include "sdpa_call.h"

//std::string greet()
//{
   //return "hello, world";
//}

JULIA_CPP_MODULE_BEGIN(registry)
    cxx_wrap::Module& sdpa = registry.create_module("SDPA");
    sdpa.add_type<SDPA>("SDPAProblem")
        .constructor();
//sdpa.method("greet", &greet);
JULIA_CPP_MODULE_END
