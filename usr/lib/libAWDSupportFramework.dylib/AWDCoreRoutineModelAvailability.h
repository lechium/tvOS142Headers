/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineModelAvailability : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _availability;
	unsigned _precisionRecall;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAvailability; 
@property (assign,nonatomic) int availability;                          //@synthesize availability=_availability - In the implementation block
@property (assign,nonatomic) BOOL hasPrecisionRecall; 
@property (assign,nonatomic) unsigned precisionRecall;                  //@synthesize precisionRecall=_precisionRecall - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setAvailability:(int)arg1 ;
-(void)setHasAvailability:(BOOL)arg1 ;
-(BOOL)hasAvailability;
-(void)setPrecisionRecall:(unsigned)arg1 ;
-(void)setHasPrecisionRecall:(BOOL)arg1 ;
-(BOOL)hasPrecisionRecall;
-(int)availability;
-(unsigned)precisionRecall;
@end

