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

@class NSString;

@interface AWDWRMWiFiCallingEnd : PBCodable <NSCopying> {

	long long _lTECTRSRP;
	long long _lTERSRP;
	unsigned long long _timestamp;
	long long _wiFiRSSI;
	long long _wiFiSINR;
	unsigned _bBAudioErasures;
	unsigned _bBAudioPacketLoss;
	unsigned _bSSLoad;
	unsigned _beaconRate;
	NSString* _callEndReason;
	NSString* _callId;
	unsigned _hOBool;
	unsigned _lTEDataLQM;
	int _lTESINR;
	unsigned _lTETxPower;
	unsigned _lTEVoiceLQM;
	unsigned _latteDejitterBufferUnderflow;
	unsigned _latteErasures;
	unsigned _latteNominalJitterBufferSize;
	unsigned _latteRTPPacketLoss;
	unsigned _sessionId;
	unsigned _signalBar;
	NSString* _wRMRecommendedRAT;
	unsigned _wiFiRxRetry;
	unsigned _wiFiTxPER;
	BOOL _aTMRegistrationState;
	BOOL _captiveNetwork;
	BOOL _hOCapability;
	BOOL _iPSecTunnelStatus;
	BOOL _iWLANStatus;
	BOOL _lTEQoSAvailable;
	BOOL _wOWEnabled;
	BOOL _wiFiBSSIDChange;
	BOOL _wiFiPreferred;
	SCD_Struct_AW40 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWiFiRSSI; 
@property (assign,nonatomic) long long wiFiRSSI;                                 //@synthesize wiFiRSSI=_wiFiRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasWiFiTxPER; 
@property (assign,nonatomic) unsigned wiFiTxPER;                                 //@synthesize wiFiTxPER=_wiFiTxPER - In the implementation block
@property (assign,nonatomic) BOOL hasWiFiSINR; 
@property (assign,nonatomic) long long wiFiSINR;                                 //@synthesize wiFiSINR=_wiFiSINR - In the implementation block
@property (assign,nonatomic) BOOL hasWiFiBSSIDChange; 
@property (assign,nonatomic) BOOL wiFiBSSIDChange;                               //@synthesize wiFiBSSIDChange=_wiFiBSSIDChange - In the implementation block
@property (assign,nonatomic) BOOL hasBeaconRate; 
@property (assign,nonatomic) unsigned beaconRate;                                //@synthesize beaconRate=_beaconRate - In the implementation block
@property (assign,nonatomic) BOOL hasCaptiveNetwork; 
@property (assign,nonatomic) BOOL captiveNetwork;                                //@synthesize captiveNetwork=_captiveNetwork - In the implementation block
@property (assign,nonatomic) BOOL hasWOWEnabled; 
@property (assign,nonatomic) BOOL wOWEnabled;                                    //@synthesize wOWEnabled=_wOWEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasWiFiRxRetry; 
@property (assign,nonatomic) unsigned wiFiRxRetry;                               //@synthesize wiFiRxRetry=_wiFiRxRetry - In the implementation block
@property (assign,nonatomic) BOOL hasLTEDataLQM; 
@property (assign,nonatomic) unsigned lTEDataLQM;                                //@synthesize lTEDataLQM=_lTEDataLQM - In the implementation block
@property (assign,nonatomic) BOOL hasLTETxPower; 
@property (assign,nonatomic) unsigned lTETxPower;                                //@synthesize lTETxPower=_lTETxPower - In the implementation block
@property (assign,nonatomic) BOOL hasLTEQoSAvailable; 
@property (assign,nonatomic) BOOL lTEQoSAvailable;                               //@synthesize lTEQoSAvailable=_lTEQoSAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasBSSLoad; 
@property (assign,nonatomic) unsigned bSSLoad;                                   //@synthesize bSSLoad=_bSSLoad - In the implementation block
@property (assign,nonatomic) BOOL hasLTEVoiceLQM; 
@property (assign,nonatomic) unsigned lTEVoiceLQM;                               //@synthesize lTEVoiceLQM=_lTEVoiceLQM - In the implementation block
@property (assign,nonatomic) BOOL hasLTESINR; 
@property (assign,nonatomic) int lTESINR;                                        //@synthesize lTESINR=_lTESINR - In the implementation block
@property (assign,nonatomic) BOOL hasLTERSRP; 
@property (assign,nonatomic) long long lTERSRP;                                  //@synthesize lTERSRP=_lTERSRP - In the implementation block
@property (assign,nonatomic) BOOL hasLTECTRSRP; 
@property (assign,nonatomic) long long lTECTRSRP;                                //@synthesize lTECTRSRP=_lTECTRSRP - In the implementation block
@property (assign,nonatomic) BOOL hasSignalBar; 
@property (assign,nonatomic) unsigned signalBar;                                 //@synthesize signalBar=_signalBar - In the implementation block
@property (assign,nonatomic) BOOL hasLatteNominalJitterBufferSize; 
@property (assign,nonatomic) unsigned latteNominalJitterBufferSize;              //@synthesize latteNominalJitterBufferSize=_latteNominalJitterBufferSize - In the implementation block
@property (assign,nonatomic) BOOL hasLatteDejitterBufferUnderflow; 
@property (assign,nonatomic) unsigned latteDejitterBufferUnderflow;              //@synthesize latteDejitterBufferUnderflow=_latteDejitterBufferUnderflow - In the implementation block
@property (assign,nonatomic) BOOL hasLatteRTPPacketLoss; 
@property (assign,nonatomic) unsigned latteRTPPacketLoss;                        //@synthesize latteRTPPacketLoss=_latteRTPPacketLoss - In the implementation block
@property (assign,nonatomic) BOOL hasLatteErasures; 
@property (assign,nonatomic) unsigned latteErasures;                             //@synthesize latteErasures=_latteErasures - In the implementation block
@property (assign,nonatomic) BOOL hasHOCapability; 
@property (assign,nonatomic) BOOL hOCapability;                                  //@synthesize hOCapability=_hOCapability - In the implementation block
@property (assign,nonatomic) BOOL hasHOBool; 
@property (assign,nonatomic) unsigned hOBool;                                    //@synthesize hOBool=_hOBool - In the implementation block
@property (nonatomic,readonly) BOOL hasWRMRecommendedRAT; 
@property (nonatomic,retain) NSString * wRMRecommendedRAT;                       //@synthesize wRMRecommendedRAT=_wRMRecommendedRAT - In the implementation block
@property (assign,nonatomic) BOOL hasIWLANStatus; 
@property (assign,nonatomic) BOOL iWLANStatus;                                   //@synthesize iWLANStatus=_iWLANStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasCallId; 
@property (nonatomic,retain) NSString * callId;                                  //@synthesize callId=_callId - In the implementation block
@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) unsigned sessionId;                                 //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasIPSecTunnelStatus; 
@property (assign,nonatomic) BOOL iPSecTunnelStatus;                             //@synthesize iPSecTunnelStatus=_iPSecTunnelStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasCallEndReason; 
@property (nonatomic,retain) NSString * callEndReason;                           //@synthesize callEndReason=_callEndReason - In the implementation block
@property (assign,nonatomic) BOOL hasATMRegistrationState; 
@property (assign,nonatomic) BOOL aTMRegistrationState;                          //@synthesize aTMRegistrationState=_aTMRegistrationState - In the implementation block
@property (assign,nonatomic) BOOL hasBBAudioPacketLoss; 
@property (assign,nonatomic) unsigned bBAudioPacketLoss;                         //@synthesize bBAudioPacketLoss=_bBAudioPacketLoss - In the implementation block
@property (assign,nonatomic) BOOL hasBBAudioErasures; 
@property (assign,nonatomic) unsigned bBAudioErasures;                           //@synthesize bBAudioErasures=_bBAudioErasures - In the implementation block
@property (assign,nonatomic) BOOL hasWiFiPreferred; 
@property (assign,nonatomic) BOOL wiFiPreferred;                                 //@synthesize wiFiPreferred=_wiFiPreferred - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)callId;
-(void)setCallId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setSessionId:(unsigned)arg1 ;
-(BOOL)hasSessionId;
-(unsigned)sessionId;
-(void)setSignalBar:(unsigned)arg1 ;
-(void)setHasSignalBar:(BOOL)arg1 ;
-(BOOL)hasSignalBar;
-(unsigned)signalBar;
-(void)setWRMRecommendedRAT:(NSString *)arg1 ;
-(void)setCallEndReason:(NSString *)arg1 ;
-(void)setWiFiRSSI:(long long)arg1 ;
-(void)setHasWiFiRSSI:(BOOL)arg1 ;
-(BOOL)hasWiFiRSSI;
-(void)setWiFiTxPER:(unsigned)arg1 ;
-(void)setHasWiFiTxPER:(BOOL)arg1 ;
-(BOOL)hasWiFiTxPER;
-(void)setWiFiSINR:(long long)arg1 ;
-(void)setHasWiFiSINR:(BOOL)arg1 ;
-(BOOL)hasWiFiSINR;
-(void)setWiFiBSSIDChange:(BOOL)arg1 ;
-(void)setHasWiFiBSSIDChange:(BOOL)arg1 ;
-(BOOL)hasWiFiBSSIDChange;
-(void)setBeaconRate:(unsigned)arg1 ;
-(void)setHasBeaconRate:(BOOL)arg1 ;
-(BOOL)hasBeaconRate;
-(void)setCaptiveNetwork:(BOOL)arg1 ;
-(void)setHasCaptiveNetwork:(BOOL)arg1 ;
-(BOOL)hasCaptiveNetwork;
-(void)setWOWEnabled:(BOOL)arg1 ;
-(void)setHasWOWEnabled:(BOOL)arg1 ;
-(BOOL)hasWOWEnabled;
-(void)setWiFiRxRetry:(unsigned)arg1 ;
-(void)setHasWiFiRxRetry:(BOOL)arg1 ;
-(BOOL)hasWiFiRxRetry;
-(void)setLTEDataLQM:(unsigned)arg1 ;
-(void)setHasLTEDataLQM:(BOOL)arg1 ;
-(BOOL)hasLTEDataLQM;
-(void)setLTETxPower:(unsigned)arg1 ;
-(void)setHasLTETxPower:(BOOL)arg1 ;
-(BOOL)hasLTETxPower;
-(void)setLTEQoSAvailable:(BOOL)arg1 ;
-(void)setHasLTEQoSAvailable:(BOOL)arg1 ;
-(BOOL)hasLTEQoSAvailable;
-(void)setBSSLoad:(unsigned)arg1 ;
-(void)setHasBSSLoad:(BOOL)arg1 ;
-(BOOL)hasBSSLoad;
-(void)setLTEVoiceLQM:(unsigned)arg1 ;
-(void)setHasLTEVoiceLQM:(BOOL)arg1 ;
-(BOOL)hasLTEVoiceLQM;
-(void)setLTESINR:(int)arg1 ;
-(void)setHasLTESINR:(BOOL)arg1 ;
-(BOOL)hasLTESINR;
-(void)setLTERSRP:(long long)arg1 ;
-(void)setHasLTERSRP:(BOOL)arg1 ;
-(BOOL)hasLTERSRP;
-(void)setLTECTRSRP:(long long)arg1 ;
-(void)setHasLTECTRSRP:(BOOL)arg1 ;
-(BOOL)hasLTECTRSRP;
-(void)setLatteNominalJitterBufferSize:(unsigned)arg1 ;
-(void)setHasLatteNominalJitterBufferSize:(BOOL)arg1 ;
-(BOOL)hasLatteNominalJitterBufferSize;
-(void)setLatteDejitterBufferUnderflow:(unsigned)arg1 ;
-(void)setHasLatteDejitterBufferUnderflow:(BOOL)arg1 ;
-(BOOL)hasLatteDejitterBufferUnderflow;
-(void)setLatteRTPPacketLoss:(unsigned)arg1 ;
-(void)setHasLatteRTPPacketLoss:(BOOL)arg1 ;
-(BOOL)hasLatteRTPPacketLoss;
-(void)setLatteErasures:(unsigned)arg1 ;
-(void)setHasLatteErasures:(BOOL)arg1 ;
-(BOOL)hasLatteErasures;
-(void)setHOCapability:(BOOL)arg1 ;
-(void)setHasHOCapability:(BOOL)arg1 ;
-(BOOL)hasHOCapability;
-(void)setHOBool:(unsigned)arg1 ;
-(void)setHasHOBool:(BOOL)arg1 ;
-(BOOL)hasHOBool;
-(BOOL)hasWRMRecommendedRAT;
-(void)setIWLANStatus:(BOOL)arg1 ;
-(void)setHasIWLANStatus:(BOOL)arg1 ;
-(BOOL)hasIWLANStatus;
-(BOOL)hasCallId;
-(void)setHasSessionId:(BOOL)arg1 ;
-(void)setIPSecTunnelStatus:(BOOL)arg1 ;
-(void)setHasIPSecTunnelStatus:(BOOL)arg1 ;
-(BOOL)hasIPSecTunnelStatus;
-(BOOL)hasCallEndReason;
-(void)setATMRegistrationState:(BOOL)arg1 ;
-(void)setHasATMRegistrationState:(BOOL)arg1 ;
-(BOOL)hasATMRegistrationState;
-(void)setBBAudioPacketLoss:(unsigned)arg1 ;
-(void)setHasBBAudioPacketLoss:(BOOL)arg1 ;
-(BOOL)hasBBAudioPacketLoss;
-(void)setBBAudioErasures:(unsigned)arg1 ;
-(void)setHasBBAudioErasures:(BOOL)arg1 ;
-(BOOL)hasBBAudioErasures;
-(void)setWiFiPreferred:(BOOL)arg1 ;
-(void)setHasWiFiPreferred:(BOOL)arg1 ;
-(BOOL)hasWiFiPreferred;
-(long long)wiFiRSSI;
-(unsigned)wiFiTxPER;
-(long long)wiFiSINR;
-(BOOL)wiFiBSSIDChange;
-(unsigned)beaconRate;
-(BOOL)captiveNetwork;
-(BOOL)wOWEnabled;
-(unsigned)wiFiRxRetry;
-(unsigned)lTEDataLQM;
-(unsigned)lTETxPower;
-(BOOL)lTEQoSAvailable;
-(unsigned)bSSLoad;
-(unsigned)lTEVoiceLQM;
-(int)lTESINR;
-(long long)lTERSRP;
-(long long)lTECTRSRP;
-(unsigned)latteNominalJitterBufferSize;
-(unsigned)latteDejitterBufferUnderflow;
-(unsigned)latteRTPPacketLoss;
-(unsigned)latteErasures;
-(BOOL)hOCapability;
-(unsigned)hOBool;
-(NSString *)wRMRecommendedRAT;
-(BOOL)iWLANStatus;
-(BOOL)iPSecTunnelStatus;
-(NSString *)callEndReason;
-(BOOL)aTMRegistrationState;
-(unsigned)bBAudioPacketLoss;
-(unsigned)bBAudioErasures;
-(BOOL)wiFiPreferred;
@end

