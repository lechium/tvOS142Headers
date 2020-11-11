/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate;
@class UIView, SiriUISashView, SiriUISnippetViewController, UIButton;

@interface SiriUICardSnippetView : UIView {

	UIView* _cardView;
	SiriUISashView* _sashView;
	BOOL _shouldClipTopOfCard;
	SiriUISnippetViewController* _backingViewController;
	id<SiriUICardSnippetViewDataSource> _dataSource;
	id<SiriUICardSnippetViewDelegate> _delegate;

}

@property (assign,getter=isNavigating,nonatomic) BOOL navigating; 
@property (assign,nonatomic) BOOL shouldClipTopOfCard;                                                //@synthesize shouldClipTopOfCard=_shouldClipTopOfCard - In the implementation block
@property (nonatomic,readonly) UIButton * backNavigationButton; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * backingViewController;              //@synthesize backingViewController=_backingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUICardSnippetViewDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUICardSnippetViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
-(id<SiriUICardSnippetViewDelegate>)delegate;
-(void)setDelegate:(id<SiriUICardSnippetViewDelegate>)arg1 ;
-(id<SiriUICardSnippetViewDataSource>)dataSource;
-(void)setDataSource:(id<SiriUICardSnippetViewDataSource>)arg1 ;
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isNavigating;
-(void)setNavigating:(BOOL)arg1 ;
-(id)accessibilityIdentifier;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setCardView:(id)arg1 ;
-(UIButton *)backNavigationButton;
-(void)_sashViewRecognizedTapGestureWithGestureRecognizer:(id)arg1 ;
-(BOOL)shouldClipTopOfCard;
-(void)setShouldClipTopOfCard:(BOOL)arg1 ;
-(SiriUISnippetViewController *)backingViewController;
-(void)setBackingViewController:(SiriUISnippetViewController *)arg1 ;
@end

