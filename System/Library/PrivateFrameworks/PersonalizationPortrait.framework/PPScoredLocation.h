/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PPLocation;

@interface PPScoredLocation : NSObject <NSCopying, NSSecureCoding> {

	PPLocation* _location;
	double _score;
	double _sentimentScore;

}

@property (nonatomic,readonly) PPLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double score;                       //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) double sentimentScore;              //@synthesize sentimentScore=_sentimentScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)score;
-(PPLocation *)location;
-(double)sentimentScore;
-(id)initWithLocation:(id)arg1 score:(double)arg2 sentimentScore:(double)arg3 ;
-(BOOL)isEqualToScoredLocation:(id)arg1 ;
@end

