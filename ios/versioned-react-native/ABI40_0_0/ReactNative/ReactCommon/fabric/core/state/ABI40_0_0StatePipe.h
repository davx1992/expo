/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <functional>

#include <ABI40_0_0React/core/StateUpdate.h>

namespace ABI40_0_0facebook {
namespace ABI40_0_0React {

using StatePipe = std::function<void(StateUpdate const &stateUpdate)>;

} // namespace ABI40_0_0React
} // namespace ABI40_0_0facebook
