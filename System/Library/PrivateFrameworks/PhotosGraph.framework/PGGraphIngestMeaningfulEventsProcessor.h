/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@class NSString;

@interface PGGraphIngestMeaningfulEventsProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)processMeaningfulEventsWithMomentNodes:(id)arg1 graph:(id)arg2 requiredMeaningfulEventCriteriaByIdentifier:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)updateMeaningsOfMomentNode:(id)arg1 graph:(id)arg2 affectedMeaningLabels:(id)arg3 withMatchedResults:(id)arg4 ;
@end

