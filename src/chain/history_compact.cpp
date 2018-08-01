/**
 * Copyright (c) 2016-2018 Bitprim Inc.
 *
 * This file is part of Bitprim.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <bitcoin/bitcoin/chain/history.hpp>

#include <bitprim/nodecint/chain/history_compact.h>
#include <bitprim/nodecint/type_convertions.h>

BITPRIM_CONV_DEFINE(chain, history_compact_t, libbitcoin::chain::history_compact, history_compact)

// ---------------------------------------------------------------------------
extern "C" {

point_kind_t chain_history_compact_get_point_kind(history_compact_t history) {
    return static_cast<point_kind_t>(chain_history_compact_const_cpp(history).kind);
}

point_t chain_history_compact_get_point(history_compact_t history) {
    return &chain_history_compact_cpp(history).point;
}

uint32_t chain_history_compact_get_height(history_compact_t history) {
    return chain_history_compact_const_cpp(history).height;
}

uint64_t chain_history_compact_get_value_or_previous_checksum(history_compact_t history) {
    auto const& history_const_cpp = chain_history_compact_const_cpp(history);
    return history_const_cpp.value;
}

} // extern "C"
