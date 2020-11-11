/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PLFrequentLocationProtocol.h>

@class NSDateInterval, NSArray, NSString, NSDate, PGGraphAddressNode, NSSet;

@interface PGGraphFrequentLocationNode : PGGraphOptimizedNode <PLFrequentLocationProtocol> {

	NSDateInterval* _localDateInterval;

}

@property (readonly) CLLocationCoordinate2D coordinate; 
@property (readonly) NSDateInterval * dateInterval; 
@property (readonly) NSArray * sortedMoments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSDate * localStartDate; 
@property (readonly) NSDate * localEndDate; 
@property (readonly) NSDateInterval * localDateInterval;                  //@synthesize localDateInterval=_localDateInterval - In the implementation block
@property (readonly) PGGraphAddressNode * addressNode; 
@property (readonly) NSSet * momentNodes; 
@property (readonly) unsigned long long numberOfMomentNodes; 
+(id)filter;
-(id)name;
-(NSString *)description;
-(id)init;
-(unsigned short)domain;
-(CLLocationCoordinate2D)coordinate;
-(id)label;
-(NSDateInterval *)dateInterval;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSArray *)sortedMoments;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
-(NSDateInterval *)localDateInterval;
-(NSSet *)momentNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphAddressNode *)addressNode;
-(unsigned long long)numberOfMomentNodes;
@end

