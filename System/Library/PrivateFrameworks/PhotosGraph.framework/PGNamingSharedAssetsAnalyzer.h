/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGNamingAnalyzer.h>

@class PGGraphNamingProcessor, NSString;

@interface PGNamingSharedAssetsAnalyzer : NSObject <PGNamingAnalyzer> {

	PGGraphNamingProcessor* _processor;

}

@property (nonatomic,__weak,readonly) PGGraphNamingProcessor * processor;              //@synthesize processor=_processor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(PGGraphNamingProcessor *)processor;
-(id)initWithNamingProcessor:(id)arg1 ;
-(void)runAnalysisWithProgressBlock:(/*^block*/id)arg1 ;
-(void)findSharedAssetMatchesFromSharingRecords:(id)arg1 personLocalIdentifiersByAssetUUID:(id)arg2 graph:(id)arg3 withProgressBlock:(/*^block*/id)arg4 ;
@end

