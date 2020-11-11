/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TVTopShelfRottenTomatoesRating : NSObject <NSSecureCoding> {

	unsigned long long _freshnessType;
	double _freshnessRating;

}

@property (nonatomic,readonly) unsigned long long freshnessType;              //@synthesize freshnessType=_freshnessType - In the implementation block
@property (nonatomic,readonly) double freshnessRating;                        //@synthesize freshnessRating=_freshnessRating - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_logStringForFreshnessType:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)freshnessType;
-(double)freshnessRating;
-(id)initWithFreshnessType:(unsigned long long)arg1 freshnessRating:(double)arg2 ;
@end

