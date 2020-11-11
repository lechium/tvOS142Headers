/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNPropertyCell.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>

@class UIButton, CNRepeatingGradientSeparatorView, NSString;

@interface CNPropertyEditingCell : CNPropertyCell <CNPickerControllerDelegate> {

	UIButton* _labelButton;
	CNRepeatingGradientSeparatorView* _vseparator;

}

@property (nonatomic,retain) CNRepeatingGradientSeparatorView * vseparator;              //@synthesize vseparator=_vseparator - In the implementation block
@property (nonatomic,readonly) UIButton * labelButton;                                   //@synthesize labelButton=_labelButton - In the implementation block
@property (nonatomic,readonly) double leftValueMargin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)wantsChevron;
+(BOOL)wantsStandardConstraints;
+(id)keyPathsForValuesAffectingEffectiveLabelWidth;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)valueString;
-(id)labelView;
-(double)minCellHeight;
-(id)constantConstraints;
-(void)setValueTextAttributes:(id)arg1 ;
-(void)updateWithPropertyItem:(id)arg1 ;
-(void)pickerDidCancel:(id)arg1 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(UIButton *)labelButton;
-(void)labelButtonClicked:(id)arg1 ;
-(CNRepeatingGradientSeparatorView *)vseparator;
-(double)leftValueMargin;
-(double)effectiveLabelWidth;
-(void)setVseparator:(CNRepeatingGradientSeparatorView *)arg1 ;
@end

