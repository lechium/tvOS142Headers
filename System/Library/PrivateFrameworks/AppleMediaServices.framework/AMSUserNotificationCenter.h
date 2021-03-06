/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSUserNotificationStrategy;
@interface AMSUserNotificationCenter : NSObject {

	id<AMSUserNotificationStrategy> _strategy;

}

@property (nonatomic,readonly) id<AMSUserNotificationStrategy> strategy;              //@synthesize strategy=_strategy - In the implementation block
+(BOOL)badgeBundleId:(id)arg1 badgeId:(id)arg2 enabled:(BOOL)arg3 error:(id*)arg4 ;
+(id)postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3 ;
+(id)removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3 scheduledOnly:(BOOL)arg4 ;
+(Class)_determineStrategyForBundleId:(id)arg1 ;
+(id)activeNotificationsWithCenterBundleId:(id)arg1 ;
+(id)removeNotification:(id)arg1 centerBundleId:(id)arg2 ;
-(id<AMSUserNotificationStrategy>)strategy;
@end

