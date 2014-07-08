/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, CKRecordZoneID, NSMutableDictionary;

@interface CKDModifySubscriptionsURLRequest : CKDURLRequest  {
    CKRecordZoneID *_zoneID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _subscriptionModifiedBlock;

    NSArray *_subscriptionsToSave;
    NSArray *_subscriptionIDsToDelete;
    NSMutableDictionary *_subscriptionIDByRequestID;
}

@property(copy) CKRecordZoneID * zoneID;
@property(copy) id subscriptionModifiedBlock;
@property(retain) NSArray * subscriptionsToSave;
@property(retain) NSArray * subscriptionIDsToDelete;
@property(retain) NSMutableDictionary * subscriptionIDByRequestID;


- (void)setSubscriptionIDByRequestID:(id)arg1;
- (id)subscriptionIDByRequestID;
- (id)subscriptionModifiedBlock;
- (void)setSubscriptionModifiedBlock:(id)arg1;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (void)setSubscriptionIDsToDelete:(id)arg1;
- (id)subscriptionIDsToDelete;
- (void)setSubscriptionsToSave:(id)arg1;
- (id)subscriptionsToSave;
- (id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2;
- (void)setZoneID:(id)arg1;
- (id)zoneID;
- (int)operationType;
- (void).cxx_destruct;

@end