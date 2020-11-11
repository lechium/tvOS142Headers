/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RETrainingSimulationServerInterface <NSObject>
@required
-(void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(/*^block*/id)arg3;
-(void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4;
-(void)availableRelevanceEngines:(/*^block*/id)arg1;
-(void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(/*^block*/id)arg2;
-(void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(/*^block*/id)arg2;
-(void)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(/*^block*/id)arg3;
-(void)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 completion:(/*^block*/id)arg3;

@end

