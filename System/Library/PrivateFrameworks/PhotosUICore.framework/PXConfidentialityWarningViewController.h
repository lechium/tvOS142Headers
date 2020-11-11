/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UIVisualEffectView, UILabel, UIButton;

@interface PXConfidentialityWarningViewController : UIViewController {

	/*^block*/id _cancellationHandler;
	UIVisualEffectView* _effectView;
	UILabel* _messageLabel;
	UIButton* _confirmButton;
	UIButton* _cancelButton;

}

@property (nonatomic,readonly) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                       //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) UIButton * confirmButton;                     //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,copy) id cancellationHandler;                           //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(UIButton *)cancelButton;
-(UIVisualEffectView *)effectView;
-(UILabel *)messageLabel;
-(void)_handleButton:(id)arg1 ;
-(UIButton *)confirmButton;
-(void)presentAsOverlayInWindowScene:(id)arg1 ;
@end

