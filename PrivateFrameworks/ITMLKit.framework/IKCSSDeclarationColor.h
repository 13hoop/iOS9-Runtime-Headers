/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCSSDeclarationColor : IKCSSDeclaration {
    IKColor * _color;
    int  _sourceType;
}

@property (nonatomic, retain) IKColor *color;
@property int sourceType;

+ (id)_stringForColor:(id)arg1 sourceType:(int)arg2;
+ (id)colorForName:(id)arg1;
+ (void)initColorNames;

- (void).cxx_destruct;
- (id)_keywordKolorFromParseToken:(id)arg1;
- (id)_kolorFromParseObject:(id)arg1 sourceType:(int*)arg2;
- (id)_linearGradientKolorFromParseFunction:(id)arg1;
- (id)color;
- (id)description;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;
- (void)setColor:(id)arg1;
- (void)setSourceType:(int)arg1;
- (int)sourceType;
- (id)stringValue;

@end
