/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSActionResponse.h>

@class BKSAnimationFenceHandle;

@interface PBSPerformKioskAnimationActionResponse : BSActionResponse

@property (nonatomic,readonly) BKSAnimationFenceHandle * animationFence; 
+(id)responseWithAnimationFence:(id)arg1 ;
-(BKSAnimationFenceHandle *)animationFence;
@end

