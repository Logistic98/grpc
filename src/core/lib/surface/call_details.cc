//
//
// Copyright 2015 gRPC authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//

#include <grpc/grpc.h>
#include <grpc/slice.h>
#include <grpc/support/port_platform.h>

#include "src/core/lib/debug/trace.h"
#include "src/core/lib/iomgr/exec_ctx.h"
#include "src/core/lib/slice/slice.h"

void grpc_call_details_init(grpc_call_details* details) {
  GRPC_TRACE_LOG(api, INFO)
      << "grpc_call_details_init(details=" << details << ")";
  details->method = grpc_empty_slice();
  details->host = grpc_empty_slice();
}

void grpc_call_details_destroy(grpc_call_details* details) {
  GRPC_TRACE_LOG(api, INFO)
      << "grpc_call_details_destroy(details=" << details << ")";
  grpc_core::ExecCtx exec_ctx;
  grpc_core::CSliceUnref(details->method);
  grpc_core::CSliceUnref(details->host);
}
