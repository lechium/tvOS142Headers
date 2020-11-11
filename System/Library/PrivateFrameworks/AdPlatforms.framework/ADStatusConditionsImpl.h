/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AdPlatforms.framework/AdPlatforms
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ADStatusConditions_XPC.h>

@interface ADStatusConditionsImpl : NSObject <ADStatusConditions_XPC>
-(id)setupXPCConnection;
-(BOOL)isConditionRateLimited:(id)arg1 onOperation:(long long)arg2 ;
-(void)initializeRateLimitingBuffer;
-(void)setStatusCondition:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearStatusCondition:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)isStatusConditionRegistered:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cleanupExpiredConditionsInBuffer;
-(BOOL)operationWithCondition:(id)arg1 forType:(long long)arg2 ;
-(id)capped:(id)arg1 to:(unsigned long long)arg2 ;
@end
