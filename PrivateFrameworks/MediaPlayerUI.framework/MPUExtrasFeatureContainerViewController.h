/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasFeatureContainerViewController : UIViewController {
    float  _collectionViewHeight;
    MPUExtrasContext * _context;
    UIView * _menuBarView;
    NSLayoutConstraint * _overlayViewAdjustmentConstraint;
    UIViewController<MPUExtrasVideoPlaybackViewController> * _videoPlaybackViewController;
}

@property (nonatomic) float collectionViewHeight;
@property (nonatomic, readonly) MPUExtrasContext *context;
@property (nonatomic) UIView *menuBarView;
@property (nonatomic, retain) UIViewController *videoPlaybackViewController;

- (void).cxx_destruct;
- (void)_menuBarHeightChange:(id)arg1;
- (float)collectionViewHeight;
- (id)context;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)menuBarView;
- (void)setCollectionViewHeight:(float)arg1;
- (void)setMenuBarView:(id)arg1;
- (void)setVideoPlaybackViewController:(id)arg1;
- (id)videoPlaybackViewController;
- (void)viewDidLoad;

@end
