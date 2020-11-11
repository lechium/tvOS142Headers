/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REElementAction.h>

@class NSUserActivity, NSString;

@interface REElementUserActivityAction : REElementAction {

	NSUserActivity* _userActivity;
	NSString* _applicationID;

}

@property (nonatomic,copy,readonly) NSUserActivity * userActivity;              //@synthesize userActivity=_userActivity - In the implementation block
@property (nonatomic,readonly) NSString * applicationID;                        //@synthesize applicationID=_applicationID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSUserActivity *)userActivity;
-(NSString *)applicationID;
-(void)_performWithContext:(id)arg1 ;
-(void)_submitMetricsWithSuccess:(BOOL)arg1 ;
-(id)initWithUserActivity:(id)arg1 applicationID:(id)arg2 ;
@end

