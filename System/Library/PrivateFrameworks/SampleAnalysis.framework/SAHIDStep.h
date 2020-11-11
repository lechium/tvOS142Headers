/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SATimestamp;

@interface SAHIDStep : NSObject {

	unsigned _debugid;
	int _pid;
	SATimestamp* _timestamp;
	unsigned long long _tid;

}

@property (readonly) unsigned debugid;                     //@synthesize debugid=_debugid - In the implementation block
@property (readonly) SATimestamp * timestamp; 
@property (readonly) int pid;                              //@synthesize pid=_pid - In the implementation block
@property (readonly) unsigned long long tid;               //@synthesize tid=_tid - In the implementation block
-(id)debugDescription;
-(unsigned long long)tid;
-(SATimestamp *)timestamp;
-(int)pid;
-(unsigned)debugid;
@end

