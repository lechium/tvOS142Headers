/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class _MKRightImageButton, NSLayoutConstraint;

@interface MKPlaceInfoSuggestAnEditRowView : MKPlaceSectionRowView {

	_MKRightImageButton* _suggestAnEditButton;
	NSLayoutConstraint* _topToTitleVerticalConstraint;
	NSLayoutConstraint* _titleToBottomVerticalConstraint;
	/*^block*/id _selectionBlock;

}

@property (nonatomic,copy) id selectionBlock;              //@synthesize selectionBlock=_selectionBlock - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_contentSizeDidChange;
-(void)_updateFonts;
-(void)_updateConstraints;
-(void)_setupSubviews;
-(void)_suggestAnEditButtonPressed;
-(id)selectionBlock;
-(void)setSelectionBlock:(id)arg1 ;
@end

