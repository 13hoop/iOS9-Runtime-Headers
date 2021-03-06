/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassFrontFaceView : PKPassFaceView {
    WLEasyToHitCustomButton * _barcodeButton;
    PKBarcodeStickerView * _barcodeView;
    WLEasyToHitCustomButton * _flipButton;
    UILabel * _logoLabel;
    WLEasyToHitCustomButton * _shareButton;
    BOOL  _showsBarcodeButton;
    BOOL  _showsBarcodeView;
    BOOL  _showsInfo;
    BOOL  _showsShare;
}

@property (nonatomic, readonly) PKBarcodeStickerView *barcodeView;
@property (nonatomic) BOOL showsBarcodeButton;
@property (nonatomic) BOOL showsBarcodeView;
@property (nonatomic) BOOL showsInfo;
@property (nonatomic) BOOL showsShare;

- (void)_barcodeButtonPressed;
- (void)_flipButtonPressed;
- (void)_positionBarcodeView;
- (id)_relevantBuckets;
- (void)_shareButtonPressed;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })barcodeFrame;
- (id)barcodeView;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)createBodyContentViews;
- (void)createHeaderContentViews;
- (void)dealloc;
- (id)init;
- (void)insertContentView:(id)arg1 ofType:(int)arg2;
- (BOOL)isFrontFace;
- (void)layoutSubviews;
- (id)passFaceTemplate;
- (void)prepareForFlip;
- (void)setClipsContent:(BOOL)arg1;
- (void)setShowsBarcodeButton:(BOOL)arg1;
- (void)setShowsBarcodeView:(BOOL)arg1;
- (void)setShowsInfo:(BOOL)arg1;
- (void)setShowsShare:(BOOL)arg1;
- (id)shortFaceTemplate;
- (id)shortScrunchedFaceTemplate;
- (BOOL)showsBarcodeButton;
- (BOOL)showsBarcodeView;
- (BOOL)showsInfo;
- (BOOL)showsShare;
- (id)tallFaceTemplate;
- (void)updateValidity;

@end
