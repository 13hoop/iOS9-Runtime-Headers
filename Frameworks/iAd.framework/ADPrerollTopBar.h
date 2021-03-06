/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrerollTopBar : UIView {
    <ADPrerollTopBarDelegate> * _delegate;
    ADPrerollButton * _doneButton;
    BOOL  _isFullscreen;
    BOOL  _layoutForExpandedSize;
    ADProgressView * _progressView;
    ADPrerollButton * _scaleToFillButton;
    UIStatusBar * _statusBar;
}

@property (nonatomic) <ADPrerollTopBarDelegate> *delegate;
@property (nonatomic, retain) ADPrerollButton *doneButton;
@property (nonatomic) BOOL isFullscreen;
@property (nonatomic) BOOL layoutForExpandedSize;
@property (nonatomic, retain) ADProgressView *progressView;
@property (nonatomic, retain) ADPrerollButton *scaleToFillButton;
@property (nonatomic, retain) UIStatusBar *statusBar;

- (void)_doneButtonTapped:(id)arg1;
- (void)_scaleToFillButtonTapped:(id)arg1;
- (void)_scaleToFitButtonTapped:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)doneButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isFullscreen;
- (BOOL)layoutForExpandedSize;
- (void)layoutSubviews;
- (id)progressView;
- (float)requiredHeight;
- (id)scaleToFillButton;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setElapsedTime:(double)arg1 totalTime:(double)arg2;
- (void)setIsFullscreen:(BOOL)arg1;
- (void)setLayoutForExpandedSize:(BOOL)arg1;
- (void)setProgressView:(id)arg1;
- (void)setScaleToFillButton:(id)arg1;
- (void)setStatusBar:(id)arg1;
- (id)statusBar;

@end
