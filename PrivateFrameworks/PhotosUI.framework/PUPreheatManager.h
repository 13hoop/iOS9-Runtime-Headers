/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class <NSFastEnumeration>, <PLPreheatItemSource>, PUImageManager, NSNumber, NSFetchRequest;

@interface PUPreheatManager : NSObject  {
    BOOL _imageFormatIsTable;
    int _imageFormat;
    NSNumber *_imageFormatKey;
    PUImageManager *_imageManager;
    <PLPreheatItemSource> *_imageTable;
    <NSFastEnumeration> *_previousAssets;
    NSFetchRequest *_fetchRequest;
}

@property int imageFormat;
@property(retain) NSNumber * imageFormatKey;
@property BOOL imageFormatIsTable;
@property(retain) PUImageManager * imageManager;
@property(retain) <PLPreheatItemSource> * imageTable;
@property(retain) <NSFastEnumeration> * previousAssets;
@property(retain) NSFetchRequest * fetchRequest;


- (void)setPreviousAssets:(id)arg1;
- (id)previousAssets;
- (id)imageFormatKey;
- (id)dataForAsset:(id)arg1 width:(int*)arg2 height:(int*)arg3 bytesPerRow:(int*)arg4 dataWidth:(int*)arg5 dataHeight:(int*)arg6 imageDataOffset:(int*)arg7;
- (id)imageManager;
- (id)imageTable;
- (void)_prefetchAssetsForThumbnails:(id)arg1;
- (void)setImageManager:(id)arg1;
- (void)setImageTable:(id)arg1;
- (BOOL)imageFormatIsTable;
- (void)setImageFormatKey:(id)arg1;
- (void)setImageFormat:(int)arg1;
- (void)setImageFormatIsTable:(BOOL)arg1;
- (id)imageForAsset:(id)arg1;
- (void)preheatAssets:(id)arg1 cancelAssets:(id)arg2;
- (void)pu_diffsFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 differenceHandler:(id)arg3;
- (void)cancelAllPreheating;
- (int)imageFormat;
- (void)setFetchRequest:(id)arg1;
- (id)fetchRequest;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFormat:(int)arg1;

@end