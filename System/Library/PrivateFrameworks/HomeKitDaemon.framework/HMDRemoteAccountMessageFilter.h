/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDMessageFilter.h>

@class HMFMessageDestination, NSArray;

@interface HMDRemoteAccountMessageFilter : HMDMessageFilter {

	HMFMessageDestination* _target;
	NSArray* _whitelistedMessages;

}

@property (readonly) HMFMessageDestination * target;                  //@synthesize target=_target - In the implementation block
@property (copy,readonly) NSArray * whitelistedMessages;              //@synthesize whitelistedMessages=_whitelistedMessages - In the implementation block
+(id)logCategory;
-(HMFMessageDestination *)target;
-(id)initWithName:(id)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(id)logIdentifier;
-(BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3 ;
-(id)initWithTarget:(id)arg1 whitelistedMessages:(id)arg2 ;
-(BOOL)__shouldCheckMessage:(id)arg1 ;
-(NSArray *)whitelistedMessages;
@end

