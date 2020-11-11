/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VideosUI.CarouselViewCell.h>

@interface VideosUI.FlowcaseViewCell : VideosUI.CarouselViewCell {

	 flowcaseLayout;
	 backgroundMediaController;
	 scrollViewMonitor;
	 playbackDidStartObserver;
	 playbackDidStopObserver;
	 userInterfaceStyleToRestore;

}

@property (readonly,nonatomic) BOOL canBecomeFocused; 
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
@end
