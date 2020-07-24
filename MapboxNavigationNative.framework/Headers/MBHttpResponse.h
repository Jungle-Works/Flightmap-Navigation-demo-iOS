// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import "MBHttpCode.h"

NS_SWIFT_NAME(HttpResponse)
@interface MBHttpResponse : NSObject

- (nonnull instancetype)initWithBytes:(nonnull NSData *)bytes
                                 code:(MBHttpCode)code;

@property (nonatomic, readonly, nonnull) NSData *bytes;
@property (nonatomic, readonly) MBHttpCode code;

@end
