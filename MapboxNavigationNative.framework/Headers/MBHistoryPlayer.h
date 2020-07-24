// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import "MBChangeRouteLegCallback.h"
#import "MBConfigureRouterCallback.h"
#import "MBGetRouteCallback.h"
#import "MBGetStatusCallback.h"
#import "MBGetTraceAttributesCallback.h"
#import "MBLocateCallback.h"
#import "MBPushHistoryCallback.h"
#import "MBSetRouteCallback.h"
#import "MBUpdateLocationCallback.h"
#import "MBUpdateSensorDataCallback.h"

@class MBIterationResult;

NS_SWIFT_NAME(HistoryPlayer)
@interface MBHistoryPlayer : NSObject

- (nonnull instancetype)init;
- (void)onUpdateSensorDataForCb:(nonnull MBUpdateSensorDataCallback)cb;
- (void)onUpdateLocationForCb:(nonnull MBUpdateLocationCallback)cb;
- (void)onSetRouteForCb:(nonnull MBSetRouteCallback)cb;
- (void)onGetStatusForCb:(nonnull MBGetStatusCallback)cb;
- (void)onConfigureRouterForCb:(nonnull MBConfigureRouterCallback)cb;
- (void)onChangeRouteLegForCb:(nonnull MBChangeRouteLegCallback)cb;
- (void)onPushHistoryForCb:(nonnull MBPushHistoryCallback)cb;
- (void)onGetTraceAttributesForCb:(nonnull MBGetTraceAttributesCallback)cb;
- (void)onLocateForCb:(nonnull MBLocateCallback)cb;
- (void)onGetRouteForCb:(nonnull MBGetRouteCallback)cb;
- (BOOL)loadForHistory:(nonnull NSString *)history;
- (nonnull MBIterationResult *)next;

@end
