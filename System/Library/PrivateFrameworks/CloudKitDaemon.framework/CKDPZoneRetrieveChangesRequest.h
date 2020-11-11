/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPZoneRetrieveChangesRequest : PBRequest <NSCopying> {

	unsigned _maxChangedZones;
	NSData* _syncContinuationToken;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasSyncContinuationToken; 
@property (nonatomic,retain) NSData * syncContinuationToken;               //@synthesize syncContinuationToken=_syncContinuationToken - In the implementation block
@property (assign,nonatomic) BOOL hasMaxChangedZones; 
@property (assign,nonatomic) unsigned maxChangedZones;                     //@synthesize maxChangedZones=_maxChangedZones - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSyncContinuationToken:(NSData *)arg1 ;
-(BOOL)hasSyncContinuationToken;
-(NSData *)syncContinuationToken;
-(void)setMaxChangedZones:(unsigned)arg1 ;
-(void)setHasMaxChangedZones:(BOOL)arg1 ;
-(BOOL)hasMaxChangedZones;
-(unsigned)maxChangedZones;
@end
