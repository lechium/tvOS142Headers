/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>
#import <libobjc.A.dylib/VUIAuxiliaryViewSelecting.h>

@interface VideosUI.CanonicalInfoCardCell : VUIFocusableCollectionViewCell <VUIAuxiliaryViewSelecting> {

	 layout;
	 cornerRadius;
	 cardView;

}
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateBackgroundAndHighlightColor;
@end

