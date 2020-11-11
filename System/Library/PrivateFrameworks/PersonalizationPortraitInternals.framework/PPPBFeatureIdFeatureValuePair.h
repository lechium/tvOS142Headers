/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBFeatureIdFeatureValuePair : PBCodable <NSCopying> {

	NSString* _featureId;
	float _value;
	SCD_Struct_PP1 _has;

}

@property (nonatomic,readonly) BOOL hasFeatureId; 
@property (nonatomic,retain) NSString * featureId;              //@synthesize featureId=_featureId - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) float value;                       //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(float)value;
-(void)setValue:(float)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
-(BOOL)hasValue;
-(void)setFeatureId:(NSString *)arg1 ;
-(NSString *)featureId;
-(BOOL)hasFeatureId;
@end

