// Generated by gencpp from file custom_msg_pkg/IOT_sensor.msg
// DO NOT EDIT!


#ifndef CUSTOM_MSG_PKG_MESSAGE_IOT_SENSOR_H
#define CUSTOM_MSG_PKG_MESSAGE_IOT_SENSOR_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace custom_msg_pkg
{
template <class ContainerAllocator>
struct IOT_sensor_
{
  typedef IOT_sensor_<ContainerAllocator> Type;

  IOT_sensor_()
    : id(0)
    , name()
    , temperature(0.0)
    , humidity(0.0)  {
    }
  IOT_sensor_(const ContainerAllocator& _alloc)
    : id(0)
    , name(_alloc)
    , temperature(0.0)
    , humidity(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef float _temperature_type;
  _temperature_type temperature;

   typedef float _humidity_type;
  _humidity_type humidity;





  typedef boost::shared_ptr< ::custom_msg_pkg::IOT_sensor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::custom_msg_pkg::IOT_sensor_<ContainerAllocator> const> ConstPtr;

}; // struct IOT_sensor_

typedef ::custom_msg_pkg::IOT_sensor_<std::allocator<void> > IOT_sensor;

typedef boost::shared_ptr< ::custom_msg_pkg::IOT_sensor > IOT_sensorPtr;
typedef boost::shared_ptr< ::custom_msg_pkg::IOT_sensor const> IOT_sensorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::custom_msg_pkg::IOT_sensor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::custom_msg_pkg::IOT_sensor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::custom_msg_pkg::IOT_sensor_<ContainerAllocator1> & lhs, const ::custom_msg_pkg::IOT_sensor_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.name == rhs.name &&
    lhs.temperature == rhs.temperature &&
    lhs.humidity == rhs.humidity;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::custom_msg_pkg::IOT_sensor_<ContainerAllocator1> & lhs, const ::custom_msg_pkg::IOT_sensor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace custom_msg_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::custom_msg_pkg::IOT_sensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msg_pkg::IOT_sensor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_msg_pkg::IOT_sensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_msg_pkg::IOT_sensor_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msg_pkg::IOT_sensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msg_pkg::IOT_sensor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::custom_msg_pkg::IOT_sensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "16767b4b63fd3551b69c6c06672a0bf6";
  }

  static const char* value(const ::custom_msg_pkg::IOT_sensor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x16767b4b63fd3551ULL;
  static const uint64_t static_value2 = 0xb69c6c06672a0bf6ULL;
};

template<class ContainerAllocator>
struct DataType< ::custom_msg_pkg::IOT_sensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "custom_msg_pkg/IOT_sensor";
  }

  static const char* value(const ::custom_msg_pkg::IOT_sensor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::custom_msg_pkg::IOT_sensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n"
"string name\n"
"\n"
"float32 temperature\n"
"float32 humidity\n"
;
  }

  static const char* value(const ::custom_msg_pkg::IOT_sensor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::custom_msg_pkg::IOT_sensor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.name);
      stream.next(m.temperature);
      stream.next(m.humidity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IOT_sensor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::custom_msg_pkg::IOT_sensor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::custom_msg_pkg::IOT_sensor_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "temperature: ";
    Printer<float>::stream(s, indent + "  ", v.temperature);
    s << indent << "humidity: ";
    Printer<float>::stream(s, indent + "  ", v.humidity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CUSTOM_MSG_PKG_MESSAGE_IOT_SENSOR_H
