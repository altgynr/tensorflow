/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#include "tensorflow/core/tpu/kernels/tpu_compilation_cache_metrics.h"

namespace tensorflow {
namespace tpu {

/* static */
void TpuCompilationCacheMetrics::IncrementCacheLookupCount(
    bool is_cache_hit, absl::string_view session_name) {
  // A placeholder for tracking metrics.
}

/* static */
void TpuCompilationCacheMetrics::SetCacheEntryCount(int64 count) {
  // A placeholder for tracking metrics.
}

}  // namespace tpu
}  // namespace tensorflow
