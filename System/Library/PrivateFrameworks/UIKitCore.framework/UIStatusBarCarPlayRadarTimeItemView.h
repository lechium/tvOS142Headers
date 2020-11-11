/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarCarPlayTimeItemView.h>

@interface UIStatusBarCarPlayRadarTimeItemView : UIStatusBarCarPlayTimeItemView {

	BOOL _isInternalInstall;
	BOOL _radarItemEnabled;
	BOOL _currentlyGatheringLogs;

}
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)buttonType;
-(BOOL)canBecomeFocused;
-(BOOL)showsTouchWhenHighlighted;
-(id)contentsImage;
-(id)highlightImage;
-(BOOL)allowsUserInteraction;
-(BOOL)usesAdvancedActions;
-(id)_timeImageSet;
-(void)_gatheringLogsDidChangeStatusNotification:(id)arg1 ;
-(BOOL)_showRadarButtonForInternalInstalls;
@end

