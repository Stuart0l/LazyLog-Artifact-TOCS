#include "rpc_token.h"

namespace lazylog {

RPCToken::RPCToken() : completed_(false), prev_complete_(false) {}

bool RPCToken::AllPrevComplete() { return prev_complete_; }

bool RPCToken::Complete() { return completed_; }

void RPCToken::SetComplete() { completed_ = true; }

void RPCToken::SetPrevComplete() { prev_complete_ = true; }

void RPCToken::Reset() {
    completed_ = false;
    prev_complete_ = false;
}

} // namespace lazylog
