// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarPointTrackID.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_POINT_TRACK_ID__BUILDER_HPP_
#define TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_POINT_TRACK_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ti_mmwave_rospkg_msgs/msg/detail/radar_point_track_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ti_mmwave_rospkg_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarPointTrackID_tid
{
public:
  explicit Init_RadarPointTrackID_tid(::ti_mmwave_rospkg_msgs::msg::RadarPointTrackID & msg)
  : msg_(msg)
  {}
  ::ti_mmwave_rospkg_msgs::msg::RadarPointTrackID tid(::ti_mmwave_rospkg_msgs::msg::RadarPointTrackID::_tid_type arg)
  {
    msg_.tid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarPointTrackID msg_;
};

class Init_RadarPointTrackID_header
{
public:
  Init_RadarPointTrackID_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarPointTrackID_tid header(::ti_mmwave_rospkg_msgs::msg::RadarPointTrackID::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarPointTrackID_tid(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarPointTrackID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ti_mmwave_rospkg_msgs::msg::RadarPointTrackID>()
{
  return ti_mmwave_rospkg_msgs::msg::builder::Init_RadarPointTrackID_header();
}

}  // namespace ti_mmwave_rospkg_msgs

#endif  // TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_POINT_TRACK_ID__BUILDER_HPP_
