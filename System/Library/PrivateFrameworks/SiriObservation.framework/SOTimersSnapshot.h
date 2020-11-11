/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/SiriObservation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriObservation/SiriObservation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDictionary;

@interface SOTimersSnapshot : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _date;
	NSDictionary* _timersByID;

}

@property (nonatomic,copy,readonly) NSDate * date;                          //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * timersByID;              //@synthesize timersByID=_timersByID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSDictionary *)timersByID;
-(id)initWithDate:(id)arg1 timersByID:(id)arg2 ;
@end

