// Copyright (c) 2016-2020 Knuth Project developers.
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef KTH_CAPI_CONFIG_NETWORK_SETTINGS_H_
#define KTH_CAPI_CONFIG_NETWORK_SETTINGS_H_

#include <stddef.h>
#include <stdint.h>

#include <kth/capi/primitives.h>

#include <kth/capi/config/authority.h>
#include <kth/capi/config/endpoint.h>

// BCT_API
// settings();
// settings(infrastructure::config::settings context);

typedef struct {
    uint32_t threads;
    uint32_t protocol_maximum;
    uint32_t protocol_minimum;
    uint64_t services;
    uint64_t invalid_services;
    kth_bool_t relay_transactions;
    kth_bool_t validate_checksum;
    uint32_t identifier;
    uint16_t inbound_port;
    uint32_t inbound_connections;
    uint32_t outbound_connections;
    uint32_t manual_attempt_limit;
    uint32_t connect_batch_size;
    uint32_t connect_timeout_seconds;
    uint32_t channel_handshake_seconds;
    uint32_t channel_heartbeat_minutes;
    uint32_t channel_inactivity_minutes;
    uint32_t channel_expiration_minutes;
    uint32_t channel_germination_seconds;
    uint32_t host_pool_capacity;
    char* hosts_file;
    kth_authority self;

    size_t blacklist_count;
    kth_authority* blacklists;

    size_t peer_count;
    kth_endpoint* peers;

    size_t seed_count;
    kth_endpoint* seeds;

    // [log]
    char* debug_file;
    char* error_file;
    char* archive_directory;
    size_t rotation_size;
    size_t minimum_free_space;
    size_t maximum_archive_size;
    size_t maximum_archive_files;
    kth_authority statistics_server;

    kth_bool_t verbose;
    kth_bool_t use_ipv6;

    size_t user_agent_blacklist_count;
    char** user_agent_blacklist;     //std::vector<std::string>
} kth_network_settings;

// /// Helpers.
// asio::duration connect_timeout() const;
// asio::duration channel_handshake() const;
// asio::duration channel_heartbeat() const;
// asio::duration channel_inactivity() const;
// asio::duration channel_expiration() const;
// asio::duration channel_germination() const;

#endif // KTH_CAPI_CONFIG_NETWORK_SETTINGS_H_
