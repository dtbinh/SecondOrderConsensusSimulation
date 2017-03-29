// Generated by gencpp from file delbono_kobra/OdomInfo.msg
// DO NOT EDIT!


#ifndef DELBONO_KOBRA_MESSAGE_ODOMINFO_H
#define DELBONO_KOBRA_MESSAGE_ODOMINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace delbono_kobra
{
template <class ContainerAllocator>
struct OdomInfo_
{
  typedef OdomInfo_<ContainerAllocator> Type;

  OdomInfo_()
    : t(0.0)
    , linearVel(0.0)
    , angularVel(0.0)
    , dx(0.0)
    , dy(0.0)
    , dtheta(0.0)  {
    }
  OdomInfo_(const ContainerAllocator& _alloc)
    : t(0.0)
    , linearVel(0.0)
    , angularVel(0.0)
    , dx(0.0)
    , dy(0.0)
    , dtheta(0.0)  {
  (void)_alloc;
    }



   typedef float _t_type;
  _t_type t;

   typedef float _linearVel_type;
  _linearVel_type linearVel;

   typedef float _angularVel_type;
  _angularVel_type angularVel;

   typedef float _dx_type;
  _dx_type dx;

   typedef float _dy_type;
  _dy_type dy;

   typedef float _dtheta_type;
  _dtheta_type dtheta;




  typedef boost::shared_ptr< ::delbono_kobra::OdomInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delbono_kobra::OdomInfo_<ContainerAllocator> const> ConstPtr;

}; // struct OdomInfo_

typedef ::delbono_kobra::OdomInfo_<std::allocator<void> > OdomInfo;

typedef boost::shared_ptr< ::delbono_kobra::OdomInfo > OdomInfoPtr;
typedef boost::shared_ptr< ::delbono_kobra::OdomInfo const> OdomInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delbono_kobra::OdomInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delbono_kobra::OdomInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace delbono_kobra

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'delbono_kobra': ['/home/alex/delbono_catkin_ws/src/delbono_kobra/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::delbono_kobra::OdomInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delbono_kobra::OdomInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delbono_kobra::OdomInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delbono_kobra::OdomInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delbono_kobra::OdomInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delbono_kobra::OdomInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delbono_kobra::OdomInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9844e4d0505bb71cef8082d5d9d1d1dc";
  }

  static const char* value(const ::delbono_kobra::OdomInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9844e4d0505bb71cULL;
  static const uint64_t static_value2 = 0xef8082d5d9d1d1dcULL;
};

template<class ContainerAllocator>
struct DataType< ::delbono_kobra::OdomInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delbono_kobra/OdomInfo";
  }

  static const char* value(const ::delbono_kobra::OdomInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delbono_kobra::OdomInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 t\n\
float32 linearVel\n\
float32 angularVel\n\
float32 dx\n\
float32 dy\n\
float32 dtheta\n\
";
  }

  static const char* value(const ::delbono_kobra::OdomInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delbono_kobra::OdomInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.t);
      stream.next(m.linearVel);
      stream.next(m.angularVel);
      stream.next(m.dx);
      stream.next(m.dy);
      stream.next(m.dtheta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct OdomInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delbono_kobra::OdomInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delbono_kobra::OdomInfo_<ContainerAllocator>& v)
  {
    s << indent << "t: ";
    Printer<float>::stream(s, indent + "  ", v.t);
    s << indent << "linearVel: ";
    Printer<float>::stream(s, indent + "  ", v.linearVel);
    s << indent << "angularVel: ";
    Printer<float>::stream(s, indent + "  ", v.angularVel);
    s << indent << "dx: ";
    Printer<float>::stream(s, indent + "  ", v.dx);
    s << indent << "dy: ";
    Printer<float>::stream(s, indent + "  ", v.dy);
    s << indent << "dtheta: ";
    Printer<float>::stream(s, indent + "  ", v.dtheta);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELBONO_KOBRA_MESSAGE_ODOMINFO_H
