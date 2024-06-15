#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API exponential_ {
  using schema = at::Tensor & (at::Tensor &, double, ::std::optional<at::Generator>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::exponential_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "exponential_(Tensor(a!) self, float lambd=1, *, Generator? generator=None) -> Tensor(a!)")
  static at::Tensor & call(at::Tensor & self, double lambd, ::std::optional<at::Generator> generator);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, double lambd, ::std::optional<at::Generator> generator);
};

struct TORCH_API exponential_out {
  using schema = at::Tensor & (const at::Tensor &, double, ::std::optional<at::Generator>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::exponential")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "exponential.out(Tensor self, float lambd=1, *, Generator? generator=None, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, double lambd, ::std::optional<at::Generator> generator, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double lambd, ::std::optional<at::Generator> generator, at::Tensor & out);
};

struct TORCH_API exponential {
  using schema = at::Tensor (const at::Tensor &, double, ::std::optional<at::Generator>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::exponential")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "exponential(Tensor self, float lambd=1, *, Generator? generator=None) -> Tensor")
  static at::Tensor call(const at::Tensor & self, double lambd, ::std::optional<at::Generator> generator);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double lambd, ::std::optional<at::Generator> generator);
};

}} // namespace at::_ops
