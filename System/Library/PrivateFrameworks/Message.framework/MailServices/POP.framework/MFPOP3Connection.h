/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <POP/POP-Structs.h>
#import <Message/MFConnection.h>

@class NSMutableData, NSData, NSString;

@interface MFPOP3Connection : MFConnection {

	NSMutableData* _sendBuffer;
	CFDictionaryRef _listResults;
	CFDictionaryRef _messageIdsByNumber;
	CFDictionaryRef _numbersByMessageId;
	NSData* _apopTimeStamp;
	unsigned long long _numberOfMessagesAvailable;
	unsigned _state : 4;
	unsigned _hidingPassword : 1;
	NSString* _accountURL;

}
-(id)init;
-(void)dealloc;
-(id)capabilities;
-(unsigned long long)serverMessageCount;
-(BOOL)authenticateUsingAccount:(id)arg1 ;
-(int)quit;
-(BOOL)connectUsingAccount:(id)arg1 ;
-(id)authenticationMechanisms;
-(BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2 ;
-(BOOL)startTLSForAccount:(id)arg1 ;
-(int)getMessageNumbers:(const _CFArray*)arg1 messageIdsByNumber:(const _CFDictionary*)arg2 numbersByMessageId:(const _CFDictionary*)arg3 ;
-(id)copyMessageHeaderForMessageNumber:(unsigned long long)arg1 ;
-(int)retr:(unsigned long long)arg1 dataConsumer:(id)arg2 ;
-(int)_sendCommand:(const char*)arg1 withArguments:(id)arg2 ;
-(int)_getStatusFromReply;
-(id)copyReplyLineData;
-(BOOL)supportsAPOP;
-(BOOL)_doBasicConnectionWithAccount:(id)arg1 ;
-(int)_apopWithUsername:(id)arg1 password:(id)arg2 ;
-(int)_user:(id)arg1 ;
-(int)_pass:(id)arg1 ;
-(int)_getUidlResults;
-(int)_getListResults;
-(int)_readMultilineResponseWithMaxSize:(unsigned long long)arg1 consumer:(id)arg2 ;
-(unsigned long long)sizeOfMessageNumber:(unsigned long long)arg1 ;
-(int)getTop:(int)arg1 ofMessageNumber:(unsigned long long)arg2 intoMutableData:(id)arg3 ;
-(int)_retrieveMessage:(unsigned long long)arg1 ofSize:(unsigned long long)arg2 consumer:(id)arg3 ;
-(int)retr:(unsigned long long)arg1 consumer:(id)arg2 intoQueue:(id)arg3 idsByNumber:(CFDictionaryRef)arg4 allowIncomplete:(BOOL)arg5 queueStatus:(BOOL*)arg6 ;
-(int)getTopOfMessageNumber:(unsigned long long)arg1 intoMutableData:(id)arg2 ;
-(unsigned long long)numberOfMessagesAvailable;
-(BOOL)messagesAvailable;
-(int)fetchMessages:(CFArrayRef)arg1 intoQueue:(id)arg2 serverIDsByNumber:(CFDictionaryRef)arg3 ;
-(int)dele:(unsigned long long)arg1 ;
-(void)disableAPOP;
-(int)doStat;
-(int)list:(int)arg1 ;
-(int)getMessageNumbers:(const _CFArray*)arg1 andMessageIdsByNumber:(const _CFDictionary*)arg2 ;
-(id)idForMessageNumber:(long long)arg1 ;
-(int)retr:(unsigned long long)arg1 data:(id*)arg2 ;
-(int)fetchMessages:(CFArrayRef)arg1 ;
-(int)deleteMessagesOnServer:(CFArrayRef)arg1 ;
@end

