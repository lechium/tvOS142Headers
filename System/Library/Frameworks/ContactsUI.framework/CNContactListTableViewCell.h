/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@protocol ABStyleProvider;
@class CNContactFormatter, CNContact, CNContactMatchInfo;

@interface CNContactListTableViewCell : UITableViewCell {

	BOOL _isMeCard;
	id<ABStyleProvider> _styleProvider;
	CNContactFormatter* _contactFormatter;
	CNContact* _contact;
	CNContactMatchInfo* _contactMatchInfo;

}

@property (nonatomic,readonly) id<ABStyleProvider> styleProvider;                //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;              //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNContactMatchInfo * contactMatchInfo;              //@synthesize contactMatchInfo=_contactMatchInfo - In the implementation block
@property (assign,nonatomic) BOOL isMeCard;                                      //@synthesize isMeCard=_isMeCard - In the implementation block
+(void)initialize;
+(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setContactMatchInfo:(CNContactMatchInfo *)arg1 ;
-(void)setIsMeCard:(BOOL)arg1 ;
-(CNContactMatchInfo *)contactMatchInfo;
-(BOOL)isMeCard;
@end

