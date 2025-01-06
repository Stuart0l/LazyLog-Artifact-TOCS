#pragma once

namespace lazylog {

using rpc_run_func_type = void(*)();

class RPCToken {
   public:
    RPCToken();

    bool AllPrevComplete();
    bool Complete();
    void SetComplete();
    void SetPrevComplete();
    void Reset();

   protected:
    bool completed_;
    bool prev_complete_;
    // rpc_run_func_type run_func_;
};

}  // namespace lazylog
