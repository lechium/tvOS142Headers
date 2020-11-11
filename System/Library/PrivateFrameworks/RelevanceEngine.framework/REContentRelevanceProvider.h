/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSArray;

@interface REContentRelevanceProvider : RERelevanceProvider {

	NSArray* _keywords;

}

@property (nonatomic,readonly) NSArray * keywords;              //@synthesize keywords=_keywords - In the implementation block
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
-(NSArray *)keywords;
-(id)initWithContent:(id)arg1 ;
-(id)dictionaryEncoding;
-(id)initWithKeywords:(id)arg1 ;
@end
