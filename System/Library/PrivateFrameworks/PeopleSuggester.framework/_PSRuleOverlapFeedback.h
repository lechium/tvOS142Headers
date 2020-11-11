/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeQuerying;
@class _CDInteractionStore, NSUserDefaults;

@interface _PSRuleOverlapFeedback : NSObject {

	_CDInteractionStore* _interactionStore;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSUserDefaults* _ruleOverlapFeedbackDefaults;

}

@property (nonatomic,retain) _CDInteractionStore * interactionStore;                    //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;                   //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) NSUserDefaults * ruleOverlapFeedbackDefaults;              //@synthesize ruleOverlapFeedbackDefaults=_ruleOverlapFeedbackDefaults - In the implementation block
-(id)init;
-(_CDInteractionStore *)interactionStore;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
-(void)writeRecordObjcWithData:(id)arg1 ;
-(NSUserDefaults *)ruleOverlapFeedbackDefaults;
-(void)setRuleOverlapFeedbackDefaults:(NSUserDefaults *)arg1 ;
@end
