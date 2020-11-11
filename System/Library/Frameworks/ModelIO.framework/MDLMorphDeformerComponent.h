/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, MDLAnimatedScalarArray;


@protocol MDLMorphDeformerComponent <MDLComponent>
@property (nonatomic,readonly) NSArray * targetShapes; 
@property (nonatomic,readonly) NSArray * shapeSetTargetWeights; 
@property (nonatomic,readonly) NSArray * shapeSetTargetCounts; 
@property (nonatomic,readonly) MDLAnimatedScalarArray * weights; 
@required
-(MDLAnimatedScalarArray *)weights;
-(NSArray *)targetShapes;
-(NSArray *)shapeSetTargetWeights;
-(NSArray *)shapeSetTargetCounts;

@end

