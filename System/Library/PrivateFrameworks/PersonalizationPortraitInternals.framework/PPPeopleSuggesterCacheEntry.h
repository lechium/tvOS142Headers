/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface PPPeopleSuggesterCacheEntry : NSObject {

	double _cacheTimeSecondsSince1970;
	NSArray* _identifiers;

}

@property (assign,nonatomic) double cacheTimeSecondsSince1970;              //@synthesize cacheTimeSecondsSince1970=_cacheTimeSecondsSince1970 - In the implementation block
@property (nonatomic,retain) NSArray * identifiers;                         //@synthesize identifiers=_identifiers - In the implementation block
-(NSArray *)identifiers;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(double)cacheTimeSecondsSince1970;
-(void)setCacheTimeSecondsSince1970:(double)arg1 ;
@end

