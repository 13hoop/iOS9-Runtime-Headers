/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class CMOdometerProxy;

@interface CMOdometer : NSObject  {
    CMOdometerProxy *_odometerProxy;
}

@property(readonly) CMOdometerProxy * odometerProxy;

+ (bool)isOdometerAvailableForActivity:(long long)arg1;

- (void)stopOdometerUpdates;
- (void)startOdometerUpdatesForActivity:(long long)arg1 withHandler:(id)arg2;
- (id)odometerProxy;
- (id)init;
- (void)dealloc;

@end