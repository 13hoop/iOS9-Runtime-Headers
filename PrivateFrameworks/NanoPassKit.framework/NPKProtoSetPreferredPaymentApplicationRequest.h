/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSetPreferredPaymentApplicationRequest : PBRequest <NSCopying> {
    NSString * _passID;
    NSString * _preferredApplicationAID;
}

@property (nonatomic, readonly) BOOL hasPassID;
@property (nonatomic, readonly) BOOL hasPreferredApplicationAID;
@property (nonatomic, retain) NSString *passID;
@property (nonatomic, retain) NSString *preferredApplicationAID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPassID;
- (BOOL)hasPreferredApplicationAID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passID;
- (id)preferredApplicationAID;
- (BOOL)readFrom:(id)arg1;
- (void)setPassID:(id)arg1;
- (void)setPreferredApplicationAID:(id)arg1;
- (void)writeTo:(id)arg1;

@end