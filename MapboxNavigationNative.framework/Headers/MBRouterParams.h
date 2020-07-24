// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBTileEndpointConfiguration;

NS_SWIFT_NAME(RouterParams)
@interface MBRouterParams : NSObject

- (nonnull instancetype)initWithTilesPath:(nonnull NSString *)tilesPath
                        inMemoryTileCache:(nullable NSNumber *)inMemoryTileCache
                  mapMatchingSpatialCache:(nullable NSNumber *)mapMatchingSpatialCache
                             threadsCount:(nullable NSNumber *)threadsCount
                           endpointConfig:(nullable MBTileEndpointConfiguration *)endpointConfig;

@property (nonatomic, readonly, nonnull, copy) NSString *tilesPath;
@property (nonatomic, readonly, nullable) NSNumber *inMemoryTileCache;
@property (nonatomic, readonly, nullable) NSNumber *mapMatchingSpatialCache;
@property (nonatomic, readonly, nullable) NSNumber *threadsCount;
@property (nonatomic, readonly, nullable) MBTileEndpointConfiguration *endpointConfig;

@end
