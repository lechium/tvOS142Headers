/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_DKEventStatsCounterInternalProperty.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventTypeStatsCounter : NSObject <_DKEventStatsCounterInternalProperty> {

	_DKEventStatsCounterInternal* _internal;

}

@property (retain) _DKEventStatsCounterInternal * internal;              //@synthesize internal=_internal - In the implementation block
-(id)eventType;
-(_DKEventStatsCounterInternal *)internal;
-(id)eventName;
-(void)setInternal:(_DKEventStatsCounterInternal *)arg1 ;
-(id)typeValues;
@end

