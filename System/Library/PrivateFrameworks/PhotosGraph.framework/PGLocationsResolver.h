/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PGIncompleteLocationResolver, NSArray, NSSet, NSMapTable;

@interface PGLocationsResolver : NSObject {

	BOOL _shouldCreateLocationToAddressMapTable;
	float _maximumMissingLocationsThreshold;
	PGIncompleteLocationResolver* _incompleteLocationResolver;
	NSArray* _sortedMoments;
	NSSet* _ignoredLocationNodes;
	NSSet* _ignoredAddressNodes;
	NSArray* _resolvedMomentNodes;
	NSArray* _resolvedLocationNodes;
	NSMapTable* _resolvedLocationNodesToAddressNodesMapTable;

}

@property (nonatomic,retain) PGIncompleteLocationResolver * incompleteLocationResolver;               //@synthesize incompleteLocationResolver=_incompleteLocationResolver - In the implementation block
@property (nonatomic,retain) NSArray * sortedMoments;                                                 //@synthesize sortedMoments=_sortedMoments - In the implementation block
@property (nonatomic,retain) NSArray * resolvedMomentNodes;                                           //@synthesize resolvedMomentNodes=_resolvedMomentNodes - In the implementation block
@property (nonatomic,retain) NSArray * resolvedLocationNodes;                                         //@synthesize resolvedLocationNodes=_resolvedLocationNodes - In the implementation block
@property (nonatomic,retain) NSSet * ignoredLocationNodes;                                            //@synthesize ignoredLocationNodes=_ignoredLocationNodes - In the implementation block
@property (nonatomic,retain) NSSet * ignoredAddressNodes;                                             //@synthesize ignoredAddressNodes=_ignoredAddressNodes - In the implementation block
@property (assign,nonatomic) BOOL shouldCreateLocationToAddressMapTable;                              //@synthesize shouldCreateLocationToAddressMapTable=_shouldCreateLocationToAddressMapTable - In the implementation block
@property (assign,nonatomic) float maximumMissingLocationsThreshold;                                  //@synthesize maximumMissingLocationsThreshold=_maximumMissingLocationsThreshold - In the implementation block
@property (nonatomic,readonly) NSMapTable * resolvedLocationNodesToAddressNodesMapTable;              //@synthesize resolvedLocationNodesToAddressNodesMapTable=_resolvedLocationNodesToAddressNodesMapTable - In the implementation block
-(NSArray *)sortedMoments;
-(void)setSortedMoments:(NSArray *)arg1 ;
-(PGIncompleteLocationResolver *)incompleteLocationResolver;
-(id)initWithMomentNodes:(id)arg1 incompleteLocationResolver:(id)arg2 ;
-(id)initWithSortedMomentNodes:(id)arg1 incompleteLocationResolver:(id)arg2 ;
-(NSArray *)resolvedMomentNodes;
-(NSArray *)resolvedLocationNodes;
-(NSMapTable *)resolvedLocationNodesToAddressNodesMapTable;
-(void)setCreateLocationToAddressMapTable:(BOOL)arg1 ;
-(void)setMaximumMissingLocationsThreshold:(float)arg1 ;
-(void)_resolve;
-(float)maximumMissingLocationsThreshold;
-(void)setIncompleteLocationResolver:(PGIncompleteLocationResolver *)arg1 ;
-(NSSet *)ignoredLocationNodes;
-(void)setIgnoredLocationNodes:(NSSet *)arg1 ;
-(NSSet *)ignoredAddressNodes;
-(void)setIgnoredAddressNodes:(NSSet *)arg1 ;
-(void)setResolvedMomentNodes:(NSArray *)arg1 ;
-(void)setResolvedLocationNodes:(NSArray *)arg1 ;
-(BOOL)shouldCreateLocationToAddressMapTable;
-(void)setShouldCreateLocationToAddressMapTable:(BOOL)arg1 ;
@end

