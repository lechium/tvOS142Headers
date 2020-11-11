/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVVisualEffectView.h>

@class UIView;

@interface _TVVibrancyContainerView : _TVVisualEffectView {

	UIView* _containedView;

}

@property (nonatomic,__weak,readonly) UIView * containedView;              //@synthesize containedView=_containedView - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)containedView;
-(id)initWithEffect:(id)arg1 containingView:(id)arg2 ;
@end

