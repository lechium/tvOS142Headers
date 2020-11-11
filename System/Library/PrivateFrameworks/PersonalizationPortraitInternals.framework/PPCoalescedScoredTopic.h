/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PPScoredItem;

@interface PPCoalescedScoredTopic : NSObject {

	unsigned short _occurrencesInSource;
	PPScoredItem* _scoredTopic;

}

@property (nonatomic,readonly) PPScoredItem * scoredTopic;                      //@synthesize scoredTopic=_scoredTopic - In the implementation block
@property (nonatomic,readonly) unsigned short occurrencesInSource;              //@synthesize occurrencesInSource=_occurrencesInSource - In the implementation block
-(id)init;
-(unsigned short)occurrencesInSource;
-(id)initWithScoredTopic:(id)arg1 occurrencesInSource:(unsigned short)arg2 ;
-(PPScoredItem *)scoredTopic;
@end

