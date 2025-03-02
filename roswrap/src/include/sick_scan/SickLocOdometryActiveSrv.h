#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocOdometryActiveSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCODOMETRYACTIVESRV_H
#define SICK_SCAN_MESSAGE_SICKLOCODOMETRYACTIVESRV_H

#include <ros/service_traits.h>


#include <sick_scan/SickLocOdometryActiveSrvRequest.h>
#include <sick_scan/SickLocOdometryActiveSrvResponse.h>


namespace sick_scan
{

struct SickLocOdometryActiveSrv
{

typedef SickLocOdometryActiveSrvRequest Request;
typedef SickLocOdometryActiveSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocOdometryActiveSrv
} // namespace sick_scan


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan::SickLocOdometryActiveSrv > {
  static const char* value()
  {
    return "9bb3f90ef7a4dde50a9193067d4298d5";
  }

  static const char* value(const ::sick_scan::SickLocOdometryActiveSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan::SickLocOdometryActiveSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocOdometryActiveSrv";
  }

  static const char* value(const ::sick_scan::SickLocOdometryActiveSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan::SickLocOdometryActiveSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan::SickLocOdometryActiveSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocOdometryActiveSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocOdometryActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocOdometryActiveSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocOdometryActiveSrvRequest> should match
// service_traits::DataType< ::sick_scan::SickLocOdometryActiveSrv >
template<>
struct DataType< ::sick_scan::SickLocOdometryActiveSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocOdometryActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocOdometryActiveSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan::SickLocOdometryActiveSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan::SickLocOdometryActiveSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocOdometryActiveSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocOdometryActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocOdometryActiveSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocOdometryActiveSrvResponse> should match
// service_traits::DataType< ::sick_scan::SickLocOdometryActiveSrv >
template<>
struct DataType< ::sick_scan::SickLocOdometryActiveSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocOdometryActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocOdometryActiveSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCODOMETRYACTIVESRV_H
