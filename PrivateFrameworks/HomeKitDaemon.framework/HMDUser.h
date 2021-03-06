/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUser : NSObject <NSSecureCoding> {
    HMDHome * _home;
    NSString * _pairingUsername;
    unsigned int  _privilege;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSData * _publicKey;
    NSMutableArray * _relayAccessTokens;
    NSString * _relayIdentifier;
    BOOL  _remoteGateway;
    NSString * _userID;
    NSUUID * _uuid;
}

@property (getter=isCurrentUser, nonatomic, readonly) BOOL currentUser;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly, copy) NSString *pairingUsername;
@property (nonatomic) unsigned int privilege;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly, copy) NSData *publicKey;
@property (nonatomic, copy) NSString *relayIdentifier;
@property (getter=isRemoteGateway, nonatomic) BOOL remoteGateway;
@property (nonatomic, copy) NSString *userID;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic, readonly) NSString *xpcDisplayName;

+ (id)currentUserWithPriviledge:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addRelayAccessToken:(id)arg1;
- (void)configureWithHome:(id)arg1;
- (BOOL)containsRelayAccessToken:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 pairingUsername:(id)arg2 publicKey:(id)arg3 privilege:(unsigned int)arg4;
- (BOOL)isCurrentUser;
- (BOOL)isRemoteGateway;
- (id)lookupDisplayName;
- (BOOL)mergeFromUser:(id)arg1;
- (id)pairingUsername;
- (unsigned int)privilege;
- (id)propertyQueue;
- (id)publicKey;
- (id)relayAccessTokenForAccessory:(id)arg1;
- (id)relayAccessTokens;
- (id)relayIdentifier;
- (void)removeRelayAccessToken:(id)arg1;
- (void)removeRelayAccessTokenForAccessory:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setPrivilege:(unsigned int)arg1;
- (void)setRelayIdentifier:(id)arg1;
- (void)setRemoteGateway:(BOOL)arg1;
- (void)setUserID:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)updatePairingUsername:(id)arg1 publicKey:(id)arg2;
- (id)userCopy;
- (id)userID;
- (id)uuid;
- (id)xpcDisplayName;

@end
