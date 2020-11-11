/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAccessResource.h>

@class NSString;

@interface WFTumblrAccessResource : WFAccessResource {

	NSString* _OAuthToken;
	NSString* _OAuthTokenSecret;

}

@property (nonatomic,copy) NSString * OAuthToken;                    //@synthesize OAuthToken=_OAuthToken - In the implementation block
@property (nonatomic,copy) NSString * OAuthTokenSecret;              //@synthesize OAuthTokenSecret=_OAuthTokenSecret - In the implementation block
+(id)tumblrOAuthToken;
+(void)setTumblrOAuthToken:(id)arg1 ;
+(id)tumblrOAuthTokenSecret;
+(void)setTumblrOAuthTokenSecret:(id)arg1 ;
-(id)username;
-(id)resourceName;
-(unsigned long long)globalLevelStatus;
-(id)associatedAppIdentifier;
-(id)protectedResourceDescription;
-(BOOL)canLogOut;
-(void)logOut;
-(NSString *)OAuthToken;
-(void)setOAuthToken:(NSString *)arg1 ;
-(NSString *)OAuthTokenSecret;
-(void)setOAuthTokenSecret:(NSString *)arg1 ;
@end

