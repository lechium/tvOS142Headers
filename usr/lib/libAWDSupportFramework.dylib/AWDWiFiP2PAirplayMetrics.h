/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDWiFiP2PAirplayMetrics : PBCodable <NSCopying> {

	unsigned long long _rxBytes;
	unsigned long long _timestamp;
	unsigned long long _txBytes;
	NSMutableArray* _avgCCAPeerInfraChannels;
	NSMutableArray* _avgCCASelfInfraChannels;
	NSMutableArray* _avgCCASocialChannels;
	unsigned _awdlVersion;
	unsigned _clientModeDuration;
	unsigned _infraDisconnectedCount;
	unsigned _missingAWStartEventCount;
	unsigned _peerInfraChannel;
	NSMutableArray* _peerRSSIs;
	unsigned _psfEnabledCount;
	unsigned _routablePeerCount;
	unsigned _selfInfraChannel;
	unsigned _senderPlatform;
	unsigned _sequenceNumberNotUpdatedCount;
	unsigned _serverModeDuration;
	unsigned _splitModeDuration;
	int _startingRSSI;
	unsigned _totalDuration;
	unsigned _totalPeerCount;
	BOOL _csaDuringDfspMode;
	BOOL _csaToDfsChannel;
	BOOL _dfsProxyMode;
	BOOL _inRetroMode;
	BOOL _peerIsSDB;
	BOOL _selfIsSDB;
	SCD_Struct_AW41 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDuration; 
@property (assign,nonatomic) unsigned totalDuration;                                //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) BOOL hasServerModeDuration; 
@property (assign,nonatomic) unsigned serverModeDuration;                           //@synthesize serverModeDuration=_serverModeDuration - In the implementation block
@property (assign,nonatomic) BOOL hasClientModeDuration; 
@property (assign,nonatomic) unsigned clientModeDuration;                           //@synthesize clientModeDuration=_clientModeDuration - In the implementation block
@property (assign,nonatomic) BOOL hasSplitModeDuration; 
@property (assign,nonatomic) unsigned splitModeDuration;                            //@synthesize splitModeDuration=_splitModeDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTxBytes; 
@property (assign,nonatomic) unsigned long long txBytes;                            //@synthesize txBytes=_txBytes - In the implementation block
@property (assign,nonatomic) BOOL hasRxBytes; 
@property (assign,nonatomic) unsigned long long rxBytes;                            //@synthesize rxBytes=_rxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasStartingRSSI; 
@property (assign,nonatomic) int startingRSSI;                                      //@synthesize startingRSSI=_startingRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasAwdlVersion; 
@property (assign,nonatomic) unsigned awdlVersion;                                  //@synthesize awdlVersion=_awdlVersion - In the implementation block
@property (assign,nonatomic) BOOL hasTotalPeerCount; 
@property (assign,nonatomic) unsigned totalPeerCount;                               //@synthesize totalPeerCount=_totalPeerCount - In the implementation block
@property (assign,nonatomic) BOOL hasRoutablePeerCount; 
@property (assign,nonatomic) unsigned routablePeerCount;                            //@synthesize routablePeerCount=_routablePeerCount - In the implementation block
@property (assign,nonatomic) BOOL hasInfraDisconnectedCount; 
@property (assign,nonatomic) unsigned infraDisconnectedCount;                       //@synthesize infraDisconnectedCount=_infraDisconnectedCount - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumberNotUpdatedCount; 
@property (assign,nonatomic) unsigned sequenceNumberNotUpdatedCount;                //@synthesize sequenceNumberNotUpdatedCount=_sequenceNumberNotUpdatedCount - In the implementation block
@property (assign,nonatomic) BOOL hasMissingAWStartEventCount; 
@property (assign,nonatomic) unsigned missingAWStartEventCount;                     //@synthesize missingAWStartEventCount=_missingAWStartEventCount - In the implementation block
@property (assign,nonatomic) BOOL hasPsfEnabledCount; 
@property (assign,nonatomic) unsigned psfEnabledCount;                              //@synthesize psfEnabledCount=_psfEnabledCount - In the implementation block
@property (assign,nonatomic) BOOL hasSelfInfraChannel; 
@property (assign,nonatomic) unsigned selfInfraChannel;                             //@synthesize selfInfraChannel=_selfInfraChannel - In the implementation block
@property (assign,nonatomic) BOOL hasPeerInfraChannel; 
@property (assign,nonatomic) unsigned peerInfraChannel;                             //@synthesize peerInfraChannel=_peerInfraChannel - In the implementation block
@property (assign,nonatomic) BOOL hasSenderPlatform; 
@property (assign,nonatomic) unsigned senderPlatform;                               //@synthesize senderPlatform=_senderPlatform - In the implementation block
@property (assign,nonatomic) BOOL hasCsaToDfsChannel; 
@property (assign,nonatomic) BOOL csaToDfsChannel;                                  //@synthesize csaToDfsChannel=_csaToDfsChannel - In the implementation block
@property (assign,nonatomic) BOOL hasCsaDuringDfspMode; 
@property (assign,nonatomic) BOOL csaDuringDfspMode;                                //@synthesize csaDuringDfspMode=_csaDuringDfspMode - In the implementation block
@property (assign,nonatomic) BOOL hasDfsProxyMode; 
@property (assign,nonatomic) BOOL dfsProxyMode;                                     //@synthesize dfsProxyMode=_dfsProxyMode - In the implementation block
@property (assign,nonatomic) BOOL hasSelfIsSDB; 
@property (assign,nonatomic) BOOL selfIsSDB;                                        //@synthesize selfIsSDB=_selfIsSDB - In the implementation block
@property (assign,nonatomic) BOOL hasPeerIsSDB; 
@property (assign,nonatomic) BOOL peerIsSDB;                                        //@synthesize peerIsSDB=_peerIsSDB - In the implementation block
@property (assign,nonatomic) BOOL hasInRetroMode; 
@property (assign,nonatomic) BOOL inRetroMode;                                      //@synthesize inRetroMode=_inRetroMode - In the implementation block
@property (nonatomic,retain) NSMutableArray * peerRSSIs;                            //@synthesize peerRSSIs=_peerRSSIs - In the implementation block
@property (nonatomic,retain) NSMutableArray * avgCCASocialChannels;                 //@synthesize avgCCASocialChannels=_avgCCASocialChannels - In the implementation block
@property (nonatomic,retain) NSMutableArray * avgCCASelfInfraChannels;              //@synthesize avgCCASelfInfraChannels=_avgCCASelfInfraChannels - In the implementation block
@property (nonatomic,retain) NSMutableArray * avgCCAPeerInfraChannels;              //@synthesize avgCCAPeerInfraChannels=_avgCCAPeerInfraChannels - In the implementation block
+(Class)peerRSSIType;
+(Class)avgCCASocialChannelType;
+(Class)avgCCASelfInfraChannelType;
+(Class)avgCCAPeerInfraChannelType;
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
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTxBytes:(unsigned long long)arg1 ;
-(void)setHasTxBytes:(BOOL)arg1 ;
-(BOOL)hasTxBytes;
-(void)setRxBytes:(unsigned long long)arg1 ;
-(void)setHasRxBytes:(BOOL)arg1 ;
-(BOOL)hasRxBytes;
-(unsigned long long)txBytes;
-(unsigned long long)rxBytes;
-(void)setSelfInfraChannel:(unsigned)arg1 ;
-(void)setHasSelfInfraChannel:(BOOL)arg1 ;
-(BOOL)hasSelfInfraChannel;
-(unsigned)selfInfraChannel;
-(void)setInfraDisconnectedCount:(unsigned)arg1 ;
-(void)setHasInfraDisconnectedCount:(BOOL)arg1 ;
-(BOOL)hasInfraDisconnectedCount;
-(unsigned)infraDisconnectedCount;
-(void)setSelfIsSDB:(BOOL)arg1 ;
-(void)setHasSelfIsSDB:(BOOL)arg1 ;
-(BOOL)hasSelfIsSDB;
-(BOOL)selfIsSDB;
-(void)setPeerInfraChannel:(unsigned)arg1 ;
-(void)setHasPeerInfraChannel:(BOOL)arg1 ;
-(BOOL)hasPeerInfraChannel;
-(unsigned)peerInfraChannel;
-(void)setPeerRSSIs:(NSMutableArray *)arg1 ;
-(void)setAvgCCASocialChannels:(NSMutableArray *)arg1 ;
-(void)setAvgCCASelfInfraChannels:(NSMutableArray *)arg1 ;
-(void)setAvgCCAPeerInfraChannels:(NSMutableArray *)arg1 ;
-(void)addPeerRSSI:(id)arg1 ;
-(void)addAvgCCASocialChannel:(id)arg1 ;
-(void)addAvgCCASelfInfraChannel:(id)arg1 ;
-(void)addAvgCCAPeerInfraChannel:(id)arg1 ;
-(unsigned long long)peerRSSIsCount;
-(void)clearPeerRSSIs;
-(id)peerRSSIAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)avgCCASocialChannelsCount;
-(void)clearAvgCCASocialChannels;
-(id)avgCCASocialChannelAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)avgCCASelfInfraChannelsCount;
-(void)clearAvgCCASelfInfraChannels;
-(id)avgCCASelfInfraChannelAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)avgCCAPeerInfraChannelsCount;
-(void)clearAvgCCAPeerInfraChannels;
-(id)avgCCAPeerInfraChannelAtIndex:(unsigned long long)arg1 ;
-(void)setTotalDuration:(unsigned)arg1 ;
-(void)setHasTotalDuration:(BOOL)arg1 ;
-(BOOL)hasTotalDuration;
-(void)setServerModeDuration:(unsigned)arg1 ;
-(void)setHasServerModeDuration:(BOOL)arg1 ;
-(BOOL)hasServerModeDuration;
-(void)setClientModeDuration:(unsigned)arg1 ;
-(void)setHasClientModeDuration:(BOOL)arg1 ;
-(BOOL)hasClientModeDuration;
-(void)setSplitModeDuration:(unsigned)arg1 ;
-(void)setHasSplitModeDuration:(BOOL)arg1 ;
-(BOOL)hasSplitModeDuration;
-(void)setStartingRSSI:(int)arg1 ;
-(void)setHasStartingRSSI:(BOOL)arg1 ;
-(BOOL)hasStartingRSSI;
-(void)setAwdlVersion:(unsigned)arg1 ;
-(void)setHasAwdlVersion:(BOOL)arg1 ;
-(BOOL)hasAwdlVersion;
-(void)setTotalPeerCount:(unsigned)arg1 ;
-(void)setHasTotalPeerCount:(BOOL)arg1 ;
-(BOOL)hasTotalPeerCount;
-(void)setRoutablePeerCount:(unsigned)arg1 ;
-(void)setHasRoutablePeerCount:(BOOL)arg1 ;
-(BOOL)hasRoutablePeerCount;
-(void)setSequenceNumberNotUpdatedCount:(unsigned)arg1 ;
-(void)setHasSequenceNumberNotUpdatedCount:(BOOL)arg1 ;
-(BOOL)hasSequenceNumberNotUpdatedCount;
-(void)setMissingAWStartEventCount:(unsigned)arg1 ;
-(void)setHasMissingAWStartEventCount:(BOOL)arg1 ;
-(BOOL)hasMissingAWStartEventCount;
-(void)setPsfEnabledCount:(unsigned)arg1 ;
-(void)setHasPsfEnabledCount:(BOOL)arg1 ;
-(BOOL)hasPsfEnabledCount;
-(void)setSenderPlatform:(unsigned)arg1 ;
-(void)setHasSenderPlatform:(BOOL)arg1 ;
-(BOOL)hasSenderPlatform;
-(void)setCsaToDfsChannel:(BOOL)arg1 ;
-(void)setHasCsaToDfsChannel:(BOOL)arg1 ;
-(BOOL)hasCsaToDfsChannel;
-(void)setCsaDuringDfspMode:(BOOL)arg1 ;
-(void)setHasCsaDuringDfspMode:(BOOL)arg1 ;
-(BOOL)hasCsaDuringDfspMode;
-(void)setDfsProxyMode:(BOOL)arg1 ;
-(void)setHasDfsProxyMode:(BOOL)arg1 ;
-(BOOL)hasDfsProxyMode;
-(void)setPeerIsSDB:(BOOL)arg1 ;
-(void)setHasPeerIsSDB:(BOOL)arg1 ;
-(BOOL)hasPeerIsSDB;
-(void)setInRetroMode:(BOOL)arg1 ;
-(void)setHasInRetroMode:(BOOL)arg1 ;
-(BOOL)hasInRetroMode;
-(unsigned)totalDuration;
-(unsigned)serverModeDuration;
-(unsigned)clientModeDuration;
-(unsigned)splitModeDuration;
-(int)startingRSSI;
-(unsigned)awdlVersion;
-(unsigned)totalPeerCount;
-(unsigned)routablePeerCount;
-(unsigned)sequenceNumberNotUpdatedCount;
-(unsigned)missingAWStartEventCount;
-(unsigned)psfEnabledCount;
-(unsigned)senderPlatform;
-(BOOL)csaToDfsChannel;
-(BOOL)csaDuringDfspMode;
-(BOOL)dfsProxyMode;
-(BOOL)peerIsSDB;
-(BOOL)inRetroMode;
-(NSMutableArray *)peerRSSIs;
-(NSMutableArray *)avgCCASocialChannels;
-(NSMutableArray *)avgCCASelfInfraChannels;
-(NSMutableArray *)avgCCAPeerInfraChannels;
@end

