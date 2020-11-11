/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, PGGraphAddressNode, NSArray;

@interface PGPeopleVisitingVisit : NSObject {

	NSMutableArray* _momentNodes;
	BOOL _hasVeryCloseMoments;
	PGGraphAddressNode* _addressNode;

}

@property (readonly) PGGraphAddressNode * addressNode;              //@synthesize addressNode=_addressNode - In the implementation block
@property (readonly) NSArray * momentNodes;                         //@synthesize momentNodes=_momentNodes - In the implementation block
@property (readonly) BOOL isValid; 
@property (readonly) BOOL matchesFarVisitCriteria; 
@property (readonly) BOOL matchesCloseVisitCriteria; 
-(id)description;
-(BOOL)isValid;
-(NSArray *)momentNodes;
-(PGGraphAddressNode *)addressNode;
-(BOOL)matchesFarVisitCriteria;
-(void)addMomentNode:(id)arg1 isVeryClose:(BOOL)arg2 ;
-(id)initWithAddressNode:(id)arg1 ;
-(BOOL)matchesCloseVisitCriteria;
@end

