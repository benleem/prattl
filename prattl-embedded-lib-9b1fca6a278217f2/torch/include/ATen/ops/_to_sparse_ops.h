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


struct TORCH_API _to_sparse_sparse_dim {
  using schema = at::Tensor (const at::Tensor &, int64_t);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_to_sparse")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "sparse_dim")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_to_sparse.sparse_dim(Tensor self, int sparse_dim) -> Tensor")
  static at::Tensor call(const at::Tensor & self, int64_t sparse_dim);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t sparse_dim);
};

struct TORCH_API _to_sparse {
  using schema = at::Tensor (const at::Tensor &, ::std::optional<at::Layout>, at::OptionalIntArrayRef, ::std::optional<int64_t>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_to_sparse")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_to_sparse(Tensor self, *, Layout? layout=None, int[2]? blocksize=None, int? dense_dim=None) -> Tensor")
  static at::Tensor call(const at::Tensor & self, ::std::optional<at::Layout> layout, at::OptionalIntArrayRef blocksize, ::std::optional<int64_t> dense_dim);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, ::std::optional<at::Layout> layout, at::OptionalIntArrayRef blocksize, ::std::optional<int64_t> dense_dim);
};

struct TORCH_API _to_sparse_sparse_dim_out {
  using schema = at::Tensor & (const at::Tensor &, int64_t, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_to_sparse")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "sparse_dim_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_to_sparse.sparse_dim_out(Tensor self, int sparse_dim, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, int64_t sparse_dim, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t sparse_dim, at::Tensor & out);
};

struct TORCH_API _to_sparse_out {
  using schema = at::Tensor & (const at::Tensor &, ::std::optional<at::Layout>, at::OptionalIntArrayRef, ::std::optional<int64_t>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_to_sparse")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_to_sparse.out(Tensor self, *, Layout? layout=None, int[2]? blocksize=None, int? dense_dim=None, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, ::std::optional<at::Layout> layout, at::OptionalIntArrayRef blocksize, ::std::optional<int64_t> dense_dim, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, ::std::optional<at::Layout> layout, at::OptionalIntArrayRef blocksize, ::std::optional<int64_t> dense_dim, at::Tensor & out);
};

}} // namespace at::_ops
