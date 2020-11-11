/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGGraphIngestPet.h>

@class NSSet, NSMutableSet, NSString;

@interface PGPet : NSObject <PGGraphIngestPet> {

	NSMutableSet* _momentNodes;
	NSMutableSet* _ownerNodes;

}

@property (nonatomic,readonly) NSMutableSet * momentNodes;              //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,readonly) NSMutableSet * ownerNodes;               //@synthesize ownerNodes=_ownerNodes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)momentNodes;
-(NSMutableSet *)ownerNodes;
-(id)initWithMomentNodes:(id)arg1 ownerNodes:(id)arg2 ;
@end

