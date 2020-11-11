/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactHeaderView.h>
#import <libobjc.A.dylib/CNUIReusableView.h>

@class NSDictionary, CNContactFormatter, NSString, UIView, UILabel, NSLayoutConstraint;

@interface CNContactHeaderDisplayView : CNContactHeaderView <CNUIReusableView> {

	NSDictionary* _taglineTextAttributes;
	BOOL _centersPhotoAndLabels;
	CNContactFormatter* _contactFormatter;
	NSString* _alternateName;
	NSString* _message;
	UIView* _personHeaderView;
	UILabel* _taglineLabel;
	double _maxHeight;
	NSLayoutConstraint* _photoTopConstraint;
	NSLayoutConstraint* _photoHeightConstraint;
	NSLayoutConstraint* _avatarNameSpacingConstraint;

}

@property (nonatomic,retain) UIView * personHeaderView;                           //@synthesize personHeaderView=_personHeaderView - In the implementation block
@property (retain) UILabel * taglineLabel;                                        //@synthesize taglineLabel=_taglineLabel - In the implementation block
@property (assign,nonatomic) double maxHeight;                                    //@synthesize maxHeight=_maxHeight - In the implementation block
@property (retain) NSLayoutConstraint * photoTopConstraint;                       //@synthesize photoTopConstraint=_photoTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * photoHeightConstraint;                    //@synthesize photoHeightConstraint=_photoHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * avatarNameSpacingConstraint;              //@synthesize avatarNameSpacingConstraint=_avatarNameSpacingConstraint - In the implementation block
@property (nonatomic,readonly) double photoLabelSpacing; 
@property (nonatomic,retain) CNContactFormatter * contactFormatter;               //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,copy) NSDictionary * taglineTextAttributes; 
@property (nonatomic,retain) NSString * alternateName;                            //@synthesize alternateName=_alternateName - In the implementation block
@property (nonatomic,retain) NSString * message;                                  //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL centersPhotoAndLabels;                          //@synthesize centersPhotoAndLabels=_centersPhotoAndLabels - In the implementation block
@property (nonatomic,readonly) double minHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeysForContactFormatter:(id)arg1 includingAvatarViewDescriptors:(BOOL)arg2 ;
+(id)contactHeaderViewWithContact:(id)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(double)minHeight;
-(double)maxHeight;
-(void)setMaxHeight:(double)arg1 ;
-(void)copy:(id)arg1 ;
-(NSString *)alternateName;
-(id)descriptorForRequiredKeys;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(void)layoutSubviews;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)updateConstraints;
-(void)reloadDataPreservingChanges:(BOOL)arg1 ;
-(void)setNameTextAttributes:(id)arg1 ;
-(void)updateWithContacts:(id)arg1 ;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 monogrammerStyle:(long long)arg3 ;
-(void)updateFontSizes;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 ;
-(void)handleNameLabelLongPress:(id)arg1 ;
-(void)setTaglineTextAttributes:(NSDictionary *)arg1 ;
-(void)menuWillHide:(id)arg1 ;
-(void)tintColorDidChange;
-(UILabel *)taglineLabel;
-(void)setPhotoTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)photoTopConstraint;
-(void)setPhotoHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)photoHeightConstraint;
-(void)setAvatarNameSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)avatarNameSpacingConstraint;
-(void)disablePhotoTapGesture;
-(void)updateSizeDependentAttributes;
-(id)_headerStringForContacts:(id)arg1 ;
-(id)_taglineStringForContacts:(id)arg1 ;
-(void)_updatePhotoView;
-(double)photoLabelSpacing;
-(NSDictionary *)taglineTextAttributes;
-(void)setAlternateName:(NSString *)arg1 ;
-(BOOL)centersPhotoAndLabels;
-(void)setCentersPhotoAndLabels:(BOOL)arg1 ;
-(UIView *)personHeaderView;
-(void)setPersonHeaderView:(UIView *)arg1 ;
-(void)setTaglineLabel:(UILabel *)arg1 ;
@end

