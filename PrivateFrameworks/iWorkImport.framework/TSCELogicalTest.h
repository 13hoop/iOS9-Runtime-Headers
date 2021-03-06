/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCELogicalTest : NSObject {
    NSDate * mDate;
    struct TSCEEvaluationContext { id x1; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x2; unsigned short x3; unsigned char x4; void*x5; void*x6; void x7; void*x8; long x9; void*x10; void*x11; void*x12; int x13; out in unsigned short x14; void*x15; void*x16; BOOL x17; void*x18; void*x19; struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_20_1_1; struct TSCEValue {} *x_20_1_2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_2_1; } x_20_1_3; } x20; int x21; } * mEvaluationContext;
    TSCERegexMatcher * mMatcher;
    int  mOperation;
    NSString * mString;
    struct TSCENumberValue { 
        int (**_vptr$TSCEAbstractValue)(); 
        double mDouble; 
        int mBaseUnits[1]; 
        struct TSUFormat { 
            int (**_vptr$TSUFormat)(); 
            int mFormatType; 
            bool mIsImplicitFormat; 
            union { 
                struct { 
                    unsigned int mCurrencyCodeIndex : 16; 
                    unsigned int mDecimalPlaces : 8; 
                    unsigned int mNegativeStyle : 3; 
                    unsigned int mShowThousandsSeparator : 1; 
                    unsigned int mUseAccountingStyle : 1; 
                } mNumberStruct; 
                struct { 
                    unsigned int mFractionAccuracy : 8; 
                } mFractionFormatStruct; 
                struct { 
                    unsigned int mBase : 8; 
                    unsigned int mBasePlaces : 8; 
                    unsigned int mBaseUseMinusSign : 1; 
                } mBaseFormatStruct; 
                struct { 
                    unsigned int mSuppressDateFormat : 1; 
                    unsigned int mSuppressTimeFormat : 1; 
                    NSString *mDateTimeFormat; 
                } mDateFormatStruct; 
                struct { 
                    unsigned int mUseAutomaticUnits : 1; 
                    int mDurationUnitSmallest; 
                    int mDurationUnitLargest; 
                    int mDurationStyle; 
                } mDurationFormatStruct; 
                struct { 
                    NSUUID *mCustomFormatKey; 
                    TSUCustomFormat *mCustomFormat; 
                    unsigned int mLegacyID; 
                    unsigned char mAppliedConditionKey; 
                } mCustomFormatStruct; 
                struct { 
                    double mMinimum; 
                    double mMaximum; 
                    double mIncrement; 
                    int mDisplayFormatType; 
                    unsigned int mOrientation : 2; 
                    unsigned int mPosition : 2; 
                } mControlFormatStruct; 
                struct { 
                    int mInitialValue; 
                    unsigned int mMultipleChoiceListFormatID; 
                    <TSUMultipleChoiceListChoiceProviding> *mData; 
                } mMultipleChoiceListFormatStruct; 
            } mData; 
        } mFormat; 
        BOOL mIsUnitlessZero; 
    }  mValue;
}

+ (id)logicalTestWithCriterion:(struct TSCEValue { unsigned int x1[64]; int x2; })arg1 functionSpec:(id)arg2 evaluationContext:(struct TSCEEvaluationContext { id x1; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x2; unsigned short x3; unsigned char x4; void*x5; void*x6; void x7; void*x8; long x9; void*x10; void*x11; void*x12; int x13; out in unsigned short x14; void*x15; void*x16; BOOL x17; void*x18; void*x19; struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_20_1_1; struct TSCEValue {} *x_20_1_2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_2_1; } x_20_1_3; } x20; int x21; }*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)compare:(struct TSCEValue { unsigned int x1[64]; int x2; })arg1 withContext:(struct TSCEEvaluationContext { id x1; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x2; unsigned short x3; unsigned char x4; void*x5; void*x6; void x7; void*x8; long x9; void*x10; void*x11; void*x12; int x13; out in unsigned short x14; void*x15; void*x16; BOOL x17; void*x18; void*x19; struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_20_1_1; struct TSCEValue {} *x_20_1_2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_2_1; } x_20_1_3; } x20; int x21; }*)arg2;
- (unsigned int)cost;
- (int)criteriaParser:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithCriterion:(struct TSCEValue { unsigned int x1[64]; int x2; })arg1 functionSpec:(id)arg2 evaluationContext:(struct TSCEEvaluationContext { id x1; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x2; unsigned short x3; unsigned char x4; void*x5; void*x6; void x7; void*x8; long x9; void*x10; void*x11; void*x12; int x13; out in unsigned short x14; void*x15; void*x16; BOOL x17; void*x18; void*x19; struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_20_1_1; struct TSCEValue {} *x_20_1_2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_2_1; } x_20_1_3; } x20; int x21; }*)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setRegexMatcher:(id)arg1;
- (void)setString:(id)arg1;

@end
