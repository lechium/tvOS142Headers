/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDRelaySessionEvent : HMDLogEvent <HMDAWDLogEvent> {

	unsigned long long _actionType;
	long long _statusCode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long actionType;              //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) long long statusCode;                         //@synthesize statusCode=_statusCode - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)stringForActionType:(unsigned long long)arg1 ;
+(id)relaySessionEventWithActionType:(unsigned long long)arg1 ;
-(long long)statusCode;
-(unsigned long long)actionType;
-(void)setStatusCode:(long long)arg1 ;
-(id)initWithActionType:(unsigned long long)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

