/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSString, SATimestamp, NSMutableDictionary;

@interface SAStack : NSObject {

	BOOL _omit;
	BOOL _isMainThread;
	BOOL _isTargetThread;
	BOOL _isIdleWorkQueue;
	BOOL _threadNameChanges;
	BOOL _isProcessorIdleThread;
	BOOL _isGlobalForcedIdleThread;
	int _minPriority;
	int _maxPriority;
	int _minBasePriority;
	int _maxBasePriority;
	unsigned long long _count;
	NSMutableArray* _dispatchQueues;
	NSMutableArray* _threadIds;
	NSString* _threadName;
	unsigned long long _firstSampleIndex;
	unsigned long long _lastSampleIndex;
	SATimestamp* _timeWhenFirstAttemptedToSample;
	unsigned long long _cpuTimeNs;
	unsigned long long _cpuInstructions;
	unsigned long long _cpuCycles;
	NSMutableArray* _rootFrames;
	NSMutableDictionary* _binaryImagesHitByTask;

}
@end

