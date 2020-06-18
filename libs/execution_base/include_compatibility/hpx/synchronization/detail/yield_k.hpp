//  Copyright (c) 2019 Mikael Simberg
//
//  SPDX-License-Identifier: BSL-1.0
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <hpx/config.hpp>
#include <hpx/execution_base/config/defines.hpp>
#include <hpx/execution_base/this_thread.hpp>

#if HPX_EXECUTION_BASE_HAVE_DEPRECATION_WARNINGS
#if defined(HPX_MSVC)
#pragma message(                                                               \
    "The header hpx/synchronization/detail/yield_k.hpp is deprecated, \
    please include hpx/execution_base/this_thread.hpp instead")
#else
#warning "The header hpx/synchronization/detail/yield_k.hpp is deprecated, \
    please include hpx/execution_base/this_thread.hpp instead"
#endif
#endif