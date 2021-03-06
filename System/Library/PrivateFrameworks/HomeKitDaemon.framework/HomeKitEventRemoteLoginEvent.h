/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>
#import <HomeKitDaemon/HomeKitEventRemoteLoginMetricProtocol.h>

@class AWDHomeKitRemoteLogin, NSDate, NSString;

@interface HomeKitEventRemoteLoginEvent : HMDLogEvent <HMDAWDLogEvent, HomeKitEventRemoteLoginMetricProtocol> {

	AWDHomeKitRemoteLogin* _metric;
	NSDate* _startTime;

}

@property (nonatomic,readonly) AWDHomeKitRemoteLogin * metric;              //@synthesize metric=_metric - In the implementation block
@property (nonatomic,readonly) NSDate * startTime;                          //@synthesize startTime=_startTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)uuid;
-(NSDate *)startTime;
-(void)setError:(id)arg1 ;
-(AWDHomeKitRemoteLogin *)metric;
-(id)initWithSessionID:(id)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

