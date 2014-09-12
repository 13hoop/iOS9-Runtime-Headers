/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString, NSDateFormatter;

@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser <AFSpeakableNamespaceProvider> {
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    bool_useSpeechMode;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)_shouldAutomaticallyProvideFunctions;

- (id)_callFunction:(id)arg1 withArguments:(id)arg2;
- (id)_lowercaseString:(id)arg1;
- (id)_deviceModel;
- (id)_tempInWeatherUnits:(id)arg1;
- (id)_currentWeekday:(id)arg1;
- (id)_currentLongDate:(id)arg1;
- (id)_currentShortDate:(id)arg1;
- (id)_currentTime:(id)arg1;
- (id)_dateFormattedWithFormatter:(id)arg1 arguments:(id)arg2;
- (id)stringForExpression:(id)arg1;
- (void)useSpeechMode:(bool)arg1;
- (id)initWithLocale:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end