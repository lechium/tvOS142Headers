/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDPushReceived : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _dualChannelState;
	NSString* _guid;
	unsigned _isFromStorage;
	int _linkQuality;
	unsigned _payloadSize;
	unsigned _receiveOffset;
	NSString* _topic;
	int _wakeStatus;
	SCD_Struct_AW12 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                           //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasReceiveOffset; 
@property (assign,nonatomic) unsigned receiveOffset;                    //@synthesize receiveOffset=_receiveOffset - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadSize; 
@property (assign,nonatomic) unsigned payloadSize;                      //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromStorage; 
@property (assign,nonatomic) unsigned isFromStorage;                    //@synthesize isFromStorage=_isFromStorage - In the implementation block
@property (assign,nonatomic) BOOL hasDualChannelState; 
@property (assign,nonatomic) unsigned dualChannelState;                 //@synthesize dualChannelState=_dualChannelState - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                          //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic) BOOL hasWakeStatus; 
@property (assign,nonatomic) int wakeStatus;                            //@synthesize wakeStatus=_wakeStatus - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)setTopic:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)linkQuality;
-(void)setLinkQuality:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)topic;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(unsigned)connectionType;
-(void)setGuid:(NSString *)arg1 ;
-(BOOL)hasGuid;
-(NSString *)guid;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(void)setPayloadSize:(unsigned)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(unsigned)payloadSize;
-(BOOL)hasTopic;
-(void)setDualChannelState:(unsigned)arg1 ;
-(void)setHasDualChannelState:(BOOL)arg1 ;
-(BOOL)hasDualChannelState;
-(unsigned)dualChannelState;
-(void)setReceiveOffset:(unsigned)arg1 ;
-(void)setHasReceiveOffset:(BOOL)arg1 ;
-(BOOL)hasReceiveOffset;
-(void)setIsFromStorage:(unsigned)arg1 ;
-(void)setHasIsFromStorage:(BOOL)arg1 ;
-(BOOL)hasIsFromStorage;
-(int)wakeStatus;
-(void)setWakeStatus:(int)arg1 ;
-(void)setHasWakeStatus:(BOOL)arg1 ;
-(BOOL)hasWakeStatus;
-(id)wakeStatusAsString:(int)arg1 ;
-(int)StringAsWakeStatus:(id)arg1 ;
-(unsigned)receiveOffset;
-(unsigned)isFromStorage;
@end

