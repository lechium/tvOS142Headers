/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDRecordsSavedLogEvent : HMDLogEvent {

	BOOL _legacy;
	unsigned long long _size;

}

@property (nonatomic,readonly) unsigned long long size;                  //@synthesize size=_size - In the implementation block
@property (getter=isLegacy,nonatomic,readonly) BOOL legacy;              //@synthesize legacy=_legacy - In the implementation block
+(id)uuid;
-(unsigned long long)size;
-(BOOL)isLegacy;
-(id)initWithSavedRecords:(id)arg1 isLegacy:(BOOL)arg2 ;
@end

