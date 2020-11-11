/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMTransferAgent/IMTransferAgent-Structs.h>
#import <IDSFoundation/IDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSNumber;

@interface FTiMessageRequestMMCSUploadToken : IDSMessage <NSCopying> {

	NSData* pushToken;
	NSString* _responseAuthToken;
	NSNumber* _length;
	NSData* _signature;
	NSString* _responseRequestURL;
	NSString* _responseRequestorID;
	long long _contentVersion;
	NSString* _contentHeaders;
	NSData* _contentBody;
	NSString* _responseContentHeaders;
	NSData* _responseContentBody;
	long long _responseContentVersion;
	NSData* _sessionToken;
	NSString* _senderID;
	NSString* _destinationID;
	NSString* _anonymousSenderID;

}

@property (copy) NSData * signature;                                  //@synthesize signature=_signature - In the implementation block
@property (copy) NSNumber * length;                                   //@synthesize length=_length - In the implementation block
@property (copy) NSString * responseAuthToken;                        //@synthesize responseAuthToken=_responseAuthToken - In the implementation block
@property (copy) NSString * responseRequestURL;                       //@synthesize responseRequestURL=_responseRequestURL - In the implementation block
@property (copy) NSString * responseRequestorID;                      //@synthesize responseRequestorID=_responseRequestorID - In the implementation block
@property (assign) long long contentVersion;                          //@synthesize contentVersion=_contentVersion - In the implementation block
@property (copy) NSString * contentHeaders;                           //@synthesize contentHeaders=_contentHeaders - In the implementation block
@property (copy) NSData * contentBody;                                //@synthesize contentBody=_contentBody - In the implementation block
@property (copy) NSString * responseContentHeaders;                   //@synthesize responseContentHeaders=_responseContentHeaders - In the implementation block
@property (copy) NSData * responseContentBody;                        //@synthesize responseContentBody=_responseContentBody - In the implementation block
@property (assign) long long responseContentVersion;                  //@synthesize responseContentVersion=_responseContentVersion - In the implementation block
@property (nonatomic,copy) NSData * pushToken; 
@property (nonatomic,copy) NSData * sessionToken;                     //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,copy) NSString * senderID;                       //@synthesize senderID=_senderID - In the implementation block
@property (nonatomic,copy) NSString * destinationID;                  //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,copy) NSString * anonymousSenderID;              //@synthesize anonymousSenderID=_anonymousSenderID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(NSNumber *)length;
-(void)setLength:(NSNumber *)arg1 ;
-(NSData *)signature;
-(NSString *)senderID;
-(void)setSenderID:(NSString *)arg1 ;
-(NSData *)pushToken;
-(void)setPushToken:(NSData *)arg1 ;
-(void)setContentVersion:(long long)arg1 ;
-(long long)contentVersion;
-(long long)command;
-(void)setSignature:(NSData *)arg1 ;
-(id)requiredKeys;
-(NSData *)sessionToken;
-(void)setSessionToken:(NSData *)arg1 ;
-(id)messageBody;
-(long long)responseCommand;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSString *)destinationID;
-(void)setDestinationID:(NSString *)arg1 ;
-(NSString *)responseAuthToken;
-(void)setResponseAuthToken:(NSString *)arg1 ;
-(NSString *)responseRequestorID;
-(void)setResponseRequestorID:(NSString *)arg1 ;
-(NSString *)contentHeaders;
-(void)setContentHeaders:(NSString *)arg1 ;
-(NSData *)responseContentBody;
-(void)setResponseContentBody:(NSData *)arg1 ;
-(void)setResponseContentVersion:(long long)arg1 ;
-(long long)responseContentVersion;
-(void)setResponseRequestURL:(NSString *)arg1 ;
-(void)setContentBody:(NSData *)arg1 ;
-(void)setResponseContentHeaders:(NSString *)arg1 ;
-(void)setAnonymousSenderID:(NSString *)arg1 ;
-(NSString *)responseRequestURL;
-(NSData *)contentBody;
-(NSString *)responseContentHeaders;
-(NSString *)anonymousSenderID;
@end

