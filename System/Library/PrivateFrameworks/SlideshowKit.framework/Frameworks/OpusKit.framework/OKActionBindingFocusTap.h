/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBindingTap.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString;

@interface OKActionBindingFocusTap : OKActionBindingTap <UIGestureRecognizerDelegate> {

	unsigned long long _mode;
	BOOL _focusInEnabled;
	BOOL _focusOutEnabled;

}

@property (assign,nonatomic) unsigned long long mode;               //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL focusInEnabled;                   //@synthesize focusInEnabled=_focusInEnabled - In the implementation block
@property (assign,nonatomic) BOOL focusOutEnabled;                  //@synthesize focusOutEnabled=_focusOutEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setMode:(unsigned long long)arg1 ;
-(void)unload;
-(unsigned long long)mode;
-(BOOL)performAction:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)handleTap:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(BOOL)ownsGestureRecognizer:(id)arg1 ;
-(void)setFocusInEnabled:(BOOL)arg1 ;
-(void)setFocusOutEnabled:(BOOL)arg1 ;
-(BOOL)focusInEnabled;
-(BOOL)focusOutEnabled;
@end

