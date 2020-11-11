/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <TVSystemMenuUI/TVSMModuleContentViewController.h>

@protocol TVSMModuleContentViewControllerDelegate;
@class TVSMBaseLockupView, TVSMBaseView, NSString;

@interface TVSMBaseViewController : UIViewController <TVSMModuleContentViewController> {

	id<TVSMModuleContentViewControllerDelegate> _delegate;
	long long _style;
	TVSMBaseLockupView* _lockupView;

}

@property (nonatomic,retain) TVSMBaseLockupView * lockupView;                                          //@synthesize lockupView=_lockupView - In the implementation block
@property (assign,nonatomic) long long style;                                                          //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) TVSMBaseView * baseView; 
@property (assign,nonatomic,__weak) id<TVSMModuleContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)contentViewClass;
-(id<TVSMModuleContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TVSMModuleContentViewControllerDelegate>)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)loadView;
-(void)_buttonPressed:(id)arg1 ;
-(TVSMBaseView *)baseView;
-(TVSMBaseLockupView *)lockupView;
-(void)setLockupView:(TVSMBaseLockupView *)arg1 ;
@end

