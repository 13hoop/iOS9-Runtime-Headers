/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDViewportInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int mapMode : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
    }  _has;
    int  _mapMode;
    GEOMapRegion * _mapRegion;
    unsigned int  _timeSinceMapViewportChanged;
}

@property (nonatomic) BOOL hasMapMode;
@property (nonatomic, readonly) BOOL hasMapRegion;
@property (nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property (nonatomic) int mapMode;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic) unsigned int timeSinceMapViewportChanged;

+ (id)viewportInfoForTraits:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMapMode;
- (BOOL)hasMapRegion;
- (BOOL)hasTimeSinceMapViewportChanged;
- (unsigned int)hash;
- (id)initWithTraits:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)mapMode;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasMapMode:(BOOL)arg1;
- (void)setHasTimeSinceMapViewportChanged:(BOOL)arg1;
- (void)setMapMode:(int)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setTimeSinceMapViewportChanged:(unsigned int)arg1;
- (unsigned int)timeSinceMapViewportChanged;
- (void)writeTo:(id)arg1;

@end
