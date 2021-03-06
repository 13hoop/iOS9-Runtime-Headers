/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchZeroKeywordCategorySuggestionParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int requestLocalTimestamp : 1; 
        unsigned int maxNumCategoriesPerEntry : 1; 
    }  _has;
    unsigned int  _maxNumCategoriesPerEntry;
    double  _requestLocalTimestamp;
    GEOLatLng * _significantLocation;
}

@property (nonatomic) BOOL hasMaxNumCategoriesPerEntry;
@property (nonatomic) BOOL hasRequestLocalTimestamp;
@property (nonatomic, readonly) BOOL hasSignificantLocation;
@property (nonatomic) unsigned int maxNumCategoriesPerEntry;
@property (nonatomic) double requestLocalTimestamp;
@property (nonatomic, retain) GEOLatLng *significantLocation;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMaxNumCategoriesPerEntry;
- (BOOL)hasRequestLocalTimestamp;
- (BOOL)hasSignificantLocation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)maxNumCategoriesPerEntry;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (double)requestLocalTimestamp;
- (void)setHasMaxNumCategoriesPerEntry:(BOOL)arg1;
- (void)setHasRequestLocalTimestamp:(BOOL)arg1;
- (void)setMaxNumCategoriesPerEntry:(unsigned int)arg1;
- (void)setRequestLocalTimestamp:(double)arg1;
- (void)setSignificantLocation:(id)arg1;
- (id)significantLocation;
- (void)writeTo:(id)arg1;

@end
