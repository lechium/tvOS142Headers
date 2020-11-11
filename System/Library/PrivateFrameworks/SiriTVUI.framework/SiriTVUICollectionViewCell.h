/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <SiriTVUI/SiriTVUIClickRecognizerDelegate.h>

@protocol SiriTVUICollectionViewCellDelegate;
@class _SiriTVUIFloatingContentView, UIImageView, SiriTVUIVibrantLabel, UITapGestureRecognizer, NSString, UIImage;

@interface SiriTVUICollectionViewCell : UICollectionViewCell <SiriTVUIClickRecognizerDelegate> {

	_SiriTVUIFloatingContentView* _floatingContentView;
	UIImageView* _imageView;
	SiriTVUIVibrantLabel* _titleLabel;
	SiriTVUIVibrantLabel* _subtitleVibrantLabel;
	UITapGestureRecognizer* _clickRecognizer;
	NSString* _title;
	NSString* _subtitle;
	double _fontSize;
	id<SiriTVUICollectionViewCellDelegate> _delegate;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) double fontSize;                                                     //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic,__weak) id<SiriTVUICollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SiriTVUICollectionViewCellDelegate>)delegate;
-(void)setDelegate:(id<SiriTVUICollectionViewCellDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(UIImage *)image;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)clickBeganEvent;
-(void)clickEndedEvent:(BOOL)arg1 ;
-(void)_beginMarqueeing;
-(void)_updateTextForFocus:(BOOL)arg1 ;
-(void)_layoutSubviewsForFocused:(BOOL)arg1 selected:(BOOL)arg2 ;
-(void)_setTextLabelsColor:(BOOL)arg1 ;
@end

