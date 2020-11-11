/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLElement.h>

@class NSIndexPath, NSDate;

@interface TVLInitialSelectionElement : TVLElement {

	NSIndexPath* _indexPath;
	NSDate* _relevanceDate;

}

@property (nonatomic,retain) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) NSDate * relevanceDate;               //@synthesize relevanceDate=_relevanceDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(NSDate *)relevanceDate;
-(void)setRelevanceDate:(NSDate *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
@end
