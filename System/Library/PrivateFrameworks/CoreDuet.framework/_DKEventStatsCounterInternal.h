/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreDuet/CoreDuet-Structs.h>
@class NSString, NSArray;

@interface _DKEventStatsCounterInternal : NSObject {

	os_unfair_lock_s _lock;
	BOOL _hasType;
	BOOL _hasResult;
	unsigned long long _numCounters;
	unsigned long long* _counters;
	NSString* _eventName;
	NSString* _eventType;
	NSArray* _typeValues;
	NSString* _domain;

}
-(void)dealloc;
@end

