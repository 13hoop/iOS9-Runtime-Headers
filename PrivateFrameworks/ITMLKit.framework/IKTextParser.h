/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKTextParser : NSObject <NSCopying> {
    NSAttributedString * _attributedString;
}

@property (nonatomic, readonly, retain) NSAttributedString *attributedString;
@property (nonatomic, readonly, retain) NSString *string;

+ (id)textWithDOMElement:(id)arg1 usingParseBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_attributedStringFromDomElement:(id)arg1 usingParseBlock:(id /* block */)arg2;
- (id)_stringFromDateElement:(id)arg1 unformattedString:(id)arg2;
- (id)_stringFromDurationElement:(id)arg1 unformattedString:(id)arg2;
- (id)_stringFromNumberElement:(id)arg1 unformattedString:(id)arg2;
- (id)attributedString;
- (id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(int)arg3 style:(id)arg4;
- (id)attributedStringWithFont:(id)arg1 style:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)string;

@end
