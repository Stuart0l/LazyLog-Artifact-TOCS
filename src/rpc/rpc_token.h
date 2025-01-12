#pragma once

#include <cstdint>

namespace lazylog {

using rpc_run_func_type = void(*)();

class RPCToken {
   public:
    RPCToken();

    bool Complete();
    void SetComplete();
    void Reset();
    uint64_t GetTsc() const;
    void SetTsc(const uint64_t tsc);

   protected:
    bool completed_;
    uint64_t tsc_;
    // rpc_run_func_type run_func_;
};

}  // namespace lazylog
