// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(IterationResult)
@interface MBIterationResult : NSObject

- (nonnull instancetype)initWithHandled:(BOOL)handled
                                hasNext:(BOOL)hasNext;

@property (nonatomic, readonly, getter=isHandled) BOOL handled;
@property (nonatomic, readonly, getter=isHasNext) BOOL hasNext;

@end
