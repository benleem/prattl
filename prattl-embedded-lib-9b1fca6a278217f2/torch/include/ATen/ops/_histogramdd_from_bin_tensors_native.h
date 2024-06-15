#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {
TORCH_API at::Tensor & _histogramdd_from_bin_tensors_out(const at::Tensor & self, at::TensorList bins, const ::std::optional<at::Tensor> & weight, bool density, at::Tensor & out);
TORCH_API at::Tensor _histogramdd(const at::Tensor & self, at::TensorList bins, const ::std::optional<at::Tensor> & weight={}, bool density=false);
} // namespace native
} // namespace at
