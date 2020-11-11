/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PPPBScoredItemWithFeatures : PBCodable <NSCopying> {

	unsigned long long _topicId;
	NSMutableArray* _features;
	NSMutableArray* _feedbackItems;
	NSString* _namedEntity;
	NSString* _namedEntityWithFeedback;
	float _score;
	SCD_Struct_PP2 _has;

}

@property (assign,nonatomic) BOOL hasTopicId; 
@property (assign,nonatomic) unsigned long long topicId;                      //@synthesize topicId=_topicId - In the implementation block
@property (nonatomic,readonly) BOOL hasNamedEntity; 
@property (nonatomic,retain) NSString * namedEntity;                          //@synthesize namedEntity=_namedEntity - In the implementation block
@property (nonatomic,readonly) BOOL hasNamedEntityWithFeedback; 
@property (nonatomic,retain) NSString * namedEntityWithFeedback;              //@synthesize namedEntityWithFeedback=_namedEntityWithFeedback - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) float score;                                     //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) NSMutableArray * features;                       //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) NSMutableArray * feedbackItems;                  //@synthesize feedbackItems=_feedbackItems - In the implementation block
+(Class)featuresType;
+(Class)feedbackItemsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(float)score;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)features;
-(void)setScore:(float)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(void)setFeatures:(NSMutableArray *)arg1 ;
-(id)featuresAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)feedbackItems;
-(void)setTopicId:(unsigned long long)arg1 ;
-(void)setHasTopicId:(BOOL)arg1 ;
-(BOOL)hasTopicId;
-(BOOL)hasNamedEntity;
-(BOOL)hasNamedEntityWithFeedback;
-(void)clearFeatures;
-(void)addFeatures:(id)arg1 ;
-(unsigned long long)featuresCount;
-(void)clearFeedbackItems;
-(void)addFeedbackItems:(id)arg1 ;
-(unsigned long long)feedbackItemsCount;
-(id)feedbackItemsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)topicId;
-(NSString *)namedEntity;
-(void)setNamedEntity:(NSString *)arg1 ;
-(NSString *)namedEntityWithFeedback;
-(void)setNamedEntityWithFeedback:(NSString *)arg1 ;
-(void)setFeedbackItems:(NSMutableArray *)arg1 ;
@end

