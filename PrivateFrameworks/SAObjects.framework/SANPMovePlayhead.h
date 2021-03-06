/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPMovePlayhead : SADomainCommand

@property (nonatomic, copy) NSNumber *playbackPositionInMilliseconds;

+ (id)movePlayhead;
+ (id)movePlayheadWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)playbackPositionInMilliseconds;
- (BOOL)requiresResponse;
- (void)setPlaybackPositionInMilliseconds:(id)arg1;

@end
