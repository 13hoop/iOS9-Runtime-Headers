/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNActivityAlert : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {
    NSString * _sound;
    NSDictionary * _userInfo;
    NSString * _vibration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *sound;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, copy) NSString *vibration;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSound:(id)arg1 vibration:(id)arg2;
- (id)initWithSound:(id)arg1 vibration:(id)arg2 userInfo:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid:(id*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setSound:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVibration:(id)arg1;
- (id)sound;
- (id)userInfo;
- (id)vibration;

@end
