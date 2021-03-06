/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKGameRecentPlayersDataSource : GKBasicCollectionViewDataSource {
    GKGame * _game;
    GKPlayer * _player;
}

@property (nonatomic, retain) GKGame *game;
@property (nonatomic, retain) GKPlayer *player;

- (void)_preloadImagesForItems:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCollectionView:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)game;
- (id)player;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (id)sectionTitle;
- (void)setGame:(id)arg1;
- (void)setPlayer:(id)arg1;

@end
