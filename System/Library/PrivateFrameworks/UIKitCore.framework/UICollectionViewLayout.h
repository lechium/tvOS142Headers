/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionViewLayoutOrthogonalScrolling.h>
#import <UIKitCore/_UICollectionViewLayoutSwipeActions.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UICollectionView, NSMutableDictionary, NSMutableIndexSet, UIDynamicAnimator, UICollectionViewLayoutInvalidationContext, NSIndexSet, NSArray, _UICollectionViewCompositionLayout, _UICollectionViewAnimationContext, NSString;

@interface UICollectionViewLayout : NSObject <_UICollectionViewLayoutOrthogonalScrolling, _UICollectionViewLayoutSwipeActions, NSCoding> {

	UICollectionView* _collectionView;
	CGSize _collectionViewBoundsSize;
	NSMutableDictionary* _initialAnimationLayoutAttributesDict;
	NSMutableDictionary* _finalAnimationLayoutAttributesDict;
	NSMutableDictionary* _deletedSupplementaryIndexPathsDict;
	NSMutableDictionary* _insertedSupplementaryIndexPathsDict;
	NSMutableDictionary* _deletedDecorationIndexPathsDict;
	NSMutableDictionary* _insertedDecorationIndexPathsDict;
	NSMutableIndexSet* _deletedSectionsSet;
	NSMutableIndexSet* _insertedSectionsSet;
	NSMutableDictionary* _decorationViewClassDict;
	NSMutableDictionary* _decorationViewNibDict;
	NSMutableDictionary* _decorationViewExternalObjectsTables;
	UICollectionViewLayout* _transitioningFromLayout;
	UICollectionViewLayout* _transitioningToLayout;
	UIDynamicAnimator* _animator;
	UICollectionViewLayoutInvalidationContext* _invalidationContext;
	CGRect _frame;
	NSIndexSet* _sections;
	NSIndexSet* _items;
	NSArray* _elementKinds;
	_UICollectionViewCompositionLayout* _compositionLayout;
	UICollectionViewLayout* _siblingLayout;
	CGPoint _layoutOffset;
	unsigned long long _layoutOffsetEdges;
	struct {
		unsigned inTransitionFromTransitionLayout : 1;
		unsigned inTransitionToTransitionLayout : 1;
		unsigned prepared : 1;
		unsigned wantsRightToLeftHorizontalMirroringIfNeeded : 1;
		unsigned isEditing : 1;
	}  _layoutFlags;
	long long _sublayoutType;
	_UICollectionViewAnimationContext* _collectionViewAnimationContext;

}

@property (assign,setter=_setFrame:,getter=_frame,nonatomic) CGRect frame; 
@property (setter=_setSections:,getter=_sections,nonatomic,copy) NSIndexSet * sections; 
@property (setter=_setItems:,getter=_items,nonatomic,copy) NSIndexSet * items; 
@property (setter=_setElementKinds:,getter=_elementKinds,nonatomic,copy) NSArray * elementKinds; 
@property (assign,setter=_setCompositionLayout:,getter=_compositionLayout,nonatomic) _UICollectionViewCompositionLayout * compositionLayout; 
@property (assign,setter=_setSiblingLayout:,getter=_siblingLayout,nonatomic) UICollectionViewLayout * siblingLayout; 
@property (assign,setter=_setLayoutOffset:,getter=_layoutOffset,nonatomic) CGPoint layoutOffset; 
@property (assign,setter=_setLayoutOffsetEdges:,getter=_layoutOffsetEdges,nonatomic) unsigned long long layoutOffsetEdges; 
@property (assign,setter=_setSublayoutType:,getter=_sublayoutType,nonatomic) long long sublayoutType;                                                                                           //@synthesize sublayoutType=_sublayoutType - In the implementation block
@property (assign,setter=_setPrepared:,getter=_isPrepared,nonatomic) BOOL prepared; 
@property (setter=_setCollectionViewAnimationContext:,getter=_collectionViewAnimationContext,nonatomic,retain) _UICollectionViewAnimationContext * collectionViewAnimationContext;              //@synthesize collectionViewAnimationContext=_collectionViewAnimationContext - In the implementation block
@property (getter=_focusFastScrollingIndexBarInsets,nonatomic,readonly) UIEdgeInsets focusFastScrollingIndexBarInsets; 
@property (nonatomic,readonly) UICollectionView * collectionView;                                                                                                                               //@synthesize collectionView=_collectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)_frame;
-(id)_items;
-(CGRect)bounds;
-(BOOL)isEditing;
-(id)_sections;
-(void)invalidateLayout;
-(void)setEditing:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(BOOL)_isPrepared;
-(CGRect)convertRect:(CGRect)arg1 fromLayout:(id)arg2 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(CGPoint)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(BOOL)_disablesDoubleSidedAnimations;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(unsigned long long)_layoutAxis;
-(void)_setItems:(id)arg1 ;
-(CGRect)_dynamicReferenceBounds;
-(void)_setPrepared:(BOOL)arg1 ;
-(void)registerClass:(Class)arg1 forDecorationViewOfKind:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(void)finalizeCollectionViewUpdates;
-(BOOL)canBeEdited;
-(long long)developmentLayoutDirection;
-(void)_setWantsRightToLeftHorizontalMirroringIfNeeded:(BOOL)arg1 ;
-(id)_dynamicAnimator;
-(BOOL)_wantsRightToLeftHorizontalMirroringIfNeeded;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(double)_alignedContentMarginGivenMargin:(double)arg1 ;
-(void)_setCollectionView:(id)arg1 ;
-(void)_prepareForTransitionToLayout:(id)arg1 ;
-(BOOL)_allowsItemInteractionsToBegin;
-(id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1 ;
-(id)indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(BOOL)_estimatesSizes;
-(id)_invalidationContextForUpdatedLayoutMargins:(UIEdgeInsets)arg1 ;
-(CGPoint)_targetPositionForInteractiveMovementOfItemAtIndexPath:(id)arg1 withProposedTargetPosition:(CGPoint)arg2 ;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(void)_postProcessPreferredAttributes:(id)arg1 forView:(id)arg2 ;
-(BOOL)_estimatesSupplementaryItems;
-(void)_willPerformUpdateVisibleCellsPass;
-(void)_didPerformUpdateVisibleCellsPassWithLayoutOffset:(CGPoint)arg1 ;
-(void)_prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2 ;
-(BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
-(void)_prepareForCollectionViewUpdates:(id)arg1 withDataSourceTranslator:(id)arg2 ;
-(BOOL)_wantsUntrackedAnimationCleanupForAuxillaryItems;
-(BOOL)_wantsAnimationsForOffscreenAuxillaries;
-(BOOL)_preparedForBoundsChanges;
-(BOOL)_overridesSafeAreaPropagationToDescendants;
-(unsigned long long)_edgesForSafeAreaPropagationToDescendants;
-(BOOL)_disallowsFadeCellsForBoundsChange;
-(BOOL)_shouldAdjustTargetContentOffsetToValidateContentExtents;
-(void)_traitCollectionDidChangeFromPreviousCollection:(id)arg1 newTraitCollection:(id)arg2 ;
-(BOOL)_hasOrthogonalScrollingSections;
-(id)_orthogonalScrollingSections;
-(void)_setOffset:(CGPoint)arg1 forOrthogonalScrollingSection:(long long)arg2 ;
-(CGPoint)_offsetForOrthogonalScrollingSection:(long long)arg1 ;
-(BOOL)_shouldConfigureForPagingForOrthogonalScrollingSection:(long long)arg1 ;
-(double)_orthogonalScrollingPagingDimensionForSection:(long long)arg1 ;
-(BOOL)_orthogonalScrollingShouldCenterCustomPagingSizeForSection:(long long)arg1 ;
-(CGPoint)_orthogonalScrollingTargetContentOffsetForOffset:(CGPoint)arg1 section:(long long)arg2 ;
-(BOOL)_orthogonalScrollingUsesTargetContentOffsetForSection:(long long)arg1 ;
-(unsigned long long)_orthogonalScrollingAxis;
-(double)_orthogonalScrollingDecelerationRateForSection:(long long)arg1 ;
-(CGVector)_scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1 ;
-(CGRect)_orthogonalScrollingLayoutRectForSection:(long long)arg1 ;
-(CGRect)_orthogonalScrollingContentRectForSection:(long long)arg1 ;
-(NSDirectionalEdgeInsets)_orthogonalScrollingContentInsetsForSection:(long long)arg1 ;
-(id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(CGRect)arg1 ;
-(BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2 ;
-(BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2 ;
-(CGRect)_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(CGRect)arg2 ;
-(BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)arg1 ;
-(void)_backgroundChangedForInteractionAtIndexPath:(id)arg1 ;
-(id)_elementKinds;
-(id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(CGPoint)arg4 ;
-(CGPoint)_contentOffsetFromProposedContentOffset:(CGPoint)arg1 forScrollingToItemAtIndexPath:(id)arg2 atScrollPosition:(unsigned long long)arg3 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(UIEdgeInsets)_preferredLayoutMargins;
-(BOOL)_needsRecomputeOfPreferredAttributesForVisibleEstimatedItemsDuringUpdate;
-(void)_invalidateLayoutUsingContext:(id)arg1 ;
-(id)_decorationViewForLayoutAttributes:(id)arg1 ;
-(void)_prepareToAnimateFromCollectionViewItems:(id)arg1 atContentOffset:(CGPoint)arg2 toItems:(id)arg3 atContentOffset:(CGPoint)arg4 ;
-(id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_finalizeCollectionViewItemAnimations;
-(void)_prepareForTransitionFromLayout:(id)arg1 ;
-(CGPoint)transitionContentOffsetForProposedContentOffset:(CGPoint)arg1 keyItemIndexPath:(id)arg2 ;
-(BOOL)_supportsAdvancedTransitionAnimations;
-(void)_finalizeLayoutTransition;
-(void)_didFinishLayoutTransitionAnimations:(BOOL)arg1 ;
-(CGPoint)_contentOffsetForScrollingToSection:(long long)arg1 ;
-(UIEdgeInsets)_focusFastScrollingIndexBarInsets;
-(void)_setCollectionViewAnimationContext:(id)arg1 ;
-(BOOL)_initialAppearingLayoutAttributesCanBeOverriddenForEstimatedSizing;
-(CGPoint)updatesContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)_propertyAnimatorForCollectionViewUpdates:(id)arg1 withCustomAnimator:(id)arg2 ;
-(id)_reorderingTargetItemIndexPathForPosition:(CGPoint)arg1 withPreviousIndexPath:(id)arg2 ;
-(id)_invalidationContextForReorderingTargetPosition:(CGPoint)arg1 targetIndexPaths:(id)arg2 withPreviousPosition:(CGPoint)arg3 previousIndexPaths:(id)arg4 ;
-(id)_invalidationContextForEndingReorderingItemToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 reorderingCancelled:(BOOL)arg3 ;
-(void)_setFrame:(CGRect)arg1 ;
-(void)_setSublayoutType:(long long)arg1 ;
-(void)_setCompositionLayout:(id)arg1 ;
-(void)_setSections:(id)arg1 ;
-(void)_setLayoutOffset:(CGPoint)arg1 ;
-(void)_setLayoutOffsetEdges:(unsigned long long)arg1 ;
-(void)_setSiblingLayout:(id)arg1 ;
-(void)_setElementKinds:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toLayout:(id)arg2 ;
-(id)_siblingLayout;
-(CGPoint)_layoutOffset;
-(unsigned long long)_layoutOffsetEdges;
-(id)_layoutAttributesForReorderedItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(id)_compositionLayout;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 ;
-(void)prepareForTransitionToLayout:(id)arg1 ;
-(void)prepareForTransitionFromLayout:(id)arg1 ;
-(void)finalizeLayoutTransition;
-(id)_collectionViewAnimationContext;
-(id)_initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)_finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)_indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(id)_indexPathsToInsertForSupplementaryViewOfKind:(id)arg1 ;
-(id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
-(CGPoint)_offsetInTopParentLayout:(id*)arg1 ;
-(id)invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 movementCancelled:(BOOL)arg3 ;
-(id)_previousLayoutAttributesForGlobalIndex:(long long)arg1 ;
-(id)_nextLayoutAttributesForGlobalIndex:(long long)arg1 ;
-(unsigned long long)_layoutAxisForAttributes:(id)arg1 previousAttributes:(id)arg2 nextAttributes:(id)arg3 ;
-(CGRect)_frameForInsertionIndicatorForTargetFrame:(CGRect)arg1 axis:(unsigned long long)arg2 edges:(unsigned long long)arg3 ;
-(CGRect)_centerInsertionIndicatorFrame:(CGRect)arg1 targetAttributes:(id)arg2 axis:(unsigned long long)arg3 edges:(unsigned long long)arg4 ;
-(id)_indexPathForInsertionIndicatorForTargetAttributes:(id)arg1 axis:(unsigned long long)arg2 edges:(unsigned long long)arg3 previousAttributes:(id)arg4 nextAttributes:(id)arg5 ;
-(id)_layoutAttributesForItemNearestPosition:(CGPoint)arg1 maximumDistance:(double)arg2 ;
-(id)_layoutAttributesForInsertionIndicatorAtItemWithTargetAttributes:(id)arg1 targetPositionEdges:(unsigned long long)arg2 ;
-(id)_layoutAttributesForElementsInProjectedRect:(CGRect)arg1 withProjectionVector:(CGVector)arg2 projectionDistance:(double)arg3 ;
-(id)_orthogonalScrollingStateForSection:(long long)arg1 ;
-(id)_orthogonalScrollingTrace;
-(id)snapshottedLayoutAttributeForItemAtIndexPath:(id)arg1 ;
-(void)registerNib:(id)arg1 forDecorationViewOfKind:(id)arg2 ;
-(void)_setCollectionViewBoundsSize:(CGSize)arg1 ;
-(void)_setDynamicAnimator:(id)arg1 ;
-(void)_setExternalObjectTable:(id)arg1 forNibLoadingOfDecorationViewOfKind:(id)arg2 ;
-(CGSize)_fallbackItemSize;
-(id)_layoutAttributesForInsertionIndicatorAtTargetPosition:(CGPoint)arg1 sourceIndexPath:(id)arg2 ;
-(id)_layoutAttributesForInsertionIndicatorAtTargetIndexPath:(id)arg1 ;
-(long long)_sublayoutType;
@end

