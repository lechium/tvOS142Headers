/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSOTRSessionNegotiation : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _priority;
	unsigned long long _timestamp;
	unsigned _result;
	NSString* _service;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                        //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned long long priority;               //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) unsigned result;                           //@synthesize result=_result - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)result;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(NSString *)service;
-(void)setDuration:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setResult:(unsigned)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasResult:(BOOL)arg1 ;
-(BOOL)hasResult;
-(BOOL)hasService;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasPriority:(BOOL)arg1 ;
-(BOOL)hasPriority;
@end

