/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXUIScrollViewControllerFocusItemProvider.h>
#import <UIKit/UIFocusEnvironment.h>
#import <libobjc.A.dylib/PXGAXGroup.h>

@protocol PXGAXGroupSource, PXGAXInfoSource, PXGAXResponder;
@class NSArray, UIView, NSString, NSMutableDictionary, NSMutableIndexSet, NSIndexSet, PXGLayout;

@interface PXGBasicAXGroup : NSObject <PXUIScrollViewControllerFocusItemProvider, UIFocusEnvironment, PXGAXGroup> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	long long _version;
	NSMutableDictionary* _mutableIndexesToSubgroups;
	NSMutableDictionary* _mutableSpritesToLeafs;
	NSMutableIndexSet* _requiredLeafIndexesToLoad;
	NSIndexSet* _previouslySelectedIndexes;
	PXGBasicAXGroup* _axParent;
	BOOL _axIsVisible;
	long long _axRole;
	id<PXGAXGroupSource> _axGroupSource;
	id<PXGAXInfoSource> _axInfoSource;
	id<PXGAXResponder> _axNextResponder;
	long long _subgroupIndex;
	unsigned long long _leafFeatures;
	CGRect _axFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
@property (nonatomic,readonly) PXGLayout * containingLayout; 
@property (assign,nonatomic) CGRect axFrame;                                                      //@synthesize axFrame=_axFrame - In the implementation block
@property (assign,nonatomic) BOOL axIsVisible;                                                    //@synthesize axIsVisible=_axIsVisible - In the implementation block
@property (nonatomic,readonly) NSString * recursiveDescription; 
@property (nonatomic,readonly) NSString * recursiveLeafDescription; 
@property (nonatomic,__weak,readonly) PXGBasicAXGroup * axRootParent; 
@property (nonatomic,readonly) BOOL needsUpdate; 
@property (assign,nonatomic) long long axRole;                                                    //@synthesize axRole=_axRole - In the implementation block
@property (assign,nonatomic,__weak) id<PXGAXGroupSource> axGroupSource;                           //@synthesize axGroupSource=_axGroupSource - In the implementation block
@property (assign,nonatomic,__weak) id<PXGAXInfoSource> axInfoSource;                             //@synthesize axInfoSource=_axInfoSource - In the implementation block
@property (assign,nonatomic,__weak) PXGBasicAXGroup * axParent; 
@property (assign,nonatomic,__weak) id<PXGAXResponder> axNextResponder;                           //@synthesize axNextResponder=_axNextResponder - In the implementation block
@property (nonatomic,readonly) NSIndexSet * loadedSubgroupIndexes; 
@property (assign,nonatomic) long long subgroupIndex;                                             //@synthesize subgroupIndex=_subgroupIndex - In the implementation block
@property (assign,nonatomic) unsigned long long leafFeatures;                                     //@synthesize leafFeatures=_leafFeatures - In the implementation block
@property (nonatomic,readonly) NSIndexSet * loadedLeafIndexes; 
@property (nonatomic,readonly) NSArray * axSubgroups; 
@property (nonatomic,readonly) NSArray * axLeafs; 
@property (nonatomic,readonly) BOOL axIsSelected; 
-(NSString *)description;
-(id)init;
-(NSString *)recursiveDescription;
-(BOOL)needsUpdate;
-(id)initWithLayout:(id)arg1 ;
-(void)invalidateLayout;
-(void)updateIfNeeded;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(NSArray *)preferredFocusEnvironments;
-(long long)subgroupIndex;
-(void)setSubgroupIndex:(long long)arg1 ;
-(void)updateFocusIfNeeded;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;
-(void)invalidateVersion;
-(id)_paddingForLevel:(long long)arg1 ;
-(void)_appendDescription:(id)arg1 atLevel:(long long)arg2 ;
-(id<PXGAXResponder>)axNextResponder;
-(void)setAxNextResponder:(id<PXGAXResponder>)arg1 ;
-(id<PXGAXGroupSource>)axGroupSource;
-(id<PXGAXInfoSource>)axInfoSource;
-(long long)axRole;
-(PXGBasicAXGroup *)axParent;
-(NSArray *)axSubgroups;
-(NSArray *)axLeafs;
-(CGRect)axFrame;
-(BOOL)axIsSelected;
-(void)invalidateVisibility;
-(void)invalidateLeafs;
-(void)_updateVersionIfNeeded;
-(void)_updateVisibilityIfNeeded;
-(void)_updateLeafsIfNeeded;
-(void)_updateLayoutIfNeeded;
-(void)setAxRole:(long long)arg1 ;
-(PXGBasicAXGroup *)axRootParent;
-(NSIndexSet *)loadedSubgroupIndexes;
-(id)loadedSubgroupAtIndex:(long long)arg1 ;
-(void)loadSubgroup:(id)arg1 atIndex:(long long)arg2 ;
-(void)unloadSubgroupAtIndex:(long long)arg1 ;
-(void)_unloadSubgroupAtIndex:(long long)arg1 shouldNotify:(BOOL)arg2 ;
-(void)_cleanUpSubgroupAfterUnloading:(id)arg1 ;
-(void)unloadFromParent;
-(NSIndexSet *)loadedLeafIndexes;
-(id)loadedLeafAtSpriteIndex:(unsigned)arg1 ;
-(id)loadLeafAtSpriteIndexIfNeeded:(unsigned)arg1 usingOptions:(unsigned long long)arg2 ;
-(id)_loadNeighboringLeafsAtSpriteIndex:(unsigned)arg1 ;
-(unsigned)_loadClosestLeafAtSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2 ;
-(BOOL)_loadOrUpdateLeafAtSpriteIndex:(unsigned)arg1 ;
-(void)_setLeaf:(id)arg1 forSpriteIndex:(unsigned)arg2 ;
-(id)_leafAtSpriteIndex:(unsigned)arg1 ;
-(void)unloadLeafAtSpriteIndex:(unsigned)arg1 usingOptions:(unsigned long long)arg2 ;
-(void)unloadAllLeafs;
-(id)_removeLeafAtSpriteIndex:(unsigned)arg1 ;
-(id)leafsInRect:(CGRect)arg1 usingOptions:(unsigned long long)arg2 ;
-(void)_leafsInRect:(CGRect)arg1 usingOptions:(unsigned long long)arg2 intoMutableArray:(id)arg3 ;
-(id)leafAtPoint:(CGPoint)arg1 ;
-(id)childrenPassingFilter:(unsigned long long)arg1 usingOptions:(unsigned long long)arg2 ;
-(void)_addChildrenPassingFilter:(unsigned long long)arg1 usingOptions:(unsigned long long)arg2 intoArray:(id)arg3 ;
-(void)_addSubgroupsPassingFilter:(unsigned long long)arg1 intoArray:(id)arg2 ;
-(void)_addLeafsPassingFilter:(unsigned long long)arg1 usingOptions:(unsigned long long)arg2 intoArray:(id)arg3 ;
-(void)_addCurrentlyLoadedLeafsPassingFilter:(unsigned long long)arg1 intoArray:(id)arg2 ;
-(void)_addAllLeafsPassingFilter:(unsigned long long)arg1 intoArray:(id)arg2 ;
-(BOOL)_passesFilter:(unsigned long long)arg1 ;
-(BOOL)_leafAtSpriteIndex:(unsigned)arg1 passesFilter:(unsigned long long)arg2 ;
-(BOOL)_leafAtSpriteIndexIsAccessible:(unsigned)arg1 ;
-(BOOL)_leafAtSpriteIndexIsSelected:(unsigned)arg1 ;
-(BOOL)_leafAtSpriteIndexIsVisible:(unsigned)arg1 ;
-(void)updateSubgroupsWithChangeDetails:(id)arg1 ;
-(void)updateLeafsWithChangeDetails:(id)arg1 ;
-(void)_updateLeafAtSpriteIndex:(unsigned)arg1 ;
-(BOOL)updateWithSelectedChildren:(id)arg1 ;
-(void)setAxParent:(PXGBasicAXGroup *)arg1 ;
-(NSString *)recursiveLeafDescription;
-(void)_appendLeafDescription:(id)arg1 atLevel:(long long)arg2 ;
-(void)setAxGroupSource:(id<PXGAXGroupSource>)arg1 ;
-(void)setAxInfoSource:(id<PXGAXInfoSource>)arg1 ;
-(unsigned long long)leafFeatures;
-(void)setLeafFeatures:(unsigned long long)arg1 ;
-(void)setAxFrame:(CGRect)arg1 ;
-(BOOL)axIsVisible;
-(void)setAxIsVisible:(BOOL)arg1 ;
-(id)focusItemsForScrollViewController:(id)arg1 inRect:(CGRect)arg2 ;
-(void)_selectedIndexesDidChange;
-(PXGLayout *)containingLayout;
@end

