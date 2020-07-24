// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBFixLocation;

NS_SWIFT_NAME(LocationStatus)
@interface MBLocationStatus : NSObject

- (nonnull instancetype)initWithLocation:(nonnull MBFixLocation *)location
                               predicted:(NSTimeInterval)predicted;

@property (nonatomic, readonly, nonnull) MBFixLocation *location;
@property (nonatomic, readonly) NSTimeInterval predicted;

@end
