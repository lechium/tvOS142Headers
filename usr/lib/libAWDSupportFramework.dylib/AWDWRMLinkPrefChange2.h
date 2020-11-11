/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWRMLinkPrefChange2 : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _count;
	unsigned _nCallActive;
	unsigned _nCallIdle;
	unsigned _nCelluarBadEcio;
	unsigned _nCelluarBadLQM;
	unsigned _nCelluarBadRSRP;
	unsigned _nCelluarBadSignal;
	unsigned _nCellularNotReady;
	unsigned _nData;
	unsigned _nHandoverNotPerformed;
	unsigned _nHandoverPerformed;
	unsigned _nHandoverUnknown;
	unsigned _nRunning;
	unsigned _nStationary;
	unsigned _nStatusUpdateDelayBin1;
	unsigned _nStatusUpdateDelayBin2;
	unsigned _nStatusUpdateDelayBin3;
	unsigned _nStatusUpdateDelayBin4;
	unsigned _nStatusUpdateDelayBin5;
	unsigned _nStatusUpdateDelayBin6;
	unsigned _nVehicular;
	unsigned _nVoice;
	unsigned _nWalking;
	unsigned _nWifiGood;
	SCD_Struct_AW34 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                               //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasNCallIdle; 
@property (assign,nonatomic) unsigned nCallIdle;                           //@synthesize nCallIdle=_nCallIdle - In the implementation block
@property (assign,nonatomic) BOOL hasNCallActive; 
@property (assign,nonatomic) unsigned nCallActive;                         //@synthesize nCallActive=_nCallActive - In the implementation block
@property (assign,nonatomic) BOOL hasNData; 
@property (assign,nonatomic) unsigned nData;                               //@synthesize nData=_nData - In the implementation block
@property (assign,nonatomic) BOOL hasNVoice; 
@property (assign,nonatomic) unsigned nVoice;                              //@synthesize nVoice=_nVoice - In the implementation block
@property (assign,nonatomic) BOOL hasNStationary; 
@property (assign,nonatomic) unsigned nStationary;                         //@synthesize nStationary=_nStationary - In the implementation block
@property (assign,nonatomic) BOOL hasNWalking; 
@property (assign,nonatomic) unsigned nWalking;                            //@synthesize nWalking=_nWalking - In the implementation block
@property (assign,nonatomic) BOOL hasNRunning; 
@property (assign,nonatomic) unsigned nRunning;                            //@synthesize nRunning=_nRunning - In the implementation block
@property (assign,nonatomic) BOOL hasNVehicular; 
@property (assign,nonatomic) unsigned nVehicular;                          //@synthesize nVehicular=_nVehicular - In the implementation block
@property (assign,nonatomic) BOOL hasNWifiGood; 
@property (assign,nonatomic) unsigned nWifiGood;                           //@synthesize nWifiGood=_nWifiGood - In the implementation block
@property (assign,nonatomic) BOOL hasNCellularNotReady; 
@property (assign,nonatomic) unsigned nCellularNotReady;                   //@synthesize nCellularNotReady=_nCellularNotReady - In the implementation block
@property (assign,nonatomic) BOOL hasNCelluarBadSignal; 
@property (assign,nonatomic) unsigned nCelluarBadSignal;                   //@synthesize nCelluarBadSignal=_nCelluarBadSignal - In the implementation block
@property (assign,nonatomic) BOOL hasNCelluarBadRSRP; 
@property (assign,nonatomic) unsigned nCelluarBadRSRP;                     //@synthesize nCelluarBadRSRP=_nCelluarBadRSRP - In the implementation block
@property (assign,nonatomic) BOOL hasNCelluarBadLQM; 
@property (assign,nonatomic) unsigned nCelluarBadLQM;                      //@synthesize nCelluarBadLQM=_nCelluarBadLQM - In the implementation block
@property (assign,nonatomic) BOOL hasNCelluarBadEcio; 
@property (assign,nonatomic) unsigned nCelluarBadEcio;                     //@synthesize nCelluarBadEcio=_nCelluarBadEcio - In the implementation block
@property (assign,nonatomic) BOOL hasNHandoverPerformed; 
@property (assign,nonatomic) unsigned nHandoverPerformed;                  //@synthesize nHandoverPerformed=_nHandoverPerformed - In the implementation block
@property (assign,nonatomic) BOOL hasNHandoverNotPerformed; 
@property (assign,nonatomic) unsigned nHandoverNotPerformed;               //@synthesize nHandoverNotPerformed=_nHandoverNotPerformed - In the implementation block
@property (assign,nonatomic) BOOL hasNHandoverUnknown; 
@property (assign,nonatomic) unsigned nHandoverUnknown;                    //@synthesize nHandoverUnknown=_nHandoverUnknown - In the implementation block
@property (assign,nonatomic) BOOL hasNStatusUpdateDelayBin1; 
@property (assign,nonatomic) unsigned nStatusUpdateDelayBin1;              //@synthesize nStatusUpdateDelayBin1=_nStatusUpdateDelayBin1 - In the implementation block
@property (assign,nonatomic) BOOL hasNStatusUpdateDelayBin2; 
@property (assign,nonatomic) unsigned nStatusUpdateDelayBin2;              //@synthesize nStatusUpdateDelayBin2=_nStatusUpdateDelayBin2 - In the implementation block
@property (assign,nonatomic) BOOL hasNStatusUpdateDelayBin3; 
@property (assign,nonatomic) unsigned nStatusUpdateDelayBin3;              //@synthesize nStatusUpdateDelayBin3=_nStatusUpdateDelayBin3 - In the implementation block
@property (assign,nonatomic) BOOL hasNStatusUpdateDelayBin4; 
@property (assign,nonatomic) unsigned nStatusUpdateDelayBin4;              //@synthesize nStatusUpdateDelayBin4=_nStatusUpdateDelayBin4 - In the implementation block
@property (assign,nonatomic) BOOL hasNStatusUpdateDelayBin5; 
@property (assign,nonatomic) unsigned nStatusUpdateDelayBin5;              //@synthesize nStatusUpdateDelayBin5=_nStatusUpdateDelayBin5 - In the implementation block
@property (assign,nonatomic) BOOL hasNStatusUpdateDelayBin6; 
@property (assign,nonatomic) unsigned nStatusUpdateDelayBin6;              //@synthesize nStatusUpdateDelayBin6=_nStatusUpdateDelayBin6 - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)count;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)setNCallIdle:(unsigned)arg1 ;
-(void)setHasNCallIdle:(BOOL)arg1 ;
-(BOOL)hasNCallIdle;
-(void)setNCallActive:(unsigned)arg1 ;
-(void)setHasNCallActive:(BOOL)arg1 ;
-(BOOL)hasNCallActive;
-(void)setNData:(unsigned)arg1 ;
-(void)setHasNData:(BOOL)arg1 ;
-(BOOL)hasNData;
-(void)setNVoice:(unsigned)arg1 ;
-(void)setHasNVoice:(BOOL)arg1 ;
-(BOOL)hasNVoice;
-(void)setNStationary:(unsigned)arg1 ;
-(void)setHasNStationary:(BOOL)arg1 ;
-(BOOL)hasNStationary;
-(void)setNWalking:(unsigned)arg1 ;
-(void)setHasNWalking:(BOOL)arg1 ;
-(BOOL)hasNWalking;
-(void)setNRunning:(unsigned)arg1 ;
-(void)setHasNRunning:(BOOL)arg1 ;
-(BOOL)hasNRunning;
-(void)setNVehicular:(unsigned)arg1 ;
-(void)setHasNVehicular:(BOOL)arg1 ;
-(BOOL)hasNVehicular;
-(void)setNStatusUpdateDelayBin1:(unsigned)arg1 ;
-(void)setHasNStatusUpdateDelayBin1:(BOOL)arg1 ;
-(BOOL)hasNStatusUpdateDelayBin1;
-(void)setNStatusUpdateDelayBin2:(unsigned)arg1 ;
-(void)setHasNStatusUpdateDelayBin2:(BOOL)arg1 ;
-(BOOL)hasNStatusUpdateDelayBin2;
-(void)setNStatusUpdateDelayBin3:(unsigned)arg1 ;
-(void)setHasNStatusUpdateDelayBin3:(BOOL)arg1 ;
-(BOOL)hasNStatusUpdateDelayBin3;
-(void)setNStatusUpdateDelayBin4:(unsigned)arg1 ;
-(void)setHasNStatusUpdateDelayBin4:(BOOL)arg1 ;
-(BOOL)hasNStatusUpdateDelayBin4;
-(void)setNStatusUpdateDelayBin5:(unsigned)arg1 ;
-(void)setHasNStatusUpdateDelayBin5:(BOOL)arg1 ;
-(BOOL)hasNStatusUpdateDelayBin5;
-(void)setNStatusUpdateDelayBin6:(unsigned)arg1 ;
-(void)setHasNStatusUpdateDelayBin6:(BOOL)arg1 ;
-(BOOL)hasNStatusUpdateDelayBin6;
-(unsigned)nCallIdle;
-(unsigned)nCallActive;
-(unsigned)nData;
-(unsigned)nVoice;
-(unsigned)nStationary;
-(unsigned)nWalking;
-(unsigned)nRunning;
-(unsigned)nVehicular;
-(unsigned)nStatusUpdateDelayBin1;
-(unsigned)nStatusUpdateDelayBin2;
-(unsigned)nStatusUpdateDelayBin3;
-(unsigned)nStatusUpdateDelayBin4;
-(unsigned)nStatusUpdateDelayBin5;
-(unsigned)nStatusUpdateDelayBin6;
-(void)setNWifiGood:(unsigned)arg1 ;
-(void)setHasNWifiGood:(BOOL)arg1 ;
-(BOOL)hasNWifiGood;
-(void)setNCellularNotReady:(unsigned)arg1 ;
-(void)setHasNCellularNotReady:(BOOL)arg1 ;
-(BOOL)hasNCellularNotReady;
-(void)setNCelluarBadSignal:(unsigned)arg1 ;
-(void)setHasNCelluarBadSignal:(BOOL)arg1 ;
-(BOOL)hasNCelluarBadSignal;
-(void)setNCelluarBadRSRP:(unsigned)arg1 ;
-(void)setHasNCelluarBadRSRP:(BOOL)arg1 ;
-(BOOL)hasNCelluarBadRSRP;
-(void)setNCelluarBadLQM:(unsigned)arg1 ;
-(void)setHasNCelluarBadLQM:(BOOL)arg1 ;
-(BOOL)hasNCelluarBadLQM;
-(void)setNCelluarBadEcio:(unsigned)arg1 ;
-(void)setHasNCelluarBadEcio:(BOOL)arg1 ;
-(BOOL)hasNCelluarBadEcio;
-(void)setNHandoverPerformed:(unsigned)arg1 ;
-(void)setHasNHandoverPerformed:(BOOL)arg1 ;
-(BOOL)hasNHandoverPerformed;
-(void)setNHandoverNotPerformed:(unsigned)arg1 ;
-(void)setHasNHandoverNotPerformed:(BOOL)arg1 ;
-(BOOL)hasNHandoverNotPerformed;
-(void)setNHandoverUnknown:(unsigned)arg1 ;
-(void)setHasNHandoverUnknown:(BOOL)arg1 ;
-(BOOL)hasNHandoverUnknown;
-(unsigned)nWifiGood;
-(unsigned)nCellularNotReady;
-(unsigned)nCelluarBadSignal;
-(unsigned)nCelluarBadRSRP;
-(unsigned)nCelluarBadLQM;
-(unsigned)nCelluarBadEcio;
-(unsigned)nHandoverPerformed;
-(unsigned)nHandoverNotPerformed;
-(unsigned)nHandoverUnknown;
@end

