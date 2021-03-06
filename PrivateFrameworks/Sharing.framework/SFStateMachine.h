/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFStateMachine : NSObject {
    NSString * _currentState;
    <SFStateMachineDelegate> * _delegate;
    int  _lock;
    BOOL  _shouldLogStateTransitions;
    NSDictionary * _validTransitions;
}

@property (copy) NSString *currentState;
@property <SFStateMachineDelegate> *delegate;
@property (nonatomic) BOOL shouldLogStateTransitions;
@property (retain) NSDictionary *validTransitions;

- (void).cxx_destruct;
- (id)_missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;
- (BOOL)_setCurrentState:(id)arg1;
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;
- (BOOL)applyState:(id)arg1;
- (id)currentState;
- (id)delegate;
- (id)init;
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (void)setCurrentState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldLogStateTransitions:(BOOL)arg1;
- (void)setValidTransitions:(id)arg1;
- (BOOL)shouldLogStateTransitions;
- (id)target;
- (id)validTransitions;

@end
