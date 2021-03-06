/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionXPCManager : NSObject {
    NSXPCConnection * _connection;
    BOOL  _interrupted;
    BOOL  _invalid;
    NSMutableArray * _observers;
}

@property (retain) NSXPCConnection *connection;
@property BOOL interrupted;
@property (getter=isInvalid) BOOL invalid;
@property (retain) NSMutableArray *observers;

+ (id)advertiserClientInterface;
+ (id)advertiserInterface;
+ (id)hotspotClientInterface;
+ (id)hotspotInterface;
+ (void)initialize;
+ (id)scannerClientInterface;
+ (id)scannerInterface;
+ (id)serviceManagerClientInterface;
+ (id)serviceManagerInterface;
+ (id)sharedManager;
+ (id)unlockInterface;
+ (id)xpcManagerInterface;

- (void)activityAdvertiserProxyForClient:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)airdropTransferDataProviderWithCompletionHandler:(id /* block */)arg1;
- (id)connection;
- (void)continuityScannerProxyForClient:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)interrupted;
- (BOOL)isInvalid;
- (void)notifyOfInterruption;
- (void)notifyOfInvalidation;
- (void)notifyOfResume;
- (id)observers;
- (void)registerObserver:(id)arg1;
- (void)remoteHotspotSessionForClient:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)serviceManagerProxyForIdentifier:(id)arg1 client:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setConnection:(id)arg1;
- (void)setInterrupted:(BOOL)arg1;
- (void)setInvalid:(BOOL)arg1;
- (void)setObservers:(id)arg1;
- (void)setupConnection;
- (void)streamsForMessage:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)unlockManagerWithCompletionHandler:(id /* block */)arg1;
- (void)unregisterObserver:(id)arg1;

@end
