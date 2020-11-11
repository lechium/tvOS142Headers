/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, WiFiAnalyticsAWDWiFiNWActivityTxCompletions, NSString;

@interface WiFiAnalyticsAWDWiFiNWActivityPeerStats : PBCodable <NSCopying> {

	NSMutableArray* _acCompletions;
	NSMutableArray* _bytes;
	NSMutableArray* _ccas;
	WiFiAnalyticsAWDWiFiNWActivityTxCompletions* _completions;
	NSString* _hashID;
	NSMutableArray* _packets;
	int _role;
	NSMutableArray* _rssis;
	NSMutableArray* _snrs;
	NSMutableArray* _txLatencyBEs;
	NSMutableArray* _txLatencyBKs;
	NSMutableArray* _txLatencyVIs;
	NSMutableArray* _txLatencyVOs;
	SCD_Struct_Wi1 _has;

}

@property (assign,nonatomic) BOOL hasRole; 
@property (assign,nonatomic) int role;                                                               //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) BOOL hasHashID; 
@property (nonatomic,retain) NSString * hashID;                                                      //@synthesize hashID=_hashID - In the implementation block
@property (nonatomic,retain) NSMutableArray * rssis;                                                 //@synthesize rssis=_rssis - In the implementation block
@property (nonatomic,retain) NSMutableArray * ccas;                                                  //@synthesize ccas=_ccas - In the implementation block
@property (nonatomic,retain) NSMutableArray * snrs;                                                  //@synthesize snrs=_snrs - In the implementation block
@property (nonatomic,retain) NSMutableArray * packets;                                               //@synthesize packets=_packets - In the implementation block
@property (nonatomic,retain) NSMutableArray * bytes;                                                 //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyBKs;                                          //@synthesize txLatencyBKs=_txLatencyBKs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyBEs;                                          //@synthesize txLatencyBEs=_txLatencyBEs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyVOs;                                          //@synthesize txLatencyVOs=_txLatencyVOs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyVIs;                                          //@synthesize txLatencyVIs=_txLatencyVIs - In the implementation block
@property (nonatomic,readonly) BOOL hasCompletions; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityTxCompletions * completions;              //@synthesize completions=_completions - In the implementation block
@property (nonatomic,retain) NSMutableArray * acCompletions;                                         //@synthesize acCompletions=_acCompletions - In the implementation block
+(Class)packetsType;
+(Class)bytesType;
+(Class)rssiType;
+(Class)ccaType;
+(Class)snrType;
+(Class)txLatencyBKType;
+(Class)txLatencyBEType;
+(Class)txLatencyVOType;
+(Class)txLatencyVIType;
+(Class)acCompletionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSMutableArray *)bytes;
-(id)bytesAtIndex:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPackets:(NSMutableArray *)arg1 ;
-(void)setBytes:(NSMutableArray *)arg1 ;
-(void)addPackets:(id)arg1 ;
-(void)addBytes:(id)arg1 ;
-(unsigned long long)packetsCount;
-(void)clearPackets;
-(id)packetsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)bytesCount;
-(void)clearBytes;
-(int)role;
-(void)setRole:(int)arg1 ;
-(void)setHasRole:(BOOL)arg1 ;
-(BOOL)hasRole;
-(id)roleAsString:(int)arg1 ;
-(int)StringAsRole:(id)arg1 ;
-(NSMutableArray *)packets;
-(void)setHashID:(NSString *)arg1 ;
-(void)setRssis:(NSMutableArray *)arg1 ;
-(void)setCcas:(NSMutableArray *)arg1 ;
-(void)setSnrs:(NSMutableArray *)arg1 ;
-(void)setTxLatencyBKs:(NSMutableArray *)arg1 ;
-(void)setTxLatencyBEs:(NSMutableArray *)arg1 ;
-(void)setTxLatencyVOs:(NSMutableArray *)arg1 ;
-(void)setTxLatencyVIs:(NSMutableArray *)arg1 ;
-(void)setCompletions:(WiFiAnalyticsAWDWiFiNWActivityTxCompletions *)arg1 ;
-(void)setAcCompletions:(NSMutableArray *)arg1 ;
-(void)addRssi:(id)arg1 ;
-(void)addCca:(id)arg1 ;
-(void)addSnr:(id)arg1 ;
-(void)addTxLatencyBK:(id)arg1 ;
-(void)addTxLatencyBE:(id)arg1 ;
-(void)addTxLatencyVO:(id)arg1 ;
-(void)addTxLatencyVI:(id)arg1 ;
-(void)addAcCompletions:(id)arg1 ;
-(unsigned long long)rssisCount;
-(void)clearRssis;
-(id)rssiAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)ccasCount;
-(void)clearCcas;
-(id)ccaAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)snrsCount;
-(void)clearSnrs;
-(id)snrAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txLatencyBKsCount;
-(void)clearTxLatencyBKs;
-(id)txLatencyBKAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txLatencyBEsCount;
-(void)clearTxLatencyBEs;
-(id)txLatencyBEAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txLatencyVOsCount;
-(void)clearTxLatencyVOs;
-(id)txLatencyVOAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txLatencyVIsCount;
-(void)clearTxLatencyVIs;
-(id)txLatencyVIAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)acCompletionsCount;
-(void)clearAcCompletions;
-(id)acCompletionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasHashID;
-(BOOL)hasCompletions;
-(NSString *)hashID;
-(NSMutableArray *)rssis;
-(NSMutableArray *)ccas;
-(NSMutableArray *)snrs;
-(NSMutableArray *)txLatencyBKs;
-(NSMutableArray *)txLatencyBEs;
-(NSMutableArray *)txLatencyVOs;
-(NSMutableArray *)txLatencyVIs;
-(WiFiAnalyticsAWDWiFiNWActivityTxCompletions *)completions;
-(NSMutableArray *)acCompletions;
@end

