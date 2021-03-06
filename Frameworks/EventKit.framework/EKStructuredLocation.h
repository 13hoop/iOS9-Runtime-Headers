/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKStructuredLocation : EKObject <NSCopying>

@property (nonatomic, retain) NSString *address;
@property (nonatomic, copy) NSString *addressBookEntityID;
@property (nonatomic, retain) CLLocation *geoLocation;
@property (nonatomic, readonly) BOOL hasKnownSpatialData;
@property (nonatomic, readonly) BOOL isStructured;
@property (nonatomic, copy) NSData *mapKitHandle;
@property (nonatomic) double radius;
@property (nonatomic, retain) NSString *routing;
@property (nonatomic, retain) NSString *title;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (id)_stringByStrippingCongtrolCharactersFromString:(id)arg1;
+ (id)locationWithMapItem:(id)arg1;
+ (id)locationWithTitle:(id)arg1;

- (id)_asCalLocation;
- (id)_persistentLocation;
- (id)address;
- (id)addressBookEntityID;
- (id)cacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)geoLocation;
- (id)geoURLString;
- (BOOL)hasKnownSpatialData;
- (id)init;
- (BOOL)isEqualToLocation:(id)arg1;
- (BOOL)isStructured;
- (id)mapKitHandle;
- (double)radius;
- (id)routing;
- (void)setAddress:(id)arg1;
- (void)setAddressBookEntityID:(id)arg1;
- (void)setGeoLocation:(id)arg1;
- (void)setMapKitHandle:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)setRouting:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updatePersistentObject;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (id)humanReadableContactString;

@end
