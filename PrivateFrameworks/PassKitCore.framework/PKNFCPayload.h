/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKNFCPayload : NSObject <NSCopying, NSSecureCoding> {
    NSData * _encryptionPublicKeyData;
    NSString * _message;
    BOOL  _requiresCertificate;
}

@property (nonatomic, copy) NSData *encryptionPublicKeyData;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) BOOL requiresCertificate;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionPublicKeyData;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNFCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPKNFCPayload:(id)arg1;
- (id)message;
- (BOOL)requiresCertificate;
- (void)setEncryptionPublicKeyData:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setRequiresCertificate:(BOOL)arg1;

@end
