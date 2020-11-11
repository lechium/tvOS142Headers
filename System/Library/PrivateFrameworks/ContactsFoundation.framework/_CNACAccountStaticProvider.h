/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNACAccountProvider.h>

@class NSArray;

@interface _CNACAccountStaticProvider : CNACAccountProvider {

	NSArray* _accountChildAccountsPairs;

}

@property (nonatomic,readonly) NSArray * accountChildAccountsPairs;              //@synthesize accountChildAccountsPairs=_accountChildAccountsPairs - In the implementation block
-(id)accountsWithAccountType:(id)arg1 ;
-(id)allAccountTypes;
-(id)childAccountsForAccount:(id)arg1 ;
-(BOOL)isAccountSyncable:(id)arg1 ;
-(NSArray *)accountChildAccountsPairs;
-(id)initWithAccounts:(id)arg1 ;
@end
