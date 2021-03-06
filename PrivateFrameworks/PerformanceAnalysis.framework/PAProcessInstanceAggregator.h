/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAProcessInstanceAggregator : PASampleAggregator {
    NSString * _headerNote;
    unsigned long long  _idleWorkQueueFrameAddress;
    unsigned long long  _stackshotFrameAddress;
    unsigned int  _startingTSDSIndex;
    unsigned int  _timestampIndexWhenTransitionedToSamplingAllProcesses;
    unsigned int  _timestampsDisplayOffset;
}

@property (readonly) BOOL hasTargetProcess;
@property (copy) NSString *headerNote;
@property unsigned long long idleWorkQueueFrameAddress;
@property BOOL printHeavyStacks;
@property BOOL printSpinSignatureStack;
@property unsigned long long stackshotFrameAddress;
@property (readonly) unsigned int timestampIndexWhenTransitionedToSamplingAllProcesses;

- (void)dealloc;
- (int)displayTimeIndexForTimestampIndex:(unsigned int)arg1;
- (void)filterToDisplayTimeIndexStart:(unsigned int)arg1 end:(unsigned int)arg2;
- (void)filterToMachTimeRangeStart:(double)arg1 end:(double)arg2;
- (BOOL)hasTargetProcess;
- (id)headerNote;
- (unsigned long long)idleWorkQueueFrameAddress;
- (id)initWithSampleStore:(id)arg1;
- (id)kernelSampleTaskAtTimestampIndex:(unsigned int)arg1;
- (id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned int)arg2;
- (void)printFooterToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)printHeaderToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (BOOL)printHeavyStacks;
- (BOOL)printSpinSignatureStack;
- (unsigned int)sampleIndexForDisplayTimeIndex:(int)arg1;
- (id)sampleTaskWithPid:(int)arg1 atTimestampIndex:(unsigned int)arg2;
- (void)setHeaderNote:(id)arg1;
- (void)setIdleWorkQueueFrameAddress:(unsigned long long)arg1;
- (void)setPrintHeavyStacks:(BOOL)arg1;
- (void)setPrintSpinSignatureStack:(BOOL)arg1;
- (void)setSamples:(id)arg1;
- (void)setStackshotFrameAddress:(unsigned long long)arg1;
- (id)sortedTasks;
- (unsigned long long)stackshotFrameAddress;
- (unsigned int)timestampIndexWhenTransitionedToSamplingAllProcesses;

@end
