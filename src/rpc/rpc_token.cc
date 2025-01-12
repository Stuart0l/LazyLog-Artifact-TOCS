#include "rpc_token.h"

namespace lazylog {

RPCToken::RPCToken() : completed_(false) {}

bool RPCToken::Complete() { return completed_; }

void RPCToken::SetComplete() { completed_ = true; }

void RPCToken::Reset() { completed_ = false; }

uint64_t RPCToken::GetTsc() const { return tsc_; }

void RPCToken::SetTsc(const uint64_t tsc) { tsc_ = tsc; }

} // namespace lazylog
