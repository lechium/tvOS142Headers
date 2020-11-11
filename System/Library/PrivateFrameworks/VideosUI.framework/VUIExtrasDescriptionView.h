/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TVAuxiliaryViewSelecting.h>

@class VUIExtrasDescriptionLayout, VUIFocusableTextView, NSString;

@interface VUIExtrasDescriptionView : UIView <TVAuxiliaryViewSelecting> {

	VUIExtrasDescriptionLayout* _layout;
	VUIFocusableTextView* _textView;

}

@property (nonatomic,retain) VUIExtrasDescriptionLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUIFocusableTextView * textView;                  //@synthesize textView=_textView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VUIExtrasDescriptionLayout *)layout;
-(void)setLayout:(VUIExtrasDescriptionLayout *)arg1 ;
-(VUIFocusableTextView *)textView;
-(void)setTextView:(VUIFocusableTextView *)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)didSelect;
-(void)prepareForCellReuse;
@end

