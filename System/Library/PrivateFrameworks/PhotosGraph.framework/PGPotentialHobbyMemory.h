/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, NSArray, PGGraphPersonNode;

@interface PGPotentialHobbyMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	NSArray* _hobbyAssetLocalIdentifiers;
	PGGraphPersonNode* _personNode;
	long long _year;
	long long _hobbyType;

}

@property (retain) NSArray * hobbyAssetLocalIdentifiers;              //@synthesize hobbyAssetLocalIdentifiers=_hobbyAssetLocalIdentifiers - In the implementation block
@property (readonly) PGGraphPersonNode * personNode;                  //@synthesize personNode=_personNode - In the implementation block
@property (readonly) long long year;                                  //@synthesize year=_year - In the implementation block
@property (readonly) long long hobbyType;                             //@synthesize hobbyType=_hobbyType - In the implementation block
-(long long)year;
-(long long)hobbyType;
-(void)addMomentNode:(id)arg1 ;
-(PGGraphPersonNode *)personNode;
-(id)initWithPerson:(id)arg1 year:(long long)arg2 hobbyType:(long long)arg3 ;
-(NSArray *)hobbyAssetLocalIdentifiers;
-(void)setHobbyAssetLocalIdentifiers:(NSArray *)arg1 ;
@end

