/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RTMapItem;

@interface RTFusedInferredMapItem : NSObject {

	RTMapItem* _mapItem;
	double _confidence;
	unsigned long long _source;

}

@property (nonatomic,retain) RTMapItem * mapItem;                    //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) double confidence;                      //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) unsigned long long source;              //@synthesize source=_source - In the implementation block
+(id)sortFusedInferredMapItems:(id)arg1 confidenceEqualityEpsilon:(double)arg2 referenceLocation:(id)arg3 distanceCalculator:(id)arg4 ascending:(BOOL)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(unsigned long long)source;
-(void)setSource:(unsigned long long)arg1 ;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(void)setMapItem:(RTMapItem *)arg1 ;
-(RTMapItem *)mapItem;
-(id)initWithMapItem:(id)arg1 confidence:(double)arg2 source:(unsigned long long)arg3 ;
-(id)convertToInferredMapItem;
-(id)initWithInferredMapItem:(id)arg1 ;
@end

