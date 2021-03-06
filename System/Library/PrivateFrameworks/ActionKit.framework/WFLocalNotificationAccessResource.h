/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAccessResource.h>

@interface WFLocalNotificationAccessResource : WFAccessResource {

	unsigned long long _globalLevelStatus;

}

@property (assign,nonatomic) unsigned long long globalLevelStatus;              //@synthesize globalLevelStatus=_globalLevelStatus - In the implementation block
+(void)initialize;
+(BOOL)isSystemResource;
+(void)requestLocalNotificationsAuthorizationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)name;
-(id)icon;
-(unsigned long long)globalLevelStatus;
-(id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)refreshAvailability;
-(void)setGlobalLevelStatus:(unsigned long long)arg1 ;
@end

