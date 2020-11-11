/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class _MKUILabel, NSLayoutConstraint, NSString;

@interface MKTransitMessageCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _messageLabel;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,copy) NSString * messageText; 
-(void)dealloc;
-(NSString *)messageText;
-(void)setMessageText:(NSString *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
@end

