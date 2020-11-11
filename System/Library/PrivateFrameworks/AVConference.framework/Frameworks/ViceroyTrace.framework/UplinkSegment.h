/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ViceroyTrace/MultiwaySegment.h>

@class NSMutableDictionary, NSNumber;

@interface UplinkSegment : MultiwaySegment {

	NSMutableDictionary* _streamQualityAggregator;
	NSNumber* _wrmLinkTypeSuggestion;
	NSNumber* _wrmLinkTypeChangeReasonCode;
	NSNumber* _wrmLinkTypeWifiRSSI;
	NSNumber* _wrmLinkTypeWifiSNR;
	NSNumber* _wrmLinkTypeWifiCCA;
	NSNumber* _wrmLinkTypeWifiPacketLoss;
	NSNumber* _wrmLinkTypeCellSignalStrength;
	NSNumber* _wrmLinkTypeCellSignalBar;
	NSNumber* _wrmLinkTypeCellServingCellType;
	unsigned long long _totalCellTxDataBytes;
	unsigned long long _totalCellDupTxDataBytes;

}

@property (assign) unsigned long long totalCellTxDataBytes;                 //@synthesize totalCellTxDataBytes=_totalCellTxDataBytes - In the implementation block
@property (assign) unsigned long long totalCellDupTxDataBytes;              //@synthesize totalCellDupTxDataBytes=_totalCellDupTxDataBytes - In the implementation block
@property (assign) NSNumber * wrmLinkTypeSuggestion;                        //@synthesize wrmLinkTypeSuggestion=_wrmLinkTypeSuggestion - In the implementation block
@property (assign) NSNumber * wrmLinkTypeChangeReasonCode;                  //@synthesize wrmLinkTypeChangeReasonCode=_wrmLinkTypeChangeReasonCode - In the implementation block
@property (assign) NSNumber * wrmLinkTypeWifiRSSI;                          //@synthesize wrmLinkTypeWifiRSSI=_wrmLinkTypeWifiRSSI - In the implementation block
@property (assign) NSNumber * wrmLinkTypeWifiSNR;                           //@synthesize wrmLinkTypeWifiSNR=_wrmLinkTypeWifiSNR - In the implementation block
@property (assign) NSNumber * wrmLinkTypeWifiCCA;                           //@synthesize wrmLinkTypeWifiCCA=_wrmLinkTypeWifiCCA - In the implementation block
@property (assign) NSNumber * wrmLinkTypeWifiPacketLoss;                    //@synthesize wrmLinkTypeWifiPacketLoss=_wrmLinkTypeWifiPacketLoss - In the implementation block
@property (assign) NSNumber * wrmLinkTypeCellSignalStrength;                //@synthesize wrmLinkTypeCellSignalStrength=_wrmLinkTypeCellSignalStrength - In the implementation block
@property (assign) NSNumber * wrmLinkTypeCellSignalBar;                     //@synthesize wrmLinkTypeCellSignalBar=_wrmLinkTypeCellSignalBar - In the implementation block
@property (assign) NSNumber * wrmLinkTypeCellServingCellType;               //@synthesize wrmLinkTypeCellServingCellType=_wrmLinkTypeCellServingCellType - In the implementation block
-(void)dealloc;
-(void)addSegmentWRMReportStats:(id)arg1 ;
-(id)segmentReport;
-(unsigned long long)totalCellDupTxDataBytes;
-(void)setTotalCellDupTxDataBytes:(unsigned long long)arg1 ;
-(unsigned long long)totalCellTxDataBytes;
-(void)setTotalCellTxDataBytes:(unsigned long long)arg1 ;
-(NSNumber *)wrmLinkTypeSuggestion;
-(void)setWrmLinkTypeSuggestion:(NSNumber *)arg1 ;
-(NSNumber *)wrmLinkTypeChangeReasonCode;
-(void)setWrmLinkTypeChangeReasonCode:(NSNumber *)arg1 ;
-(NSNumber *)wrmLinkTypeWifiRSSI;
-(void)setWrmLinkTypeWifiRSSI:(NSNumber *)arg1 ;
-(NSNumber *)wrmLinkTypeWifiSNR;
-(void)setWrmLinkTypeWifiSNR:(NSNumber *)arg1 ;
-(NSNumber *)wrmLinkTypeWifiCCA;
-(void)setWrmLinkTypeWifiCCA:(NSNumber *)arg1 ;
-(NSNumber *)wrmLinkTypeWifiPacketLoss;
-(void)setWrmLinkTypeWifiPacketLoss:(NSNumber *)arg1 ;
-(NSNumber *)wrmLinkTypeCellSignalStrength;
-(void)setWrmLinkTypeCellSignalStrength:(NSNumber *)arg1 ;
-(NSNumber *)wrmLinkTypeCellSignalBar;
-(void)setWrmLinkTypeCellSignalBar:(NSNumber *)arg1 ;
-(NSNumber *)wrmLinkTypeCellServingCellType;
-(void)setWrmLinkTypeCellServingCellType:(NSNumber *)arg1 ;
-(id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 delegate:(id)arg3 ;
-(void)processFramerateEvent:(id)arg1 forMetrics:(id)arg2 withQuality:(id)arg3 sumKey:(id)arg4 ;
-(void)processBitrateEvent:(id)arg1 forMetrics:(id)arg2 withQuality:(id)arg3 sumKey:(id)arg4 counterKey:(id)arg5 ;
-(id)calculateFramerate:(id)arg1 forKey:(id)arg2 ;
-(id)calculateBitrate:(id)arg1 sumKey:(id)arg2 counterKey:(id)arg3 ;
-(void)addCellByteCountStats:(id)arg1 ;
-(void)collectStreamQualityAggregator:(id)arg1 ;
-(void)processVideoTransmitterStats:(id)arg1 ;
@end

