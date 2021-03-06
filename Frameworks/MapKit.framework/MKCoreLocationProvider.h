/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MKLocationProvider> {
    BOOL  _alternate;
    NSLock * _authorizationLock;
    id /* block */  _authorizationRequestBlock;
    int  _authorizationStatus;
    CLLocationManager * _clLocationManager;
    <MKLocationProviderDelegate> * _delegate;
    NSBundle * _effectiveBundle;
    NSString * _effectiveBundleIdentifier;
    BOOL  _hasQueriedAuthorization;
    BOOL  _locationServicesPreferencesDialogEnabled;
    BOOL  _waitingForAuthorization;
}

@property (nonatomic, readonly) CLLocationManager *_clLocationManager;
@property (nonatomic) int activityType;
@property (nonatomic, copy) id /* block */ authorizationRequestBlock;
@property (nonatomic, readonly) int authorizationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKLocationProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (nonatomic, retain) NSBundle *effectiveBundle;
@property (nonatomic, copy) NSString *effectiveBundleIdentifier;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (readonly) unsigned int hash;
@property (nonatomic) int headingOrientation;
@property (nonatomic, readonly) BOOL isSimulation;
@property (nonatomic, readonly) BOOL isTracePlayer;
@property (getter=isLocationServicesPreferencesDialogEnabled, nonatomic) BOOL locationServicesPreferencesDialogEnabled;
@property (nonatomic) BOOL matchInfoEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeScale;
@property (nonatomic, readonly) BOOL usesCLMapCorrection;

- (void).cxx_destruct;
- (id)_clLocationManager;
- (void)_createCLLocationManager;
- (void)_resetForNewEffectiveBundle;
- (void)_updateAuthorizationStatus;
- (int)activityType;
- (id /* block */)authorizationRequestBlock;
- (int)authorizationStatus;
- (void)dealloc;
- (id)delegate;
- (double)desiredAccuracy;
- (void)dismissHeadingCalibrationDisplay;
- (double)distanceFilter;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (int)headingOrientation;
- (id)init;
- (BOOL)isLocationServicesPreferencesDialogEnabled;
- (BOOL)isSimulation;
- (BOOL)isTracePlayer;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (BOOL)matchInfoEnabled;
- (void)requestWhenInUseAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)setActivityType:(int)arg1;
- (void)setAuthorizationRequestBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
- (void)setMatchInfoEnabled:(BOOL)arg1;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (double)timeScale;
- (BOOL)usesCLMapCorrection;

@end
