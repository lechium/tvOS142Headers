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

@class NSMutableArray;

@interface AWDCoreRoutineMagicalMomentsExpertInstance : PBCodable <NSCopying> {

	NSMutableArray* _addons;
	int _confidence;
	int _expertType;
	NSMutableArray* _instances;
	int _modelType;
	int _sampleCounts;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasModelType; 
@property (assign,nonatomic) int modelType;                           //@synthesize modelType=_modelType - In the implementation block
@property (assign,nonatomic) BOOL hasExpertType; 
@property (assign,nonatomic) int expertType;                          //@synthesize expertType=_expertType - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence;                          //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) BOOL hasSampleCounts; 
@property (assign,nonatomic) int sampleCounts;                        //@synthesize sampleCounts=_sampleCounts - In the implementation block
@property (nonatomic,retain) NSMutableArray * instances;              //@synthesize instances=_instances - In the implementation block
@property (nonatomic,retain) NSMutableArray * addons;                 //@synthesize addons=_addons - In the implementation block
+(Class)instancesType;
+(Class)addonsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(int)confidence;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setInstances:(NSMutableArray *)arg1 ;
-(unsigned long long)instancesCount;
-(void)clearInstances;
-(NSMutableArray *)instances;
-(void)setConfidence:(int)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(void)addInstances:(id)arg1 ;
-(id)instancesAtIndex:(unsigned long long)arg1 ;
-(void)setAddons:(NSMutableArray *)arg1 ;
-(void)addAddons:(id)arg1 ;
-(unsigned long long)addonsCount;
-(void)clearAddons;
-(id)addonsAtIndex:(unsigned long long)arg1 ;
-(void)setModelType:(int)arg1 ;
-(void)setHasModelType:(BOOL)arg1 ;
-(BOOL)hasModelType;
-(void)setExpertType:(int)arg1 ;
-(void)setHasExpertType:(BOOL)arg1 ;
-(BOOL)hasExpertType;
-(void)setSampleCounts:(int)arg1 ;
-(void)setHasSampleCounts:(BOOL)arg1 ;
-(BOOL)hasSampleCounts;
-(int)modelType;
-(int)expertType;
-(int)sampleCounts;
-(NSMutableArray *)addons;
@end

