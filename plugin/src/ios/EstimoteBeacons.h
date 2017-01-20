#import <Cordova/CDV.h>

#import "BeaconID.h"

@interface EstimoteBeacons : CDVPlugin

- (EstimoteBeacons*) pluginInitialize;
- (void) onReset;

@end
