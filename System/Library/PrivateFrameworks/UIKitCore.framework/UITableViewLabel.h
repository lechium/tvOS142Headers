/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSAttributedString, UITableViewCell;

@interface UITableViewLabel : UILabel {

	long long _savedNumberOfLines;
	double _firstParagraphFirstLineHeadIndent;
	NSAttributedString* _shadowAttributedText;
	BOOL _usingDefaultFont;
	UITableViewCell* _tableCell;

}

@property (assign,nonatomic,__weak) UITableViewCell * tableCell;              //@synthesize tableCell=_tableCell - In the implementation block
@property (nonatomic,readonly) BOOL usingDefaultFont;                         //@synthesize usingDefaultFont=_usingDefaultFont - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UITableViewCell *)tableCell;
-(id)_disabledFontColor;
-(BOOL)usingDefaultFont;
-(void)_setDefaultFont:(id)arg1 ;
-(void)setTableCell:(UITableViewCell *)arg1 ;
-(void)_setFirstParagraphFirstLineHeadIndent:(double)arg1 ;
-(void)_clearNumberOfLines;
-(void)_setNumberOfLinesForAXLayoutIfNecessary;
-(void)_cleanupErrantFirstLineHeadIndent;
-(void)_restoreNumberOfLines;
-(BOOL)_attributedStringHasParagraphStyleWithNonzeroFirstLineHeadIndent:(id)arg1 ;
@end

