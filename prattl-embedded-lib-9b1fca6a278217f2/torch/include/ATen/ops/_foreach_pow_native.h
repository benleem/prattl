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
TORCH_API ::std::vector<at::Tensor> foreach_tensor_pow_list_kernel_slow(at::TensorList self, at::TensorList exponent);
TORCH_API void _foreach_pow_List_out(at::TensorList self, at::TensorList exponent, at::TensorList out);
TORCH_API void foreach_tensor_pow_list_kernel_slow_(at::TensorList self, at::TensorList exponent);
TORCH_API ::std::vector<at::Tensor> foreach_tensor_pow_list_kernel_cuda(at::TensorList self, at::TensorList exponent);
TORCH_API void foreach_tensor_pow_list_kernel_cuda_(at::TensorList self, at::TensorList exponent);
TORCH_API ::std::vector<at::Tensor> foreach_tensor_pow_scalar_kernel_slow(at::TensorList self, const at::Scalar & exponent);
TORCH_API void _foreach_pow_Scalar_out(at::TensorList self, const at::Scalar & exponent, at::TensorList out);
TORCH_API void foreach_tensor_pow_scalar_kernel_slow_(at::TensorList self, const at::Scalar & exponent);
TORCH_API ::std::vector<at::Tensor> foreach_tensor_pow_scalar_kernel_cuda(at::TensorList self, const at::Scalar & exponent);
TORCH_API void foreach_tensor_pow_scalar_kernel_cuda_(at::TensorList self, const at::Scalar & exponent);
TORCH_API ::std::vector<at::Tensor> foreach_tensor_pow_scalarlist_kernel_slow(at::TensorList self, at::ArrayRef<at::Scalar> exponent);
TORCH_API void _foreach_pow_ScalarList_out(at::TensorList self, at::ArrayRef<at::Scalar> exponent, at::TensorList out);
TORCH_API void foreach_tensor_pow_scalarlist_kernel_slow_(at::TensorList self, at::ArrayRef<at::Scalar> exponent);
TORCH_API ::std::vector<at::Tensor> foreach_tensor_pow_scalarlist_kernel_cuda(at::TensorList self, at::ArrayRef<at::Scalar> exponent);
TORCH_API void foreach_tensor_pow_scalarlist_kernel_cuda_(at::TensorList self, at::ArrayRef<at::Scalar> exponent);
TORCH_API ::std::vector<at::Tensor> foreach_scalar_pow_list_kernel_slow(const at::Scalar & self, at::TensorList exponent);
TORCH_API ::std::vector<at::Tensor> foreach_scalar_pow_list_kernel_cuda(const at::Scalar & self, at::TensorList exponent);
} // namespace native
} // namespace at
