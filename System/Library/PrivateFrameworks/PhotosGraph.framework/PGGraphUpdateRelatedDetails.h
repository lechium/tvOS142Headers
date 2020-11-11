/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSSet;

@interface PGGraphUpdateRelatedDetails : NSObject {

	NSMutableSet* _accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
	NSMutableSet* _accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;

}

@property (nonatomic,retain) NSMutableSet * accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;              //@synthesize accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons=_accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons - In the implementation block
@property (nonatomic,retain) NSMutableSet * accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;              //@synthesize accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons=_accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons - In the implementation block
@property (nonatomic,readonly) NSSet * identifiersForMomentRelatedToUpdatedPersons; 
@property (nonatomic,readonly) NSSet * identifiersForMomentRelatedToDeletedPersons; 
-(id)init;
-(id)_momentNodesFromPersonNodes:(id)arg1 ;
-(NSSet *)identifiersForMomentRelatedToUpdatedPersons;
-(NSSet *)identifiersForMomentRelatedToDeletedPersons;
-(void)accumulateDetailsForUpdatedPersonNode:(id)arg1 personChange:(id)arg2 ;
-(void)accumulateDetailsForDeletedPersonNodes:(id)arg1 ;
-(void)_accumulateMomentIdentifiersInto:(id)arg1 forPersonNodes:(id)arg2 ;
-(NSMutableSet *)accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
-(void)setAccumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons:(NSMutableSet *)arg1 ;
-(NSMutableSet *)accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;
-(void)setAccumulatedIdentifiersForMomentNodesRelatedToDeletedPersons:(NSMutableSet *)arg1 ;
@end

