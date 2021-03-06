/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PGHighlightItemEnrichmentRule;
@class NSDictionary;

@interface PGHighlightItemEnrichment : NSObject {

	id<PGHighlightItemEnrichmentRule> _rule;
	NSDictionary* _contextualKeyAssetByHighlighItemUUID;

}

@property (nonatomic,readonly) id<PGHighlightItemEnrichmentRule> rule;                           //@synthesize rule=_rule - In the implementation block
@property (nonatomic,readonly) NSDictionary * contextualKeyAssetByHighlighItemUUID;              //@synthesize contextualKeyAssetByHighlighItemUUID=_contextualKeyAssetByHighlighItemUUID - In the implementation block
-(id<PGHighlightItemEnrichmentRule>)rule;
-(id)initWithRule:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2 ;
-(void)enrichHighlightItemLists:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)contextualKeyAssetByHighlighItemUUID;
@end

