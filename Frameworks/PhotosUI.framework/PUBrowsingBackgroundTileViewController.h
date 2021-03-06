/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingBackgroundTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver> {
    _UIContentUnavailableView * __emptyPlaceholderView;
    BOOL  __needsUpdateColor;
    id /* block */  __nextColorUpdateAnimatorBlock;
    UIColor * _backgroundColorOverride;
    BOOL  _shouldDisplayEmptyPlaceholder;
    PUBrowsingViewModel * _viewModel;
}

@property (setter=_setEmptyPlaceholderView:, nonatomic, retain) _UIContentUnavailableView *_emptyPlaceholderView;
@property (setter=_setNeedsUpdateColor:, nonatomic) BOOL _needsUpdateColor;
@property (setter=_setNextColorUpdateAnimatorBlock:, nonatomic, copy) id /* block */ _nextColorUpdateAnimatorBlock;
@property (nonatomic, retain) UIColor *backgroundColorOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL shouldDisplayEmptyPlaceholder;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUBrowsingViewModel *viewModel;

- (void).cxx_destruct;
- (id)_emptyPlaceholderView;
- (void)_invalidateColor;
- (void)_invalidateColorWithAnimatorBlock:(id /* block */)arg1;
- (BOOL)_needsUpdateColor;
- (id /* block */)_nextColorUpdateAnimatorBlock;
- (void)_setEmptyPlaceholderView:(id)arg1;
- (void)_setNeedsUpdateColor:(BOOL)arg1;
- (void)_setNextColorUpdateAnimatorBlock:(id /* block */)arg1;
- (void)_updateColorIfNeeded;
- (void)_updateEmptyPlaceholderAnimated:(BOOL)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (id)backgroundColorOverride;
- (void)loadView;
- (void)setBackgroundColorOverride:(id)arg1;
- (void)setShouldDisplayEmptyPlaceholder:(BOOL)arg1;
- (void)setViewModel:(id)arg1;
- (BOOL)shouldDisplayEmptyPlaceholder;
- (id)viewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
