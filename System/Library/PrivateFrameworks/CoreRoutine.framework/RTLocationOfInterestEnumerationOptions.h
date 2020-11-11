/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <CoreRoutine/RTEnumerationOptions.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval;

@interface RTLocationOfInterestEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {

	BOOL _ascending;
	BOOL _wrappedVisit;
	unsigned long long _batchSize;
	NSDateInterval* _dateInterval;

}

@property (nonatomic,readonly) BOOL ascending;                            //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) unsigned long long batchSize;              //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;                 //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) BOOL wrappedVisit;                         //@synthesize wrappedVisit=_wrappedVisit - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)ascending;
-(unsigned long long)batchSize;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(Class)enumeratedType;
-(/*^block*/id)processingBlock;
-(id)initWithAscending:(BOOL)arg1 batchSize:(unsigned long long)arg2 dateInterval:(id)arg3 wrappedVisit:(BOOL)arg4 ;
-(BOOL)wrappedVisit;
@end

