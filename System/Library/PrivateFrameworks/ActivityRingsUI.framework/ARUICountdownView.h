/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityRingsUI/ARUIRingsView.h>

@class ARUIRingGroupController;

@interface ARUICountdownView : ARUIRingsView

@property (nonatomic,readonly) ARUIRingGroupController * countdownController; 
+(id)countdownViewConfiguredForWatch;
+(id)countdownViewConfiguredForCompanion;
+(id)countdownViewConfiguredForDisplayWithRingDiameter:(float)arg1 ;
-(id)ringGroup;
-(ARUIRingGroupController *)countdownController;
-(id)backingTrackRingGroup;
@end

