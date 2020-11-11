/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMDSpamMessageCreator : NSObject
-(id)transferForGuid:(id)arg1 ;
-(id)surfURLForIMMessageItem:(id)arg1 ;
-(id)metaDataForSurfURL:(id)arg1 ;
-(BOOL)isSurfPayment:(id)arg1 ;
-(BOOL)hasDataDetectedInformalPayment:(id)arg1 ;
-(void)reportUnknownToIDS:(id)arg1 messageID:(id)arg2 isBlackholed:(BOOL)arg3 messageServerTimestamp:(id)arg4 toURI:(id)arg5 ;
-(id)reportMessageDictionaryForMessages:(id)arg1 withLastAddressedHandle:(id)arg2 maxMessageLength:(unsigned long long)arg3 isAutoReport:(BOOL)arg4 withChat:(id)arg5 maxMessagesToReport:(unsigned long long)arg6 totalMessageCount:(unsigned long long*)arg7 onlyReportForiMessageService:(BOOL)arg8 notifyInternalSecurity:(BOOL)arg9 ;
@end

