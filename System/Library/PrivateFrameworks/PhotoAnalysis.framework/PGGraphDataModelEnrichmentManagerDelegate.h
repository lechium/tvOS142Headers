/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PGGraphDataModelEnrichmentManagerDelegate <NSObject>
@required
-(BOOL)enrichmentManager:(id)arg1 shouldRunProcessor:(id)arg2;
-(void)enrichmentManager:(id)arg1 didRunProcessor:(id)arg2;
-(void)enrichmentManager:(id)arg1 didCancelProcessor:(id)arg2;
-(void)enrichmentManager:(id)arg1 didFinishEnrichmentSuccessfully:(BOOL)arg2;

@end
