// Copyright (c) 2016-2020 Knuth Project developers.
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <kth/capi/config/endpoint.h>

#include <kth/infrastructure/config/endpoint.hpp>

kth::infrastructure::config::endpoint endpoint_to_cpp(kth_endpoint const& x) {
    return {x.host, x.port};
}

// ---------------------------------------------------------------------------
extern "C" {


} // extern "C"
