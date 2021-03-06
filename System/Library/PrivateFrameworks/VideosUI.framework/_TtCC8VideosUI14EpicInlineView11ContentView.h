/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface _TtCC8VideosUI14EpicInlineView11ContentView : UIView {

	 debugUIOverlay;
	 shelfLockupStyle;
	 decoratedShelfLayout;
	 shelfMargin;
	 mainGradientColor;
	 playbackDelayInterval;
	 hostMediaController;
	 didHostMediaController;
	 backgroundMediaController;
	 shelfView;
	 shelfRowMetrics;
	 shelfHeight;
	 verticalStackView;
	 logoImageView;
	 channelLogoView;
	 isVideoPlaying;
	 focusEnvironments;
	 backgroundViewModel;
	 playbackDidStartObserver;
	 playbackDidStopObserver;
	 userInterfaceStyleToRestore;
	 $__lazy_storage_$_logoGradientView;
	 gradientContainerView;
	 visualEffectView;
	 gradientLayer;
	 opacityMaskLayer;

}

@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
@end

