/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityUIService/AXUIAlert.h>

@protocol AXUIAlertStyleProvider;
@class TVSUIBulletinView;

@interface AXTVBulletinUIAlert : AXUIAlert {

	unsigned long long _alertType;
	id<AXUIAlertStyleProvider> _styleProvider;
	TVSUIBulletinView* _bulletinView;

}

@property (assign,nonatomic) unsigned long long alertType;                          //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,retain) id<AXUIAlertStyleProvider> styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) TVSUIBulletinView * bulletinView;                      //@synthesize bulletinView=_bulletinView - In the implementation block
-(unsigned long long)alertType;
-(void)setAlertType:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(id<AXUIAlertStyleProvider>)styleProvider;
-(void)setBulletinView:(TVSUIBulletinView *)arg1 ;
-(TVSUIBulletinView *)bulletinView;
-(id)initWithType:(unsigned long long)arg1 text:(id)arg2 subtitleText:(id)arg3 iconImage:(id)arg4 styleProvider:(id)arg5 userInfo:(id)arg6 ;
-(void)addToContainerView:(id)arg1 ;
-(void)setStyleProvider:(id<AXUIAlertStyleProvider>)arg1 ;
@end

