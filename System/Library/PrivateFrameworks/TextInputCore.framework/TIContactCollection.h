/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface TIContactCollection : NSObject {

	NSMutableArray* _contacts;
	long long _count;
	BOOL _sourceHasRelevancyScore;

}

@property (nonatomic,readonly) BOOL sourceHasRelevancyScore;              //@synthesize sourceHasRelevancyScore=_sourceHasRelevancyScore - In the implementation block
@property (nonatomic,readonly) long long count;                           //@synthesize count=_count - In the implementation block
-(long long)count;
-(void)addContact:(id)arg1 ;
-(id)initWithRelevanceScoreType:(BOOL)arg1 ;
-(void)enumerateContactsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)sourceHasRelevancyScore;
@end

