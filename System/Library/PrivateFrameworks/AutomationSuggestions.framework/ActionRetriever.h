/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AutomationSuggestions.framework/AutomationSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeQuerying;
@class NSMutableDictionary;

@interface ActionRetriever : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSMutableDictionary* _intentCache;
	NSMutableDictionary* _activityCache;

}

@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * intentCache;                    //@synthesize intentCache=_intentCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activityCache;                  //@synthesize activityCache=_activityCache - In the implementation block
-(id)init;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id)queryForIntentsWithBundleId:(id)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3 ;
-(id)retrieveIntentEventForItem:(id)arg1 ;
-(id)queryForActivitiesWithBundleId:(id)arg1 activityType:(id)arg2 ;
-(id)retrieveActivityEventForItem:(id)arg1 ;
-(NSMutableDictionary *)intentCache;
-(void)setIntentCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)activityCache;
-(void)setActivityCache:(NSMutableDictionary *)arg1 ;
@end

