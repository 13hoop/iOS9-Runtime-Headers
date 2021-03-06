/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessManager : NSObject <FBApplicationProcessDelegate, FBApplicationProcessObserver> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    FBApplicationProcessWatchdogPolicy * _defaultWatchdogPolicy;
    FBApplicationProcess * _foregroundAppProcess;
    NSHashTable * _observers;
    FBApplicationProcess * _preferredForegroundAppProcess;
    NSMapTable * _processesByBundleID;
    NSMapTable * _processesByPID;
    NSObject<OS_dispatch_queue> * _queue;
    FBApplicationProcess * _systemAppProcess;
    BKSProcessAssertion * _systemAppProcessAssertion;
    int  _workspaceLocked;
    int  _workspaceLockedToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) FBApplicationProcess *systemApplicationProcess;

+ (id)sharedInstance;

- (BOOL)_isWorkspaceLocked;
- (void)_queue_addProcess:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_evaluateForegroundEventRouting;
- (void)_queue_notifyObserversUsingBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_queue_processForPID:(int)arg1;
- (id)_queue_processesForBundleIdentifier:(id)arg1;
- (void)_queue_removeProcess:(id)arg1 withBundleID:(id)arg2 pid:(int)arg3;
- (id)_serviceClientAddedWithAuditToken:(struct { unsigned int x1[8]; }*)arg1;
- (id)_serviceClientAddedWithConnection:(id)arg1;
- (id)_serviceClientAddedWithPID:(int)arg1 isUIApp:(BOOL)arg2 isExtension:(BOOL)arg3 bundleID:(id)arg4;
- (void)_setPreferredForegroundApplicationProcess:(id)arg1;
- (id)_systemServiceClientAdded:(id)arg1;
- (void)_updateWorkspaceLockedState;
- (void)addObserver:(id)arg1;
- (id)allApplicationProcesses;
- (id)allProcesses;
- (id)applicationProcessForPID:(int)arg1;
- (void)applicationProcessWillLaunch:(id)arg1;
- (id)applicationProcessesForBundleIdentifier:(id)arg1;
- (id)createApplicationProcessForBundleID:(id)arg1;
- (id)createApplicationProcessForBundleID:(id)arg1 withExecutionContext:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)noteProcess:(id)arg1 didUpdateState:(id)arg2;
- (void)noteProcessDidExit:(id)arg1;
- (BOOL)ping;
- (id)processForPID:(int)arg1;
- (id)processesForBundleIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)systemApplicationProcess;
- (double)watchdogIntervalForProcess:(id)arg1 eventContext:(struct { int x1; id x2; })arg2;

@end
