/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class GKUIContentUnavailableView, UIActivityIndicatorView, UIStackView, NSString;

@interface GKNoContentView : UIView {

	BOOL _loading;
	/*^block*/id _buttonAction;
	GKUIContentUnavailableView* _contentUnavailableView;
	UIActivityIndicatorView* _loadingIndicatorView;
	UIStackView* _stackView;

}

@property (nonatomic,retain) GKUIContentUnavailableView * contentUnavailableView;              //@synthesize contentUnavailableView=_contentUnavailableView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicatorView;                   //@synthesize loadingIndicatorView=_loadingIndicatorView - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                          //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * buttonTitle; 
@property (nonatomic,copy) id buttonAction;                                                    //@synthesize buttonAction=_buttonAction - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                    //@synthesize loading=_loading - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isLoading;
-(void)setLoading:(BOOL)arg1 ;
-(NSString *)buttonTitle;
-(id)buttonAction;
-(void)setButtonAction:(id)arg1 ;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicatorView;
-(GKUIContentUnavailableView *)contentUnavailableView;
-(void)setContentUnavailableView:(GKUIContentUnavailableView *)arg1 ;
-(void)setLoadingIndicatorView:(UIActivityIndicatorView *)arg1 ;
@end

