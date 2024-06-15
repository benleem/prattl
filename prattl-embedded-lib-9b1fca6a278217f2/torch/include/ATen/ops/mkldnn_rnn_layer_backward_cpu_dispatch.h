#pragma once
// @generated by torchgen/gen.py from DispatchKeyFunction.h

// NB: The implementing C++ file is RegisterDispatchKey.cpp

// The only #includes we need are for custom classes that have defaults in the C++ API
#include <c10/core/MemoryFormat.h>
#include <c10/core/Scalar.h>
#include <ATen/core/Reduction.h>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {

namespace cpu {

TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> mkldnn_rnn_layer_backward(const at::Tensor & input, const at::Tensor & weight1, const at::Tensor & weight2, const at::Tensor & weight3, const at::Tensor & weight4, const at::Tensor & hx_, const at::Tensor & cx_tmp, const at::Tensor & output, const at::Tensor & hy_, const at::Tensor & cy_, const ::std::optional<at::Tensor> & grad_output, const ::std::optional<at::Tensor> & grad_hy, const ::std::optional<at::Tensor> & grad_cy, bool reverse, int64_t mode, int64_t hidden_size, int64_t num_layers, bool has_biases, bool train, bool bidirectional, at::IntArrayRef batch_sizes, bool batch_first, const at::Tensor & workspace);

} // namespace cpu
} // namespace at
