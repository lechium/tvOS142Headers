/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/SMTPAccount.h>

@class CastleIMAPAccount;

@interface MFNewcastleSMTPAccount : SMTPAccount {

	CastleIMAPAccount* _castleAccount;

}

@property (nonatomic,retain) CastleIMAPAccount * castleAccount;              //@synthesize castleAccount=_castleAccount - In the implementation block
+(id)accountTypeIdentifier;
-(void)dealloc;
-(id)accountForRenewingCredentials;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(BOOL)shouldUseAuthentication;
-(id)mailAccountIfAvailable;
-(id)displayHostname;
-(CastleIMAPAccount *)castleAccount;
-(void)setCastleAccount:(CastleIMAPAccount *)arg1 ;
@end
