/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUSkipLimitView : UIView {
    NSTimer * _hideTimer;
    UILabel * _informationLabel;
    struct { 
        int numberOfAvailableSkips; 
        int skipFrequency; 
        double skipInterval; 
    }  _skipLimit;
    NSDictionary * _textAttributes;
}

@property (nonatomic, readonly) UILabel *label;
@property (nonatomic) int maximumNumberOfLines;
@property (nonatomic) struct { int x1; int x2; double x3; } skipLimit;
@property (nonatomic, copy) NSDictionary *textAttributes;

- (void).cxx_destruct;
- (void)_hideSkipInformationForTimer:(id)arg1;
- (void)_invalidateHideTimer;
- (void)_updateInformationLabel;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 labelClass:(Class)arg2;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (id)label;
- (int)maximumNumberOfLines;
- (void)revealSkipInformationMomentarily;
- (void)setMaximumNumberOfLines:(int)arg1;
- (void)setSkipLimit:(struct { int x1; int x2; double x3; })arg1;
- (void)setTextAttributes:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (struct { int x1; int x2; double x3; })skipLimit;
- (id)textAttributes;
- (id)viewForBaselineLayout;

@end
