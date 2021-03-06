/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSURLBagContext : NSObject <NSCopying, SSXPCCoding> {
    int  _allowedRetryCount;
    BOOL  _allowsBootstrapCellularData;
    BOOL  _allowsExpiredBags;
    int  _bagType;
    NSMutableDictionary * _httpHeaders;
    BOOL  _ignoresCaches;
    NSNumber * _userIdentifier;
    BOOL  _usesCachedBagsOnly;
}

@property (nonatomic, copy) NSDictionary *allHTTPHeaders;
@property (nonatomic) int allowedRetryCount;
@property (nonatomic) BOOL allowsBootstrapCellularData;
@property (nonatomic) BOOL allowsExpiredBags;
@property (nonatomic) int bagType;
@property (nonatomic, readonly) NSString *cacheKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL ignoresCaches;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *userIdentifier;
@property (nonatomic) BOOL usesCachedBagsOnly;

+ (id)contextWithBagType:(int)arg1;

- (id)allHTTPHeaders;
- (int)allowedRetryCount;
- (BOOL)allowsBootstrapCellularData;
- (BOOL)allowsExpiredBags;
- (int)bagType;
- (id)cacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (BOOL)ignoresCaches;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setAllHTTPHeaders:(id)arg1;
- (void)setAllowedRetryCount:(int)arg1;
- (void)setAllowsBootstrapCellularData:(BOOL)arg1;
- (void)setAllowsExpiredBags:(BOOL)arg1;
- (void)setBagType:(int)arg1;
- (void)setIgnoresCaches:(BOOL)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUsesCachedBagsOnly:(BOOL)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)userIdentifier;
- (BOOL)usesCachedBagsOnly;
- (id)valueForHTTPHeaderField:(id)arg1;

@end
