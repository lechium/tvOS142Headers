/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MKPlaceSectionRowView.h>

@class NSLayoutConstraint, _MKUILabel;

@interface MKPlaceEncyclopedicFactoidView : MKPlaceSectionRowView {

	NSLayoutConstraint* _baselineToTopConstraint;
	NSLayoutConstraint* _baselineToBottomConstraint;
	NSLayoutConstraint* _baselineToBaselineConstraint;
	BOOL _isStandAlone;
	_MKUILabel* _keyLabel;
	_MKUILabel* _valueLabel;

}

@property (nonatomic,retain) _MKUILabel * keyLabel;                //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,retain) _MKUILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
-(_MKUILabel *)valueLabel;
-(void)setValueLabel:(_MKUILabel *)arg1 ;
-(void)_contentSizeDidChange;
-(id)_keyLabelWithString:(id)arg1 ;
-(id)_valueLabelWithString:(id)arg1 ;
-(void)setUpConstraints;
-(id)_keyLabelFont;
-(id)initWithTextItem:(id)arg1 isStandAloneFactoid:(BOOL)arg2 ;
-(_MKUILabel *)keyLabel;
-(void)setKeyLabel:(_MKUILabel *)arg1 ;
@end
