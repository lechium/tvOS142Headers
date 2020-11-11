/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _NAUIAutoUpdatingFontObserver : NSObject {

	id _notificationObserver;
	id _target;

}

@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
+(BOOL)canObserveFontsForTarget:(id)arg1 ;
-(void)dealloc;
-(id)target;
-(id)initWithTarget:(id)arg1 ;
-(void)updateDyamicFontForCurrentContentSize;
@end

