/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CNContactFormatter;

@interface CNMailToGroup : NSObject {

	CNContactFormatter* _contactFormatter;

}

@property (nonatomic,retain) CNContactFormatter * contactFormatter;              //@synthesize contactFormatter=_contactFormatter - In the implementation block
+(id)os_log;
+(id)descriptorForRequiredKeys;
-(id)init;
-(id)mailUrlForContacts:(id)arg1 needsEmailAddresses:(BOOL)arg2 ;
-(BOOL)allContactsHaveEmailAddress:(id)arg1 ;
-(id)mailingAddressForContact:(id)arg1 ;
-(id)emailAddressForContact:(id)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(id)santizeMailingAddress:(id)arg1 ;
-(id)mailUrlForContacts:(id)arg1 ;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
@end

