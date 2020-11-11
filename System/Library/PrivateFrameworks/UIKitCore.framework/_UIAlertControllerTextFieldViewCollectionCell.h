/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _UIAlertControllerTextFieldView, UITapGestureRecognizer;

@interface _UIAlertControllerTextFieldViewCollectionCell : UICollectionViewCell {

	_UIAlertControllerTextFieldView* _textField;
	UITapGestureRecognizer* _selectButtonGesture;

}

@property (nonatomic,readonly) _UIAlertControllerTextFieldView * textField; 
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(_UIAlertControllerTextFieldView *)textField;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(id)preferredFocusedView;
-(void)_selectButton:(id)arg1 ;
-(void)setTextField:(id)arg1 horizontalMargin:(double)arg2 ;
@end

