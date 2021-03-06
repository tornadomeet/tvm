/*!
 *  Copyright (c) 2017 by Contributors
 * \brief Tag definitions
 * \file tags.h
 */
#ifndef TOPI_TAGS_H_
#define TOPI_TAGS_H_

namespace topi {

constexpr auto kElementWise = "ewise";
constexpr auto kBroadcast = "bcast";
constexpr auto kMatMult = "matmult";
constexpr auto kConv2dNCHW = "conv2d_nchw";
constexpr auto kConv2dHWCN = "conv2d_hwcn";
constexpr auto kDepthwiseConv2dNCHW = "depthwise_conv2d_nchw";
constexpr auto kDepthwiseConv2dNHWC = "depthwise_conv2d_nhwc";
constexpr auto kGroupConv2d = "group_conv2d";

}  // namespace topi

#endif  // TOPI_TAGS_H_
