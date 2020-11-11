/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/ASCOfferButtonDelegate.h>
#import <libobjc.A.dylib/ASCLockupPresenterView.h>
#import <libobjc.A.dylib/ASCOfferPresenterView.h>

@class NSString, ASCOfferTheme, ASCArtworkView, ASCSkeletonLabel, ASCLabelPillOverlayView, UIColor;

@interface ASCLockupContentView : UIControl <ASCOfferButtonDelegate, ASCLockupPresenterView, ASCOfferPresenterView> {

	NSString* _size;
	ASCOfferTheme* _offerTheme;
	ASCArtworkView* _iconArtworkView;
	ASCSkeletonLabel* _titleLabel;
	ASCSkeletonLabel* _subtitleLabel;
	ASCLabelPillOverlayView* _headingLabelIfLoaded;

}

@property (nonatomic,readonly) ASCArtworkView * iconArtworkView;                            //@synthesize iconArtworkView=_iconArtworkView - In the implementation block
@property (nonatomic,readonly) ASCSkeletonLabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) ASCSkeletonLabel * subtitleLabel;                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) ASCLabelPillOverlayView * headingLabelIfLoaded;              //@synthesize headingLabelIfLoaded=_headingLabelIfLoaded - In the implementation block
@property (nonatomic,readonly) ASCLabelPillOverlayView * headingLabel; 
@property (nonatomic,retain) NSString * size;                                               //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) ASCOfferTheme * offerTheme;                                      //@synthesize offerTheme=_offerTheme - In the implementation block
@property (nonatomic,copy) UIColor * loadingColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize preferredIconSize; 
-(NSString *)description;
-(NSString *)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setSize:(NSString *)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHeading:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setLoading:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(ASCSkeletonLabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(ASCSkeletonLabel *)subtitleLabel;
-(void)invalidateIntrinsicContentSize;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(ASCLabelPillOverlayView *)headingLabel;
-(void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setPrefersRightToLeftLayout:(BOOL)arg1 ;
-(void)setIconImage:(id)arg1 withDecoration:(id)arg2 ;
-(CGSize)preferredIconSize;
-(ASCLabelPillOverlayView *)headingLabelIfLoaded;
-(void)setOfferEnabled:(BOOL)arg1 ;
-(void)setOfferStatus:(id)arg1 ;
-(void)setOfferInteractive:(BOOL)arg1 ;
-(void)setOfferMetadata:(id)arg1 ;
-(void)setOfferTheme:(ASCOfferTheme *)arg1 ;
-(void)endOfferModalState;
-(id)saveOfferState;
-(void)beginOfferModalStateWithCancelBlock:(/*^block*/id)arg1 ;
-(void)offerButton:(id)arg1 willTransitionToMetadata:(id)arg2 usingAnimator:(id)arg3 ;
-(id)makeLayout;
-(void)addOfferTarget:(id)arg1 action:(SEL)arg2 ;
-(ASCOfferTheme *)offerTheme;
-(void)setUseFocusedAppearance:(BOOL)arg1 ;
-(ASCArtworkView *)iconArtworkView;
-(UIColor *)loadingColor;
-(void)setLoadingColor:(UIColor *)arg1 ;
-(void)removeOfferTarget:(id)arg1 action:(SEL)arg2 ;
@end

