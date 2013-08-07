/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
 */

@class NSString, NSMutableDictionary;

@interface IDSPublicKeyCacheEntry : NSObject  {
    NSString *_fromURI;
    NSString *_forURI;
    NSString *_forService;
    NSMutableDictionary *_map;
}

@property(copy) NSString * forService;
@property(copy) NSString * fromURI;
@property(copy) NSString * forURI;
@property(retain) NSMutableDictionary * map;


- (void)setMap:(id)arg1;
- (void)setForService:(id)arg1;
- (id)forService;
- (void)setForURI:(id)arg1;
- (id)forURI;
- (void)setFromURI:(id)arg1;
- (id)fromURI;
- (id)map;
- (void)dealloc;

@end