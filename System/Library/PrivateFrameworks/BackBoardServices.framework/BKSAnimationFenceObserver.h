/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSHashTable;

@interface BKSAnimationFenceObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _handleNameToTraceMap;
	NSMapTable* _handleNameToFenceNameMap;
	NSMapTable* _fenceNameToHandleNamesMap;
	NSMapTable* _fenceNameToDeathSentinelMap;
	NSHashTable* _validDeathSentinelsTable;
	unsigned _lastHandleName;
	unsigned _encodeCount;

}
+(id)sharedInstance;
+(unsigned)countFromEncodeIdentifier:(unsigned long long)arg1 ;
+(int)pidFromEncodeIdentifier:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)nextEncodeIdentifier;
-(unsigned long long)addHandle:(id)arg1 ;
-(void)removeHandleWithName:(unsigned long long)arg1 ;
@end
