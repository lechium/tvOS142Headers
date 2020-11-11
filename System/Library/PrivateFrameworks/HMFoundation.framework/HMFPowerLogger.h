/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@interface HMFPowerLogger : HMFObject
+(id)sharedPowerLogger;
-(void)reportConnection:(id)arg1 linkType:(long long)arg2 accessoryCategory:(id)arg3 ;
-(id)linkTypeDescription:(long long)arg1 ;
-(void)reportIncomingAdvertisementChange:(id)arg1 accessoryCategory:(id)arg2 ;
-(void)reportIncomingIPEvent:(id)arg1 accessoryCategory:(id)arg2 ;
-(void)reportConnection:(id)arg1 linkType:(long long)arg2 ;
-(void)reportIncomingAdvertisementChange:(id)arg1 ;
-(void)reportIncomingIPEvent:(id)arg1 ;
-(void)reportIncomingCloudPush:(id)arg1 ;
-(void)reportIncomingIDSPush:(id)arg1 fromToken:(id)arg2 ;
-(void)reportIncomingLoxyMessage:(id)arg1 ;
@end

