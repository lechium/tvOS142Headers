/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _PASCFBurstTrie, PPTrialWrapper;

@interface PPTopicBlocklist : NSObject {

	_PASCFBurstTrie* _blocklistTrie;
	PPTrialWrapper* _trialWrapper;

}
+(id)sharedInstance;
-(id)initWithTrialWrapper:(id)arg1 ;
-(void)_loadAssetData;
-(BOOL)shouldBlock:(id)arg1 ;
-(id)indicesOfBlockedTopicsInRecordArray:(id)arg1 ;
-(id)indicesOfBlockedTopicsInScoredTopicArray:(id)arg1 ;
@end

