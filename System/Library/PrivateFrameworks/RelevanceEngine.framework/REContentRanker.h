/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REContentRankerProperties.h>

@class NSString;

@interface REContentRanker : NSObject <REContentRankerProperties> {

	REContentFeatureExtractor* _extractor;

}

@property (nonatomic,readonly) NSString * positiveContent; 
@property (nonatomic,readonly) NSString * negativeContent; 
-(id)init;
-(id)predict:(id)arg1 ;
-(BOOL)load:(id)arg1 error:(id*)arg2 ;
-(NSString *)positiveContent;
-(NSString *)negativeContent;
-(BOOL)save:(id)arg1 error:(id*)arg2 ;
-(BOOL)train:(id)arg1 isPositive:(BOOL)arg2 ;
-(long long)positiveMapSize;
-(long long)negativeMapSize;
@end

