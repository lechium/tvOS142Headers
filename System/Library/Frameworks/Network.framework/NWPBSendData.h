/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NWPBSendData : PBCodable <NSCopying> {

	NSString* _clientUUID;
	NSData* _messageData;
	unsigned _receiveWindow;
	SCD_Struct_NW21 _has;

}

@property (nonatomic,readonly) BOOL hasClientUUID; 
@property (nonatomic,retain) NSString * clientUUID;               //@synthesize clientUUID=_clientUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageData; 
@property (nonatomic,retain) NSData * messageData;                //@synthesize messageData=_messageData - In the implementation block
@property (assign,nonatomic) BOOL hasReceiveWindow; 
@property (assign,nonatomic) unsigned receiveWindow;              //@synthesize receiveWindow=_receiveWindow - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)messageData;
-(void)setMessageData:(NSData *)arg1 ;
-(BOOL)hasMessageData;
-(NSString *)clientUUID;
-(BOOL)hasClientUUID;
-(void)setClientUUID:(NSString *)arg1 ;
-(void)setReceiveWindow:(unsigned)arg1 ;
-(void)setHasReceiveWindow:(BOOL)arg1 ;
-(BOOL)hasReceiveWindow;
-(unsigned)receiveWindow;
@end

