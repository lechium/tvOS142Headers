/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PPScoreInterpreter, PPScoreDict;

@interface PPStreamingTopicScorer : NSObject {

	PPScoreInterpreter* _aggregationScorer;
	PPScoreInterpreter* _finalScorer;
	PPScoreDict* _aggregationScoreInputs;
	PPScoreDict* _currentAggResult;

}
@end

