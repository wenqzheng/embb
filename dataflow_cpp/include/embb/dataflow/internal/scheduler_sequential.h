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

#ifndef EMBB_DATAFLOW_INTERNAL_SCHEDULER_SEQUENTIAL_H_
#define EMBB_DATAFLOW_INTERNAL_SCHEDULER_SEQUENTIAL_H_

#include <embb/dataflow/internal/action.h>
#include <embb/dataflow/internal/scheduler.h>

namespace embb {
namespace dataflow {
namespace internal {

class SchedulerSequential : public Scheduler {
 public:
  SchedulerSequential() {
    // empty
  }

  virtual ~SchedulerSequential() {
    // empty
  }

  virtual void Start(
    Action & action,
    embb::mtapi::ExecutionPolicy const &) {
    action.RunSequential();
  }


  virtual void YieldToScheduler() {
    // empty
  }

  virtual int GetSlices() const {
    return 1;
  }
};

} // namespace internal
} // namespace dataflow
} // namespace embb

#endif // EMBB_DATAFLOW_INTERNAL_SCHEDULER_SEQUENTIAL_H_
