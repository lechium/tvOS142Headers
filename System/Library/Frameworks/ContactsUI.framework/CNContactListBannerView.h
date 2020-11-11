/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@protocol CNContactListBannerViewDelegate;
@class UIView, CNContactFormatter, CNContact, UIGestureRecognizer, UILabel, NSLayoutConstraint;

@interface CNContactListBannerView : UIView {

	id<CNContactListBannerViewDelegate> _delegate;
	UIView* _bottomSeparator;
	CNContactFormatter* _formatter;
	CNContact* _meContact;
	UIGestureRecognizer* _longPress;
	UIView* _avatarViewContainer;
	UIView* _avatarView;
	UILabel* _titleLabel;
	UIView* _footnoteContainer;
	UILabel* _footnoteLabel;
	UILabel* _footnoteValueLabel;
	NSLayoutConstraint* _titleToPhotoVerticalConstraint;
	NSLayoutConstraint* _footnoteTitleToTitleVerticalConstraint;
	NSLayoutConstraint* _footnoteTitleToBottomVerticalConstraint;
	NSLayoutConstraint* _footnoteTitleToValueHorizontalSpaceConstraint;

}

@property (nonatomic,readonly) CNContactFormatter * formatter;                                                //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                                                           //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * longPress;                                               //@synthesize longPress=_longPress - In the implementation block
@property (nonatomic,readonly) UIView * avatarViewContainer;                                                  //@synthesize avatarViewContainer=_avatarViewContainer - In the implementation block
@property (nonatomic,retain) UIView * avatarView;                                                             //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIView * footnoteContainer;                                                    //@synthesize footnoteContainer=_footnoteContainer - In the implementation block
@property (nonatomic,readonly) UILabel * footnoteLabel;                                                       //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,readonly) UILabel * footnoteValueLabel;                                                  //@synthesize footnoteValueLabel=_footnoteValueLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleToPhotoVerticalConstraint;                             //@synthesize titleToPhotoVerticalConstraint=_titleToPhotoVerticalConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * footnoteTitleToTitleVerticalConstraint;                     //@synthesize footnoteTitleToTitleVerticalConstraint=_footnoteTitleToTitleVerticalConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * footnoteTitleToBottomVerticalConstraint;                    //@synthesize footnoteTitleToBottomVerticalConstraint=_footnoteTitleToBottomVerticalConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * footnoteTitleToValueHorizontalSpaceConstraint;              //@synthesize footnoteTitleToValueHorizontalSpaceConstraint=_footnoteTitleToValueHorizontalSpaceConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactListBannerViewDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * bottomSeparator;                                                      //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
+(id)descriptorForRequiredKeys;
-(id)init;
-(void)dealloc;
-(id<CNContactListBannerViewDelegate>)delegate;
-(void)setDelegate:(id<CNContactListBannerViewDelegate>)arg1 ;
-(CNContactFormatter *)formatter;
-(void)copy:(id)arg1 ;
-(void)setMeContact:(CNContact *)arg1 ;
-(CNContact *)meContact;
-(UILabel *)footnoteLabel;
-(UILabel *)titleLabel;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setAvatarView:(UIView *)arg1 ;
-(UIView *)avatarView;
-(void)cellWasLongPressed:(id)arg1 ;
-(void)cellWasSingleTapped:(id)arg1 ;
-(void)updateFontRelatedConstraints;
-(BOOL)displaysContactInfo;
-(NSLayoutConstraint *)titleToPhotoVerticalConstraint;
-(id)footnoteFont;
-(NSLayoutConstraint *)footnoteTitleToTitleVerticalConstraint;
-(NSLayoutConstraint *)footnoteTitleToBottomVerticalConstraint;
-(UILabel *)footnoteValueLabel;
-(UIView *)avatarViewContainer;
-(UIGestureRecognizer *)longPress;
-(NSLayoutConstraint *)footnoteTitleToValueHorizontalSpaceConstraint;
-(id)footnoteTextColor;
-(void)menuDidHide:(id)arg1 ;
-(void)showMenu;
-(void)setMeContact:(id)arg1 footnoteTitle:(id)arg2 footnoteValue:(id)arg3 ;
-(UIView *)bottomSeparator;
-(UIView *)footnoteContainer;
-(void)setTitleToPhotoVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFootnoteTitleToTitleVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFootnoteTitleToBottomVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFootnoteTitleToValueHorizontalSpaceConstraint:(NSLayoutConstraint *)arg1 ;
@end

