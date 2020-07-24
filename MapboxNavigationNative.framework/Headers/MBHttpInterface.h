// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBHttpResponse;

@protocol MBHttpInterface
- (nonnull MBHttpResponse *)getForUrl:(nonnull NSString *)url;
- (BOOL)isGzipped;
@end
