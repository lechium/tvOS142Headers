/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@class NSString;

@interface PBSPrepareKioskApplicationAnimationAction : BSAction

@property (nonatomic,readonly) long long animationDirection; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifier; 
-(void)sendResponse:(id)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(long long)animationDirection;
-(id)initWithAnimationDirection:(long long)arg1 applicationBundleIdentifier:(id)arg2 timeout:(double)arg3 responseQueue:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(id)initWithAnimationDirection:(long long)arg1 applicationBundleIdentifier:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
@end

