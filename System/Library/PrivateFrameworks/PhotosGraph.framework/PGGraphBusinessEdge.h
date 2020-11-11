/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphOptimizedEdge.h>

@class NSDate;

@interface PGGraphBusinessEdge : PGGraphOptimizedEdge {

	BOOL _hasRoutineInfo;
	float _weight;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;

}

@property (nonatomic,readonly) BOOL hasRoutineInfo;                      //@synthesize hasRoutineInfo=_hasRoutineInfo - In the implementation block
@property (nonatomic,readonly) NSDate * universalStartDate;              //@synthesize universalStartDate=_universalStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * universalEndDate;                //@synthesize universalEndDate=_universalEndDate - In the implementation block
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(void)setLocalProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)edgeDescription;
-(id)initWithLabel:(id)arg1 fromSourceNode:(id)arg2 toBusinessNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(BOOL)hasRoutineInfo;
@end

