/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgStateDeviceConnection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _deviceCarrierName;
	NSString* _deviceCountryCode;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _cellularDataState;
	int _deviceNetworkConnectivity;
	struct {
		unsigned has_cellularDataState : 1;
		unsigned has_deviceNetworkConnectivity : 1;
		unsigned read_deviceCarrierName : 1;
		unsigned read_deviceCountryCode : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDeviceNetworkConnectivity; 
@property (assign,nonatomic) int deviceNetworkConnectivity; 
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode; 
@property (nonatomic,readonly) BOOL hasDeviceCarrierName; 
@property (nonatomic,retain) NSString * deviceCarrierName; 
@property (assign,nonatomic) BOOL hasCellularDataState; 
@property (assign,nonatomic) int cellularDataState; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(NSString *)deviceCountryCode;
-(BOOL)hasDeviceCountryCode;
-(void)setDeviceNetworkConnectivity:(int)arg1 ;
-(void)setCellularDataState:(int)arg1 ;
-(void)setDeviceCarrierName:(NSString *)arg1 ;
-(NSString *)deviceCarrierName;
-(int)deviceNetworkConnectivity;
-(void)setHasDeviceNetworkConnectivity:(BOOL)arg1 ;
-(BOOL)hasDeviceNetworkConnectivity;
-(id)deviceNetworkConnectivityAsString:(int)arg1 ;
-(int)StringAsDeviceNetworkConnectivity:(id)arg1 ;
-(BOOL)hasDeviceCarrierName;
-(int)cellularDataState;
-(void)setHasCellularDataState:(BOOL)arg1 ;
-(BOOL)hasCellularDataState;
-(id)cellularDataStateAsString:(int)arg1 ;
-(int)StringAsCellularDataState:(id)arg1 ;
@end

