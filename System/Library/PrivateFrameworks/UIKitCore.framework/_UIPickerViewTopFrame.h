/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage;

@interface _UIPickerViewTopFrame : UIView {

	UIImage* _leftImage;
	UIImage* _middleImage;
	UIImage* _rightImage;
	double _inset;
	double _shift;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setInset:(double)arg1 ;
-(void)setShift:(double)arg1 ;
-(void)setLeftImage:(id)arg1 middleImage:(id)arg2 rightImage:(id)arg3 ;
@end
