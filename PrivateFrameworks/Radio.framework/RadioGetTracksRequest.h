/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetTracksRequest : RadioRequest {
    NSNumber * _accountUniqueIdentifier;
    NSDictionary * _additionalRequestParameters;
    unsigned long long  _globalVersion;
    NSData * _heartbeatTokenData;
    BOOL  _includeCleanTracksOnly;
    unsigned int  _numberOfTracks;
    NSArray * _playActivityFeedEvents;
    RadioPlayEventCollection * _playEventCollection;
    RadioPlaybackContext * _playbackContext;
    SSVPlaybackLease * _playbackLease;
    int  _reasonType;
    SSURLConnectionRequest * _request;
    BOOL  _shouldIncludeAsset;
    BOOL  _shouldIncludeStationInResponse;
    BOOL  _skipPromptForSeamlessPlayback;
    NSString * _stationHash;
    long long  _stationID;
    RadioStationMatchContext * _stationMatchContext;
    NSString * _stationStringID;
}

@property (nonatomic, readonly, copy) NSNumber *accountUniqueIdentifier;
@property (nonatomic, copy) NSDictionary *additionalRequestParameters;
@property (nonatomic, copy) NSData *heartbeatTokenData;
@property (nonatomic) BOOL includeCleanTracksOnly;
@property (nonatomic) unsigned int numberOfTracks;
@property (nonatomic, copy) NSArray *playActivityFeedEvents;
@property (nonatomic, copy) RadioPlayEventCollection *playEventCollection;
@property (nonatomic, copy) RadioPlaybackContext *playbackContext;
@property (nonatomic, retain) SSVPlaybackLease *playbackLease;
@property (nonatomic) int reasonType;
@property (nonatomic) BOOL shouldIncludeAsset;
@property (nonatomic) BOOL shouldIncludeStationInResponse;
@property (nonatomic) BOOL skipPromptForSeamlessPlayback;
@property (nonatomic, retain) RadioStationMatchContext *stationMatchContext;

- (void).cxx_destruct;
- (id)_playbackContextForStation:(id)arg1;
- (id)accountUniqueIdentifier;
- (id)additionalRequestParameters;
- (void)cancel;
- (id)heartbeatTokenData;
- (BOOL)includeCleanTracksOnly;
- (id)init;
- (id)initWithGlobalVersion:(unsigned long long)arg1;
- (id)initWithStation:(id)arg1 globalVersion:(unsigned long long)arg2;
- (id)initWithStationStringID:(id)arg1 globalVersion:(unsigned long long)arg2;
- (unsigned int)numberOfTracks;
- (id)playActivityFeedEvents;
- (id)playEventCollection;
- (id)playbackContext;
- (id)playbackLease;
- (int)reasonType;
- (void)setAdditionalRequestParameters:(id)arg1;
- (void)setHeartbeatTokenData:(id)arg1;
- (void)setIncludeCleanTracksOnly:(BOOL)arg1;
- (void)setNumberOfTracks:(unsigned int)arg1;
- (void)setPlayActivityFeedEvents:(id)arg1;
- (void)setPlayEventCollection:(id)arg1;
- (void)setPlaybackContext:(id)arg1;
- (void)setPlaybackLease:(id)arg1;
- (void)setReasonType:(int)arg1;
- (void)setShouldIncludeAsset:(BOOL)arg1;
- (void)setShouldIncludeStationInResponse:(BOOL)arg1;
- (void)setSkipPromptForSeamlessPlayback:(BOOL)arg1;
- (void)setStationMatchContext:(id)arg1;
- (BOOL)shouldIncludeAsset;
- (BOOL)shouldIncludeStationInResponse;
- (BOOL)skipPromptForSeamlessPlayback;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (id)stationMatchContext;

@end
