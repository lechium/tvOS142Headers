/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class NSArray, SiriUIContentPlatterView;

@interface SiriUIContentPlatterViewController : UIViewController {

	NSArray* _contentViewControllers;

}

@property (nonatomic,retain) NSArray * contentViewControllers;                             //@synthesize contentViewControllers=_contentViewControllers - In the implementation block
@property (nonatomic,readonly) SiriUIContentPlatterView * contentPlatterView; 
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(SiriUIContentPlatterView *)contentPlatterView;
-(void)setContentViewControllers:(NSArray *)arg1 ;
-(NSArray *)contentViewControllers;
@end

