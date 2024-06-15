#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/_assert_tensor_metadata_ops.h>

namespace at {


// aten::_assert_tensor_metadata(Tensor a, SymInt[]? size=None, SymInt[]? stride=None, ScalarType? dtype=None) -> ()
inline void _assert_tensor_metadata(const at::Tensor & a, at::OptionalIntArrayRef size=::std::nullopt, at::OptionalIntArrayRef stride=::std::nullopt, ::std::optional<at::ScalarType> dtype=::std::nullopt) {
    return at::_ops::_assert_tensor_metadata::call(a, size.has_value() ? ::std::make_optional(c10::fromIntArrayRefSlow(*size)) : ::std::nullopt, stride.has_value() ? ::std::make_optional(c10::fromIntArrayRefSlow(*stride)) : ::std::nullopt, dtype);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  void _assert_tensor_metadata(const at::Tensor & a, at::OptionalIntArrayRef size=::std::nullopt, at::OptionalIntArrayRef stride=::std::nullopt, ::std::optional<at::ScalarType> dtype=::std::nullopt) {
    return at::_ops::_assert_tensor_metadata::call(a, size.has_value() ? ::std::make_optional(c10::fromIntArrayRefSlow(*size)) : ::std::nullopt, stride.has_value() ? ::std::make_optional(c10::fromIntArrayRefSlow(*stride)) : ::std::nullopt, dtype);
  }
}

// aten::_assert_tensor_metadata(Tensor a, SymInt[]? size=None, SymInt[]? stride=None, ScalarType? dtype=None) -> ()
inline void _assert_tensor_metadata_symint(const at::Tensor & a, at::OptionalSymIntArrayRef size=::std::nullopt, at::OptionalSymIntArrayRef stride=::std::nullopt, ::std::optional<at::ScalarType> dtype=::std::nullopt) {
    return at::_ops::_assert_tensor_metadata::call(a, size, stride, dtype);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  void _assert_tensor_metadata(const at::Tensor & a, at::OptionalSymIntArrayRef size=::std::nullopt, at::OptionalSymIntArrayRef stride=::std::nullopt, ::std::optional<at::ScalarType> dtype=::std::nullopt) {
    return at::_ops::_assert_tensor_metadata::call(a, size, stride, dtype);
  }
}

}
