#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.1.2 (swiftlang-1100.0.278 clang-1100.0.33.9)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import CoreLocation;
@import Foundation;
@import MapboxDirections;
@import MapboxMobileEvents;
@import MapboxNavigationNative;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MapboxCoreNavigation",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif









@class NSCoder;
@class NSAttributedString;

/// A formatter that provides localized representations of distance units and measurements.
/// This class is limited to <code>UnitLength</code> and its behavior is more specific to distances than <code>MeasurementFormatter</code>. By default, the class automatically localizes and rounds the measurement using <code>Measurement.localized(into:)</code> and <code>Locale.nationalizedCurrent</code>. Measurements can be formatted into either strings or attributed strings.
SWIFT_CLASS("_TtC20MapboxCoreNavigation17DistanceFormatter")
@interface DistanceFormatter : NSFormatter <NSSecureCoding>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL supportsSecureCoding;)
+ (BOOL)supportsSecureCoding SWIFT_WARN_UNUSED_RESULT;
+ (void)setSupportsSecureCoding:(BOOL)value;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)decoder OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nullable)stringForObjectValue:(id _Nullable)obj SWIFT_WARN_UNUSED_RESULT;
- (NSAttributedString * _Nullable)attributedStringForObjectValue:(id _Nonnull)obj withDefaultAttributes:(NSDictionary<NSAttributedStringKey, id> * _Nullable)attrs SWIFT_WARN_UNUSED_RESULT;
@end



@class CLLocationManager;
@class CLHeading;

SWIFT_CLASS("_TtC20MapboxCoreNavigation21LegacyRouteController") SWIFT_DEPRECATED_MSG("", "_TtC20MapboxCoreNavigation15RouteController")
@interface LegacyRouteController : NSObject <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateHeading:(CLHeading * _Nonnull)newHeading;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




/// A concrete implementation of the <code>NavigationService</code> protocol.
/// <code>NavigationViewController</code> comes with a <code>MapboxNavigationService</code> by default. You may override it to customize the <code>Directions</code> service or simulation mode. After creating the navigation service, pass it into <code>NavigationOptions(styles:navigationService:voiceController:topBanner:bottomBanner:)</code>, then pass that object into <code>NavigationViewController(for:options:)</code>.
/// If you use a navigation service by itself, outside of <code>NavigationViewController</code>, call <code>start()</code> when the user is ready to begin navigating along the route.
SWIFT_CLASS("_TtC20MapboxCoreNavigation23MapboxNavigationService")
@interface MapboxNavigationService : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface MapboxNavigationService (SWIFT_EXTENSION(MapboxCoreNavigation)) <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateHeading:(CLHeading * _Nonnull)newHeading;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
@end








/// A <code>NavigationDirections</code> object provides you with optimal directions between different locations, or waypoints. The directions object passes your request to a built-in routing engine and returns the requested information to a closure (block) that you provide. A directions object can handle multiple simultaneous requests. A <code>RouteOptions</code> object specifies criteria for the results, such as intermediate waypoints, a mode of transportation, or the level of detail to be returned. In addition to <code>Directions</code>, <code>NavigationDirections</code> provides support for offline routing.
/// Each result produced by the directions object is stored in a <code>Route</code> object. Depending on the <code>RouteOptions</code> object you provide, each route may include detailed information suitable for turn-by-turn directions, or it may include only high-level information such as the distance, estimated travel time, and name of each leg of the trip. The waypoints that form the request may be conflated with nearby locations, as appropriate; the resulting waypoints are provided to the closure.
SWIFT_CLASS("_TtC20MapboxCoreNavigation20NavigationDirections")
@interface NavigationDirections : Directions
@end


/// <code>NavigationLocationManager</code> is the base location manager which handles permissions and background modes.
SWIFT_CLASS("_TtC20MapboxCoreNavigation25NavigationLocationManager")
@interface NavigationLocationManager : CLLocationManager
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end






/// <code>ReplayLocationManager</code> replays an array of locations exactly as they were
/// recorded with the single exception of the location’s timestamp which will be
/// adjusted by interval between locations.
SWIFT_CLASS("_TtC20MapboxCoreNavigation21ReplayLocationManager")
@interface ReplayLocationManager : NavigationLocationManager
@property (nonatomic, strong) CLLocation * _Nullable location;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// A <code>RouteController</code> tracks the user’s progress along a route, posting notifications as the user reaches significant points along the route. On every location update, the route controller evaluates the user’s location, determining whether the user remains on the route. If not, the route controller calculates a new route.
/// <code>RouteController</code> is responsible for the core navigation logic whereas
/// <code>NavigationViewController</code> is responsible for displaying a default drop-in navigation UI.
SWIFT_CLASS("_TtC20MapboxCoreNavigation15RouteController")
@interface RouteController : NSObject
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end






@interface RouteController (SWIFT_EXTENSION(MapboxCoreNavigation)) <CLLocationManagerDelegate>
@end


/// The <code>SimulatedLocationManager</code> class simulates location updates along a given route.
/// The route will be replaced upon a <code>RouteControllerDidReroute</code> notification.
SWIFT_CLASS("_TtC20MapboxCoreNavigation24SimulatedLocationManager")
@interface SimulatedLocationManager : NavigationLocationManager
@property (nonatomic, strong) CLLocation * _Nullable location;
- (id _Nonnull)copy SWIFT_WARN_UNUSED_RESULT;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end







#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.1.2 (swiftlang-1100.0.278 clang-1100.0.33.9)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import CoreLocation;
@import Foundation;
@import MapboxDirections;
@import MapboxMobileEvents;
@import MapboxNavigationNative;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MapboxCoreNavigation",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif









@class NSCoder;
@class NSAttributedString;

/// A formatter that provides localized representations of distance units and measurements.
/// This class is limited to <code>UnitLength</code> and its behavior is more specific to distances than <code>MeasurementFormatter</code>. By default, the class automatically localizes and rounds the measurement using <code>Measurement.localized(into:)</code> and <code>Locale.nationalizedCurrent</code>. Measurements can be formatted into either strings or attributed strings.
SWIFT_CLASS("_TtC20MapboxCoreNavigation17DistanceFormatter")
@interface DistanceFormatter : NSFormatter <NSSecureCoding>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL supportsSecureCoding;)
+ (BOOL)supportsSecureCoding SWIFT_WARN_UNUSED_RESULT;
+ (void)setSupportsSecureCoding:(BOOL)value;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)decoder OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nullable)stringForObjectValue:(id _Nullable)obj SWIFT_WARN_UNUSED_RESULT;
- (NSAttributedString * _Nullable)attributedStringForObjectValue:(id _Nonnull)obj withDefaultAttributes:(NSDictionary<NSAttributedStringKey, id> * _Nullable)attrs SWIFT_WARN_UNUSED_RESULT;
@end



@class CLLocationManager;
@class CLHeading;

SWIFT_CLASS("_TtC20MapboxCoreNavigation21LegacyRouteController") SWIFT_DEPRECATED_MSG("", "_TtC20MapboxCoreNavigation15RouteController")
@interface LegacyRouteController : NSObject <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateHeading:(CLHeading * _Nonnull)newHeading;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




/// A concrete implementation of the <code>NavigationService</code> protocol.
/// <code>NavigationViewController</code> comes with a <code>MapboxNavigationService</code> by default. You may override it to customize the <code>Directions</code> service or simulation mode. After creating the navigation service, pass it into <code>NavigationOptions(styles:navigationService:voiceController:topBanner:bottomBanner:)</code>, then pass that object into <code>NavigationViewController(for:options:)</code>.
/// If you use a navigation service by itself, outside of <code>NavigationViewController</code>, call <code>start()</code> when the user is ready to begin navigating along the route.
SWIFT_CLASS("_TtC20MapboxCoreNavigation23MapboxNavigationService")
@interface MapboxNavigationService : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface MapboxNavigationService (SWIFT_EXTENSION(MapboxCoreNavigation)) <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateHeading:(CLHeading * _Nonnull)newHeading;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
@end








/// A <code>NavigationDirections</code> object provides you with optimal directions between different locations, or waypoints. The directions object passes your request to a built-in routing engine and returns the requested information to a closure (block) that you provide. A directions object can handle multiple simultaneous requests. A <code>RouteOptions</code> object specifies criteria for the results, such as intermediate waypoints, a mode of transportation, or the level of detail to be returned. In addition to <code>Directions</code>, <code>NavigationDirections</code> provides support for offline routing.
/// Each result produced by the directions object is stored in a <code>Route</code> object. Depending on the <code>RouteOptions</code> object you provide, each route may include detailed information suitable for turn-by-turn directions, or it may include only high-level information such as the distance, estimated travel time, and name of each leg of the trip. The waypoints that form the request may be conflated with nearby locations, as appropriate; the resulting waypoints are provided to the closure.
SWIFT_CLASS("_TtC20MapboxCoreNavigation20NavigationDirections")
@interface NavigationDirections : Directions
@end


/// <code>NavigationLocationManager</code> is the base location manager which handles permissions and background modes.
SWIFT_CLASS("_TtC20MapboxCoreNavigation25NavigationLocationManager")
@interface NavigationLocationManager : CLLocationManager
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end






/// <code>ReplayLocationManager</code> replays an array of locations exactly as they were
/// recorded with the single exception of the location’s timestamp which will be
/// adjusted by interval between locations.
SWIFT_CLASS("_TtC20MapboxCoreNavigation21ReplayLocationManager")
@interface ReplayLocationManager : NavigationLocationManager
@property (nonatomic, strong) CLLocation * _Nullable location;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// A <code>RouteController</code> tracks the user’s progress along a route, posting notifications as the user reaches significant points along the route. On every location update, the route controller evaluates the user’s location, determining whether the user remains on the route. If not, the route controller calculates a new route.
/// <code>RouteController</code> is responsible for the core navigation logic whereas
/// <code>NavigationViewController</code> is responsible for displaying a default drop-in navigation UI.
SWIFT_CLASS("_TtC20MapboxCoreNavigation15RouteController")
@interface RouteController : NSObject
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end






@interface RouteController (SWIFT_EXTENSION(MapboxCoreNavigation)) <CLLocationManagerDelegate>
@end


/// The <code>SimulatedLocationManager</code> class simulates location updates along a given route.
/// The route will be replaced upon a <code>RouteControllerDidReroute</code> notification.
SWIFT_CLASS("_TtC20MapboxCoreNavigation24SimulatedLocationManager")
@interface SimulatedLocationManager : NavigationLocationManager
@property (nonatomic, strong) CLLocation * _Nullable location;
- (id _Nonnull)copy SWIFT_WARN_UNUSED_RESULT;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end







#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#endif
