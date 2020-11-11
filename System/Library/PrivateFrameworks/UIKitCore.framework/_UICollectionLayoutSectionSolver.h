/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSCollectionLayoutSection, UITraitCollection, NSIndexSet;


@protocol _UICollectionLayoutSectionSolver <NSObject,_UICollectionLayoutAuxillaryHosting>
@property (nonatomic,readonly) NSCollectionLayoutSection * layoutSection; 
@property (nonatomic,readonly) id<NSCollectionLayoutContainer> container; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,readonly) BOOL layoutRTL; 
@property (nonatomic,readonly) unsigned long long layoutAxis; 
@property (nonatomic,readonly) long long frameCount; 
@property (nonatomic,readonly) CGRect effectiveContentFrame; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) NSIndexSet * pinnedSupplementaryIndexes; 
@property (assign,nonatomic) BOOL shouldAdjustContentSizeForPartialLastGroupSolution; 
@property (assign,nonatomic) CGPoint orthogonalOffset; 
@property (nonatomic,readonly) CGVector orthogonalScrollingPrefetchingUnitVector; 
@required
-(id<NSCollectionLayoutContainer>)container;
-(CGSize)contentSize;
-(long long)frameCount;
-(UITraitCollection *)traitCollection;
-(id)frameForIndex:(long long)arg1;
-(unsigned long long)layoutAxis;
-(id)visualDescription;
-(void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5 layoutRTL:(BOOL)arg6;
-(NSCollectionLayoutSection *)layoutSection;
-(NSIndexSet *)pinnedSupplementaryIndexes;
-(id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2;
-(BOOL)layoutRTL;
-(id)queryFramesIntersectingRect:(CGRect)arg1 frameOffset:(CGPoint)arg2;
-(void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4;
-(void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5;
-(id)resolveWithParameters:(id)arg1 preferredSizes:(id)arg2;
-(void)updatePinnedSupplementaryItemsWithVisibleBounds:(CGRect)arg1;
-(id)queryFramesIntersectingRect:(CGRect)arg1;
-(id)sectionSupplementaryFrameWithKind:(id)arg1 index:(long long)arg2;
-(id)sectionSupplementaryFrameForIndex:(long long)arg1;
-(long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg1;
-(void)_setOrthogonalOffset:(CGPoint)arg1;
-(double)_dimensionForRootGroupAlongAxis:(unsigned long long)arg1;
-(CGRect)effectiveContentFrame;
-(BOOL)shouldAdjustContentSizeForPartialLastGroupSolution;
-(void)setShouldAdjustContentSizeForPartialLastGroupSolution:(BOOL)arg1;
-(CGPoint)orthogonalOffset;
-(void)setOrthogonalOffset:(CGPoint)arg1;
-(CGVector)orthogonalScrollingPrefetchingUnitVector;

@end
