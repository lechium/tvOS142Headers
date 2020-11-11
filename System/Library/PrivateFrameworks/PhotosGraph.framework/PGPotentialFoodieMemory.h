/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGPotentialMemory.h>

@protocol PGGraphLocationOrArea;
@class NSDictionary, PGGraphNode;

@interface PGPotentialFoodieMemory : PGPotentialMemory {

	unsigned long long _kind;
	unsigned long long _type;
	unsigned long long _relevantFoodAssetCount;
	NSDictionary* _relevantFoodAssetUUIDsByMomentNodeLocalIdentifier;
	NSDictionary* _personAssetUUIDsByMomentNodeLocalIdentifier;
	PGGraphNode* _featuredNode;
	PGGraphNode*<PGGraphLocationOrArea> _tripLocationNode;
	unsigned long long _tripTitleLocationType;

}

@property (nonatomic,readonly) unsigned long long kind;                                                     //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long relevantFoodAssetCount;                                   //@synthesize relevantFoodAssetCount=_relevantFoodAssetCount - In the implementation block
@property (nonatomic,retain) NSDictionary * relevantFoodAssetUUIDsByMomentNodeLocalIdentifier;              //@synthesize relevantFoodAssetUUIDsByMomentNodeLocalIdentifier=_relevantFoodAssetUUIDsByMomentNodeLocalIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * personAssetUUIDsByMomentNodeLocalIdentifier;                    //@synthesize personAssetUUIDsByMomentNodeLocalIdentifier=_personAssetUUIDsByMomentNodeLocalIdentifier - In the implementation block
@property (nonatomic,retain) PGGraphNode * featuredNode;                                                    //@synthesize featuredNode=_featuredNode - In the implementation block
@property (nonatomic,retain) PGGraphNode*<PGGraphLocationOrArea> tripLocationNode;                          //@synthesize tripLocationNode=_tripLocationNode - In the implementation block
@property (assign,nonatomic) unsigned long long tripTitleLocationType;                                      //@synthesize tripTitleLocationType=_tripTitleLocationType - In the implementation block
-(unsigned long long)type;
-(unsigned long long)kind;
-(id)initWithMomentNodes:(id)arg1 kind:(unsigned long long)arg2 type:(unsigned long long)arg3 ;
-(unsigned long long)relevantFoodAssetCount;
-(NSDictionary *)relevantFoodAssetUUIDsByMomentNodeLocalIdentifier;
-(void)setRelevantFoodAssetUUIDsByMomentNodeLocalIdentifier:(NSDictionary *)arg1 ;
-(NSDictionary *)personAssetUUIDsByMomentNodeLocalIdentifier;
-(void)setPersonAssetUUIDsByMomentNodeLocalIdentifier:(NSDictionary *)arg1 ;
-(PGGraphNode *)featuredNode;
-(void)setFeaturedNode:(PGGraphNode *)arg1 ;
-(PGGraphNode*<PGGraphLocationOrArea>)tripLocationNode;
-(void)setTripLocationNode:(PGGraphNode*<PGGraphLocationOrArea>)arg1 ;
-(unsigned long long)tripTitleLocationType;
-(void)setTripTitleLocationType:(unsigned long long)arg1 ;
@end

