// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBAxes3D;

NS_SWIFT_NAME(SensorData)
@interface MBSensorData : NSObject

- (nonnull instancetype)initWithTrueHeading:(nullable NSNumber *)trueHeading
                         geomagneticHeading:(nullable NSNumber *)geomagneticHeading
                                       time:(nonnull NSDate *)time
                               orientations:(nullable MBAxes3D *)orientations
                                    heading:(nullable NSNumber *)heading;

@property (nonatomic, readonly, nullable) NSNumber *trueHeading;
@property (nonatomic, readonly, nullable) NSNumber *geomagneticHeading;
@property (nonatomic, readonly, nonnull) NSDate *time;
@property (nonatomic, readonly, nullable) MBAxes3D *orientations;
@property (nonatomic, readonly, nullable) NSNumber *heading;

@end
