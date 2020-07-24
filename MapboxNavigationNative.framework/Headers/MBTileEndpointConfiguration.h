// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(TileEndpointConfiguration)
@interface MBTileEndpointConfiguration : NSObject

- (nonnull instancetype)initWithHost:(nonnull NSString *)host
                             version:(nonnull NSString *)version
                               token:(nonnull NSString *)token
                           userAgent:(nonnull NSString *)userAgent
                    navigatorVersion:(nonnull NSString *)navigatorVersion;

@property (nonatomic, readonly, nonnull, copy) NSString *host;
@property (nonatomic, readonly, nonnull, copy) NSString *version;
@property (nonatomic, readonly, nonnull, copy) NSString *token;
@property (nonatomic, readonly, nonnull, copy) NSString *userAgent;
@property (nonatomic, readonly, nonnull, copy) NSString *navigatorVersion;

@end
