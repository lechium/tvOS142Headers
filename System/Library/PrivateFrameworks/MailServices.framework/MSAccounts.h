/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MailServices/MSMailDefaultService.h>

@interface MSAccounts : MSMailDefaultService
+(void)accountValuesForKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 launchMobileMail:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
+(BOOL)canSendMailSourceAccountManagement:(int)arg1 ;
+(BOOL)hasActiveAccounts;
+(void)accountValuesForKeys:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)accountValuesForKeys:(id)arg1 launchMobileMail:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
+(BOOL)canSendMail;
+(id)customSignatureForSendingEmailAddress:(id)arg1 ;
+(BOOL)deleteAccountsWithUniqueIdentifiers:(id)arg1 error:(id*)arg2 ;
+(void)mailboxListingForAccountWithUniqueIdentifier:(id)arg1 keys:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(BOOL)setPushStateForMailboxWithPath:(id)arg1 account:(id)arg2 pushState:(BOOL)arg3 error:(id*)arg4 ;
+(id)attachmentCapabilities;
-(void)_listAccountKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 handler:(/*^block*/id)arg4 ;
-(void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
@end
