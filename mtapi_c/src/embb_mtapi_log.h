/*
 * Copyright (c) 2014-2017, Siemens AG. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef MTAPI_C_SRC_EMBB_MTAPI_LOG_H_
#define MTAPI_C_SRC_EMBB_MTAPI_LOG_H_

#include <embb/base/c/log.h>

#ifdef __cplusplus
extern "C" {
#endif


#define embb_mtapi_log_trace(...) \
  embb_log_trace("mtapi_c", __VA_ARGS__)
#define embb_mtapi_log_info(...) \
  embb_log_info("mtapi_c", __VA_ARGS__)
#define embb_mtapi_log_warning(...) \
  embb_log_warning("mtapi_c", __VA_ARGS__)
#define embb_mtapi_log_error(...) \
  embb_log_error("mtapi_c", __VA_ARGS__)


#ifdef __cplusplus
}
#endif

#endif // MTAPI_C_SRC_EMBB_MTAPI_LOG_H_
