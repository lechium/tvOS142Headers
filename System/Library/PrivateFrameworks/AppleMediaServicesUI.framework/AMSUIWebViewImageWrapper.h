/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServicesUI/AMSUICommonView.h>

@class UIView;

@interface AMSUIWebViewImageWrapper : AMSUICommonView {

	UIView* _view;
	double _inset;

}

@property (nonatomic,retain) UIView * view;              //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) double inset;               //@synthesize inset=_inset - In the implementation block
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)setInset:(double)arg1 ;
-(double)inset;
-(id)initWithView:(id)arg1 topInset:(double)arg2 ;
@end
