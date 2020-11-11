/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVCoreSettings/TVCSUserProfilesAnalyticsEvent.h>

@class NSError, NSString;

@interface TVCSUserProfilesAnalyticsAddUserFailedEvent : NSObject <TVCSUserProfilesAnalyticsEvent> {

	long long _actionType;
	long long _userType;
	NSError* _error;

}

@property (assign,nonatomic) long long actionType;                  //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) long long userType;                    //@synthesize userType=_userType - In the implementation block
@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
-(NSString *)eventName;
-(long long)userType;
-(void)setUserType:(long long)arg1 ;
-(id)buildPayload;
@end

