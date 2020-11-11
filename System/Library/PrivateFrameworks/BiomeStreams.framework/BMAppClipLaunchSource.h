/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStreams/BMSource.h>

@class _CDClientContext, _DKKnowledgeStore;

@interface BMAppClipLaunchSource : BMSource {

	_CDClientContext* _contextStore;
	_DKKnowledgeStore* _knowledgeStore;

}

@property (nonatomic,readonly) _CDClientContext * contextStore;                 //@synthesize contextStore=_contextStore - In the implementation block
@property (nonatomic,readonly) _DKKnowledgeStore * knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(id)initWithIdentifier:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(_DKKnowledgeStore *)knowledgeStore;
-(_CDClientContext *)contextStore;
@end
