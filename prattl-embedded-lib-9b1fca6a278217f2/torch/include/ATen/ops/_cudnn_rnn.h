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



#include <ATen/ops/_cudnn_rnn_ops.h>

namespace at {


// aten::_cudnn_rnn(Tensor input, Tensor[] weight, int weight_stride0, Tensor? weight_buf, Tensor hx, Tensor? cx, int mode, SymInt hidden_size, SymInt proj_size, int num_layers, bool batch_first, float dropout, bool train, bool bidirectional, SymInt[] batch_sizes, Tensor? dropout_state) -> (Tensor, Tensor, Tensor, Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> _cudnn_rnn(const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const ::std::optional<at::Tensor> & weight_buf, const at::Tensor & hx, const ::std::optional<at::Tensor> & cx, int64_t mode, int64_t hidden_size, int64_t proj_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, at::IntArrayRef batch_sizes, const ::std::optional<at::Tensor> & dropout_state) {
    return at::_ops::_cudnn_rnn::call(input, weight, weight_stride0, weight_buf, hx, cx, mode, hidden_size, proj_size, num_layers, batch_first, dropout, train, bidirectional, c10::fromIntArrayRefSlow(batch_sizes), dropout_state);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> _cudnn_rnn(const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const ::std::optional<at::Tensor> & weight_buf, const at::Tensor & hx, const ::std::optional<at::Tensor> & cx, int64_t mode, int64_t hidden_size, int64_t proj_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, at::IntArrayRef batch_sizes, const ::std::optional<at::Tensor> & dropout_state) {
    return at::_ops::_cudnn_rnn::call(input, weight, weight_stride0, weight_buf, hx, cx, mode, hidden_size, proj_size, num_layers, batch_first, dropout, train, bidirectional, c10::fromIntArrayRefSlow(batch_sizes), dropout_state);
  }
}

// aten::_cudnn_rnn(Tensor input, Tensor[] weight, int weight_stride0, Tensor? weight_buf, Tensor hx, Tensor? cx, int mode, SymInt hidden_size, SymInt proj_size, int num_layers, bool batch_first, float dropout, bool train, bool bidirectional, SymInt[] batch_sizes, Tensor? dropout_state) -> (Tensor, Tensor, Tensor, Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> _cudnn_rnn_symint(const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const ::std::optional<at::Tensor> & weight_buf, const at::Tensor & hx, const ::std::optional<at::Tensor> & cx, int64_t mode, c10::SymInt hidden_size, c10::SymInt proj_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, c10::SymIntArrayRef batch_sizes, const ::std::optional<at::Tensor> & dropout_state) {
    return at::_ops::_cudnn_rnn::call(input, weight, weight_stride0, weight_buf, hx, cx, mode, hidden_size, proj_size, num_layers, batch_first, dropout, train, bidirectional, batch_sizes, dropout_state);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> _cudnn_rnn(const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const ::std::optional<at::Tensor> & weight_buf, const at::Tensor & hx, const ::std::optional<at::Tensor> & cx, int64_t mode, c10::SymInt hidden_size, c10::SymInt proj_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, c10::SymIntArrayRef batch_sizes, const ::std::optional<at::Tensor> & dropout_state) {
    return at::_ops::_cudnn_rnn::call(input, weight, weight_stride0, weight_buf, hx, cx, mode, hidden_size, proj_size, num_layers, batch_first, dropout, train, bidirectional, batch_sizes, dropout_state);
  }
}

// aten::_cudnn_rnn.out(Tensor input, Tensor[] weight, int weight_stride0, Tensor? weight_buf, Tensor hx, Tensor? cx, int mode, SymInt hidden_size, SymInt proj_size, int num_layers, bool batch_first, float dropout, bool train, bool bidirectional, SymInt[] batch_sizes, Tensor? dropout_state, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2, Tensor(d!) out3, Tensor(e!) out4) -> (Tensor(a!), Tensor(b!), Tensor(c!), Tensor(d!), Tensor(e!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> _cudnn_rnn_out(at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, at::Tensor & out3, at::Tensor & out4, const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const ::std::optional<at::Tensor> & weight_buf, const at::Tensor & hx, const ::std::optional<at::Tensor> & cx, int64_t mode, int64_t hidden_size, int64_t proj_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, at::IntArrayRef batch_sizes, const ::std::optional<at::Tensor> & dropout_state) {
    return at::_ops::_cudnn_rnn_out::call(input, weight, weight_stride0, weight_buf, hx, cx, mode, hidden_size, proj_size, num_layers, batch_first, dropout, train, bidirectional, c10::fromIntArrayRefSlow(batch_sizes), dropout_state, out0, out1, out2, out3, out4);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> _cudnn_rnn_out(at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, at::Tensor & out3, at::Tensor & out4, const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const ::std::optional<at::Tensor> & weight_buf, const at::Tensor & hx, const ::std::optional<at::Tensor> & cx, int64_t mode, int64_t hidden_size, int64_t proj_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, at::IntArrayRef batch_sizes, const ::std::optional<at::Tensor> & dropout_state) {
    return at::_ops::_cudnn_rnn_out::call(input, weight, weight_stride0, weight_buf, hx, cx, mode, hidden_size, proj_size, num_layers, batch_first, dropout, train, bidirectional, c10::fromIntArrayRefSlow(batch_sizes), dropout_state, out0, out1, out2, out3, out4);
  }
}

// aten::_cudnn_rnn.out(Tensor input, Tensor[] weight, int weight_stride0, Tensor? weight_buf, Tensor hx, Tensor? cx, int mode, SymInt hidden_size, SymInt proj_size, int num_layers, bool batch_first, float dropout, bool train, bool bidirectional, SymInt[] batch_sizes, Tensor? dropout_state, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2, Tensor(d!) out3, Tensor(e!) out4) -> (Tensor(a!), Tensor(b!), Tensor(c!), Tensor(d!), Tensor(e!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> _cudnn_rnn_outf(const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const ::std::optional<at::Tensor> & weight_buf, const at::Tensor & hx, const ::std::optional<at::Tensor> & cx, int64_t mode, int64_t hidden_size, int64_t proj_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, at::IntArrayRef batch_sizes, const ::std::optional<at::Tensor> & dropout_state, at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, at::Tensor & out3, at::Tensor & out4) {
    return at::_ops::_cudnn_rnn_out::call(input, weight, weight_stride0, weight_buf, hx, cx, mode, hidden_size, proj_size, num_layers, batch_first, dropout, train, bidirectional, c10::fromIntArrayRefSlow(batch_sizes), dropout_state, out0, out1, out2, out3, out4);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> _cudnn_rnn_outf(const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const ::std::optional<at::Tensor> & weight_buf, const at::Tensor & hx, const ::std::optional<at::Tensor> & cx, int64_t mode, int64_t hidden_size, int64_t proj_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, at::IntArrayRef batch_sizes, const ::std::optional<at::Tensor> & dropout_state, at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, at::Tensor & out3, at::Tensor & out4) {
    return at::_ops::_cudnn_rnn_out::call(input, weight, weight_stride0, weight_buf, hx, cx, mode, hidden_size, proj_size, num_layers, batch_first, dropout, train, bidirectional, c10::fromIntArrayRefSlow(batch_sizes), dropout_state, out0, out1, out2, out3, out4);
  }
}

// aten::_cudnn_rnn.out(Tensor input, Tensor[] weight, int weight_stride0, Tensor? weight_buf, Tensor hx, Tensor? cx, int mode, SymInt hidden_size, SymInt proj_size, int num_layers, bool batch_first, float dropout, bool train, bool bidirectional, SymInt[] batch_sizes, Tensor? dropout_state, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2, Tensor(d!) out3, Tensor(e!) out4) -> (Tensor(a!), Tensor(b!), Tensor(c!), Tensor(d!), Tensor(e!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> _cudnn_rnn_symint_out(at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, at::Tensor & out3, at::Tensor & out4, const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const ::std::optional<at::Tensor> & weight_buf, const at::Tensor & hx, const ::std::optional<at::Tensor> & cx, int64_t mode, c10::SymInt hidden_size, c10::SymInt proj_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, c10::SymIntArrayRef batch_sizes, const ::std::optional<at::Tensor> & dropout_state) {
    return at::_ops::_cudnn_rnn_out::call(input, weight, weight_stride0, weight_buf, hx, cx, mode, hidden_size, proj_size, num_layers, batch_first, dropout, train, bidirectional, batch_sizes, dropout_state, out0, out1, out2, out3, out4);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> _cudnn_rnn_out(at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, at::Tensor & out3, at::Tensor & out4, const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const ::std::optional<at::Tensor> & weight_buf, const at::Tensor & hx, const ::std::optional<at::Tensor> & cx, int64_t mode, c10::SymInt hidden_size, c10::SymInt proj_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, c10::SymIntArrayRef batch_sizes, const ::std::optional<at::Tensor> & dropout_state) {
    return at::_ops::_cudnn_rnn_out::call(input, weight, weight_stride0, weight_buf, hx, cx, mode, hidden_size, proj_size, num_layers, batch_first, dropout, train, bidirectional, batch_sizes, dropout_state, out0, out1, out2, out3, out4);
  }
}

// aten::_cudnn_rnn.out(Tensor input, Tensor[] weight, int weight_stride0, Tensor? weight_buf, Tensor hx, Tensor? cx, int mode, SymInt hidden_size, SymInt proj_size, int num_layers, bool batch_first, float dropout, bool train, bool bidirectional, SymInt[] batch_sizes, Tensor? dropout_state, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2, Tensor(d!) out3, Tensor(e!) out4) -> (Tensor(a!), Tensor(b!), Tensor(c!), Tensor(d!), Tensor(e!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> _cudnn_rnn_symint_outf(const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const ::std::optional<at::Tensor> & weight_buf, const at::Tensor & hx, const ::std::optional<at::Tensor> & cx, int64_t mode, c10::SymInt hidden_size, c10::SymInt proj_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, c10::SymIntArrayRef batch_sizes, const ::std::optional<at::Tensor> & dropout_state, at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, at::Tensor & out3, at::Tensor & out4) {
    return at::_ops::_cudnn_rnn_out::call(input, weight, weight_stride0, weight_buf, hx, cx, mode, hidden_size, proj_size, num_layers, batch_first, dropout, train, bidirectional, batch_sizes, dropout_state, out0, out1, out2, out3, out4);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> _cudnn_rnn_outf(const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const ::std::optional<at::Tensor> & weight_buf, const at::Tensor & hx, const ::std::optional<at::Tensor> & cx, int64_t mode, c10::SymInt hidden_size, c10::SymInt proj_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, c10::SymIntArrayRef batch_sizes, const ::std::optional<at::Tensor> & dropout_state, at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, at::Tensor & out3, at::Tensor & out4) {
    return at::_ops::_cudnn_rnn_out::call(input, weight, weight_stride0, weight_buf, hx, cx, mode, hidden_size, proj_size, num_layers, batch_first, dropout, train, bidirectional, batch_sizes, dropout_state, out0, out1, out2, out3, out4);
  }
}

}
