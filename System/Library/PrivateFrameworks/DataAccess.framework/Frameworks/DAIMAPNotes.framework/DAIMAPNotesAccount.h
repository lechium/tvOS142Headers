/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DAIMAPNotes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataAccess/DAAccount.h>

@interface DAIMAPNotesAccount : DAAccount {

	int _imapNotesAccountVersion;

}

@property (assign,setter=setIMAPNotesAccountVersion:,nonatomic) int imapNotesAccountVersion;              //@synthesize imapNotesAccountVersion=_imapNotesAccountVersion - In the implementation block
-(id)onBehalfOfBundleIdentifier;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(int)imapNotesAccountVersion;
-(void)setIMAPNotesAccountVersion:(int)arg1 ;
@end

