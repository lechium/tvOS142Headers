/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol PGRelationshipAnalyzer <NSObject>
@property (nonatomic,readonly) NSString * name; 
@required
-(NSString *)name;
-(void)runAnalysisWithProgressBlock:(/*^block*/id)arg1;
-(id)initWithRelationshipProcessor:(id)arg1;

@end
