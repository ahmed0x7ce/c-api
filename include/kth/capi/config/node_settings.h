// Copyright (c) 2016-2020 Knuth Project developers.
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef KTH_CAPI_CONFIG_NODE_SETTINGS_H_
#define KTH_CAPI_CONFIG_NODE_SETTINGS_H_

#include <stdint.h>

#include <kth/capi/primitives.h>

// BCN_API
// settings();
// settings(infrastructure::config::settings context);

typedef struct {
    uint32_t sync_peers;
    uint32_t sync_timeout_seconds;
    uint32_t block_latency_seconds;
    kth_bool_t refresh_transactions;

    kth_bool_t compact_blocks_high_bandwidth;
} kth_node_settings;

// /// Helpers.
// asio::duration block_latency() const;

#endif // KTH_CAPI_CONFIG_NODE_SETTINGS_H_
