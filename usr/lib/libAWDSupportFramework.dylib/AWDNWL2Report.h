/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDNWL2Report : PBCodable <NSCopying> {

	int _cellularBand;
	int _cellularBandInfo;
	int _cellularBandwidth;
	int _cellularBars;
	NSString* _cellularCellType;
	int _cellularLqm;
	int _cellularMcc;
	int _cellularMnc;
	int _cellularPid;
	int _cellularPowerCostDownload;
	int _cellularPowerCostUpload;
	int _cellularRadioTechnology;
	int _cellularTac;
	int _cellularUarfcn;
	int _wifiLqm;
	int _wifiRadioTechnology;
	int _wifiRssi;
	BOOL _cellularKnownGood;
	BOOL _wifiKnownGood;
	SCD_Struct_AW31 _has;

}

@property (assign,nonatomic) BOOL hasCellularLqm; 
@property (assign,nonatomic) int cellularLqm;                                //@synthesize cellularLqm=_cellularLqm - In the implementation block
@property (assign,nonatomic) BOOL hasCellularPowerCostDownload; 
@property (assign,nonatomic) int cellularPowerCostDownload;                  //@synthesize cellularPowerCostDownload=_cellularPowerCostDownload - In the implementation block
@property (assign,nonatomic) BOOL hasCellularPowerCostUpload; 
@property (assign,nonatomic) int cellularPowerCostUpload;                    //@synthesize cellularPowerCostUpload=_cellularPowerCostUpload - In the implementation block
@property (assign,nonatomic) BOOL hasCellularKnownGood; 
@property (assign,nonatomic) BOOL cellularKnownGood;                         //@synthesize cellularKnownGood=_cellularKnownGood - In the implementation block
@property (assign,nonatomic) BOOL hasCellularRadioTechnology; 
@property (assign,nonatomic) int cellularRadioTechnology;                    //@synthesize cellularRadioTechnology=_cellularRadioTechnology - In the implementation block
@property (assign,nonatomic) BOOL hasWifiLqm; 
@property (assign,nonatomic) int wifiLqm;                                    //@synthesize wifiLqm=_wifiLqm - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRssi; 
@property (assign,nonatomic) int wifiRssi;                                   //@synthesize wifiRssi=_wifiRssi - In the implementation block
@property (assign,nonatomic) BOOL hasWifiKnownGood; 
@property (assign,nonatomic) BOOL wifiKnownGood;                             //@synthesize wifiKnownGood=_wifiKnownGood - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRadioTechnology; 
@property (assign,nonatomic) int wifiRadioTechnology;                        //@synthesize wifiRadioTechnology=_wifiRadioTechnology - In the implementation block
@property (assign,nonatomic) BOOL hasCellularMnc; 
@property (assign,nonatomic) int cellularMnc;                                //@synthesize cellularMnc=_cellularMnc - In the implementation block
@property (assign,nonatomic) BOOL hasCellularMcc; 
@property (assign,nonatomic) int cellularMcc;                                //@synthesize cellularMcc=_cellularMcc - In the implementation block
@property (assign,nonatomic) BOOL hasCellularUarfcn; 
@property (assign,nonatomic) int cellularUarfcn;                             //@synthesize cellularUarfcn=_cellularUarfcn - In the implementation block
@property (assign,nonatomic) BOOL hasCellularPid; 
@property (assign,nonatomic) int cellularPid;                                //@synthesize cellularPid=_cellularPid - In the implementation block
@property (assign,nonatomic) BOOL hasCellularBandInfo; 
@property (assign,nonatomic) int cellularBandInfo;                           //@synthesize cellularBandInfo=_cellularBandInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasCellularCellType; 
@property (nonatomic,retain) NSString * cellularCellType;                    //@synthesize cellularCellType=_cellularCellType - In the implementation block
@property (assign,nonatomic) BOOL hasCellularBandwidth; 
@property (assign,nonatomic) int cellularBandwidth;                          //@synthesize cellularBandwidth=_cellularBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasCellularTac; 
@property (assign,nonatomic) int cellularTac;                                //@synthesize cellularTac=_cellularTac - In the implementation block
@property (assign,nonatomic) BOOL hasCellularBars; 
@property (assign,nonatomic) int cellularBars;                               //@synthesize cellularBars=_cellularBars - In the implementation block
@property (assign,nonatomic) BOOL hasCellularBand; 
@property (assign,nonatomic) int cellularBand;                               //@synthesize cellularBand=_cellularBand - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCellularCellType:(NSString *)arg1 ;
-(void)setCellularLqm:(int)arg1 ;
-(void)setHasCellularLqm:(BOOL)arg1 ;
-(BOOL)hasCellularLqm;
-(int)cellularPowerCostDownload;
-(void)setCellularPowerCostDownload:(int)arg1 ;
-(void)setHasCellularPowerCostDownload:(BOOL)arg1 ;
-(BOOL)hasCellularPowerCostDownload;
-(id)cellularPowerCostDownloadAsString:(int)arg1 ;
-(int)StringAsCellularPowerCostDownload:(id)arg1 ;
-(int)cellularPowerCostUpload;
-(void)setCellularPowerCostUpload:(int)arg1 ;
-(void)setHasCellularPowerCostUpload:(BOOL)arg1 ;
-(BOOL)hasCellularPowerCostUpload;
-(id)cellularPowerCostUploadAsString:(int)arg1 ;
-(int)StringAsCellularPowerCostUpload:(id)arg1 ;
-(void)setCellularKnownGood:(BOOL)arg1 ;
-(void)setHasCellularKnownGood:(BOOL)arg1 ;
-(BOOL)hasCellularKnownGood;
-(int)cellularRadioTechnology;
-(void)setCellularRadioTechnology:(int)arg1 ;
-(void)setHasCellularRadioTechnology:(BOOL)arg1 ;
-(BOOL)hasCellularRadioTechnology;
-(id)cellularRadioTechnologyAsString:(int)arg1 ;
-(int)StringAsCellularRadioTechnology:(id)arg1 ;
-(void)setWifiLqm:(int)arg1 ;
-(void)setHasWifiLqm:(BOOL)arg1 ;
-(BOOL)hasWifiLqm;
-(void)setWifiRssi:(int)arg1 ;
-(void)setHasWifiRssi:(BOOL)arg1 ;
-(BOOL)hasWifiRssi;
-(void)setWifiKnownGood:(BOOL)arg1 ;
-(void)setHasWifiKnownGood:(BOOL)arg1 ;
-(BOOL)hasWifiKnownGood;
-(int)wifiRadioTechnology;
-(void)setWifiRadioTechnology:(int)arg1 ;
-(void)setHasWifiRadioTechnology:(BOOL)arg1 ;
-(BOOL)hasWifiRadioTechnology;
-(id)wifiRadioTechnologyAsString:(int)arg1 ;
-(int)StringAsWifiRadioTechnology:(id)arg1 ;
-(void)setCellularMnc:(int)arg1 ;
-(void)setHasCellularMnc:(BOOL)arg1 ;
-(BOOL)hasCellularMnc;
-(void)setCellularMcc:(int)arg1 ;
-(void)setHasCellularMcc:(BOOL)arg1 ;
-(BOOL)hasCellularMcc;
-(void)setCellularUarfcn:(int)arg1 ;
-(void)setHasCellularUarfcn:(BOOL)arg1 ;
-(BOOL)hasCellularUarfcn;
-(void)setCellularPid:(int)arg1 ;
-(void)setHasCellularPid:(BOOL)arg1 ;
-(BOOL)hasCellularPid;
-(void)setCellularBandInfo:(int)arg1 ;
-(void)setHasCellularBandInfo:(BOOL)arg1 ;
-(BOOL)hasCellularBandInfo;
-(BOOL)hasCellularCellType;
-(void)setCellularBandwidth:(int)arg1 ;
-(void)setHasCellularBandwidth:(BOOL)arg1 ;
-(BOOL)hasCellularBandwidth;
-(void)setCellularTac:(int)arg1 ;
-(void)setHasCellularTac:(BOOL)arg1 ;
-(BOOL)hasCellularTac;
-(void)setCellularBars:(int)arg1 ;
-(void)setHasCellularBars:(BOOL)arg1 ;
-(BOOL)hasCellularBars;
-(int)cellularBand;
-(void)setCellularBand:(int)arg1 ;
-(void)setHasCellularBand:(BOOL)arg1 ;
-(BOOL)hasCellularBand;
-(id)cellularBandAsString:(int)arg1 ;
-(int)StringAsCellularBand:(id)arg1 ;
-(int)cellularLqm;
-(BOOL)cellularKnownGood;
-(int)wifiLqm;
-(int)wifiRssi;
-(BOOL)wifiKnownGood;
-(int)cellularMnc;
-(int)cellularMcc;
-(int)cellularUarfcn;
-(int)cellularPid;
-(int)cellularBandInfo;
-(NSString *)cellularCellType;
-(int)cellularBandwidth;
-(int)cellularTac;
-(int)cellularBars;
@end

