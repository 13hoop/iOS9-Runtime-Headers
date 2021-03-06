/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFValueAddedServiceCard : NSObject <NSSecureCoding> {
    NSData * _data;
    NSData * _identifier;
    NSData * _token;
    int  _type;
}

@property (retain) NSData *data;
@property (nonatomic, retain) NSData *identifier;
@property (retain) NSData *token;
@property int type;

+ (BOOL)supportsSecureCoding;

- (id)asDictionary;
- (id)data;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setType:(int)arg1;
- (id)token;
- (int)type;

@end
