/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, NSNumber;

@interface CMSignificantElevationSample : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long fRecordId;
	NSUUID* fSourceId;
	NSDate* fStartDate;
	NSDate* fEndDate;
	NSNumber* fElevationAscended;
	NSNumber* fElevationDescended;

}

@property (nonatomic,readonly) unsigned long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSNumber * elevationAscended; 
@property (nonatomic,readonly) NSNumber * elevationDescended; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(unsigned long long)recordId;
-(NSUUID *)sourceId;
-(id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 elevationAscended:(id)arg5 elevationDescended:(id)arg6 ;
-(NSNumber *)elevationAscended;
-(NSNumber *)elevationDescended;
-(id)initWithSignificantElevation:(const CLSignificantElevation*)arg1 ;
-(id)initWithFilteredElevation:(const CLElevationChangeEntry*)arg1 ;
@end

