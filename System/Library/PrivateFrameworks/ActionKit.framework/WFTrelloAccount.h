/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/WFAccount.h>

@class NSString;

@interface WFTrelloAccount : WFAccount {

	NSString* _token;
	NSString* _email;

}

@property (nonatomic,copy) NSString * token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * email;              //@synthesize email=_email - In the implementation block
+(id)serviceID;
+(id)localizedServiceName;
+(id)accountWithToken:(id)arg1 ;
-(BOOL)isValid;
-(id)localizedName;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
@end

