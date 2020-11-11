/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsNetworkAnalyticsHistorical : PBCodable <NSCopying> {

	unsigned long long _bytesIn;
	unsigned long long _bytesOut;
	unsigned long long _connAttempts;
	unsigned long long _connSuccess;
	unsigned long long _dnsCompleteFailures;
	unsigned long long _dnsPartialFailures;
	unsigned long long _epochs;
	unsigned long long _faultyStaySecs;
	unsigned long long _packetsIn;
	unsigned long long _packetsOut;
	unsigned long long _secsSinceLastTrimmed;
	unsigned long long _timestamp;
	unsigned long long _totalStaySecs;
	NSString* _identifier;
	int _networkType;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                                      //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) BOOL hasEpochs; 
@property (assign,nonatomic) unsigned long long epochs;                            //@synthesize epochs=_epochs - In the implementation block
@property (assign,nonatomic) BOOL hasTotalStaySecs; 
@property (assign,nonatomic) unsigned long long totalStaySecs;                     //@synthesize totalStaySecs=_totalStaySecs - In the implementation block
@property (assign,nonatomic) BOOL hasFaultyStaySecs; 
@property (assign,nonatomic) unsigned long long faultyStaySecs;                    //@synthesize faultyStaySecs=_faultyStaySecs - In the implementation block
@property (assign,nonatomic) BOOL hasConnAttempts; 
@property (assign,nonatomic) unsigned long long connAttempts;                      //@synthesize connAttempts=_connAttempts - In the implementation block
@property (assign,nonatomic) BOOL hasConnSuccess; 
@property (assign,nonatomic) unsigned long long connSuccess;                       //@synthesize connSuccess=_connSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsIn; 
@property (assign,nonatomic) unsigned long long packetsIn;                         //@synthesize packetsIn=_packetsIn - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsOut; 
@property (assign,nonatomic) unsigned long long packetsOut;                        //@synthesize packetsOut=_packetsOut - In the implementation block
@property (assign,nonatomic) BOOL hasBytesIn; 
@property (assign,nonatomic) unsigned long long bytesIn;                           //@synthesize bytesIn=_bytesIn - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOut; 
@property (assign,nonatomic) unsigned long long bytesOut;                          //@synthesize bytesOut=_bytesOut - In the implementation block
@property (assign,nonatomic) BOOL hasSecsSinceLastTrimmed; 
@property (assign,nonatomic) unsigned long long secsSinceLastTrimmed;              //@synthesize secsSinceLastTrimmed=_secsSinceLastTrimmed - In the implementation block
@property (assign,nonatomic) BOOL hasDnsPartialFailures; 
@property (assign,nonatomic) unsigned long long dnsPartialFailures;                //@synthesize dnsPartialFailures=_dnsPartialFailures - In the implementation block
@property (assign,nonatomic) BOOL hasDnsCompleteFailures; 
@property (assign,nonatomic) unsigned long long dnsCompleteFailures;               //@synthesize dnsCompleteFailures=_dnsCompleteFailures - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setBytesIn:(unsigned long long)arg1 ;
-(void)setHasBytesIn:(BOOL)arg1 ;
-(BOOL)hasBytesIn;
-(void)setBytesOut:(unsigned long long)arg1 ;
-(void)setHasBytesOut:(BOOL)arg1 ;
-(BOOL)hasBytesOut;
-(unsigned long long)bytesIn;
-(unsigned long long)bytesOut;
-(void)setPacketsIn:(unsigned long long)arg1 ;
-(void)setHasPacketsIn:(BOOL)arg1 ;
-(BOOL)hasPacketsIn;
-(void)setPacketsOut:(unsigned long long)arg1 ;
-(void)setHasPacketsOut:(BOOL)arg1 ;
-(BOOL)hasPacketsOut;
-(unsigned long long)packetsIn;
-(unsigned long long)packetsOut;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(BOOL)hasIdentifier;
-(unsigned long long)epochs;
-(void)setConnAttempts:(unsigned long long)arg1 ;
-(unsigned long long)connAttempts;
-(void)setEpochs:(unsigned long long)arg1 ;
-(void)setHasEpochs:(BOOL)arg1 ;
-(BOOL)hasEpochs;
-(void)setTotalStaySecs:(unsigned long long)arg1 ;
-(void)setHasTotalStaySecs:(BOOL)arg1 ;
-(BOOL)hasTotalStaySecs;
-(void)setFaultyStaySecs:(unsigned long long)arg1 ;
-(void)setHasFaultyStaySecs:(BOOL)arg1 ;
-(BOOL)hasFaultyStaySecs;
-(void)setHasConnAttempts:(BOOL)arg1 ;
-(BOOL)hasConnAttempts;
-(void)setConnSuccess:(unsigned long long)arg1 ;
-(void)setHasConnSuccess:(BOOL)arg1 ;
-(BOOL)hasConnSuccess;
-(void)setSecsSinceLastTrimmed:(unsigned long long)arg1 ;
-(void)setHasSecsSinceLastTrimmed:(BOOL)arg1 ;
-(BOOL)hasSecsSinceLastTrimmed;
-(void)setDnsPartialFailures:(unsigned long long)arg1 ;
-(void)setHasDnsPartialFailures:(BOOL)arg1 ;
-(BOOL)hasDnsPartialFailures;
-(void)setDnsCompleteFailures:(unsigned long long)arg1 ;
-(void)setHasDnsCompleteFailures:(BOOL)arg1 ;
-(BOOL)hasDnsCompleteFailures;
-(unsigned long long)totalStaySecs;
-(unsigned long long)faultyStaySecs;
-(unsigned long long)connSuccess;
-(unsigned long long)secsSinceLastTrimmed;
-(unsigned long long)dnsPartialFailures;
-(unsigned long long)dnsCompleteFailures;
@end

