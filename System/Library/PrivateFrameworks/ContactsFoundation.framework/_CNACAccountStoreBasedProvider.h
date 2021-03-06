/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNACAccountProvider.h>

@class ACAccountStore;

@interface _CNACAccountStoreBasedProvider : CNACAccountProvider {

	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(ACAccountStore *)accountStore;
-(id)accountsWithAccountType:(id)arg1 ;
-(id)allAccountTypes;
-(id)childAccountsForAccount:(id)arg1 ;
-(id)initWithAccountStore:(id)arg1 ;
-(BOOL)isAccountSyncable:(id)arg1 ;
-(BOOL)isAnyAccountSyncableIgnoringAccount:(id)arg1 ;
@end

