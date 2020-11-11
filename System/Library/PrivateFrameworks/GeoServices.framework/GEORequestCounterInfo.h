/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface GEORequestCounterInfo : NSObject <NSSecureCoding> {

	NSDictionary* _requestTypeStatistics;
	unsigned long long _bytesTransmitted;
	unsigned long long _bytesReceived;

}

@property (nonatomic,readonly) NSArray * requestTypes; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)_formattedString;
-(void)_generateAggregateStatistics;
-(NSArray *)requestTypes;
-(unsigned long long)numberOfRequestsForType:(SCD_Struct_GE0)arg1 result:(unsigned char)arg2 ;
-(unsigned long long)xmitBytes;
-(unsigned long long)xmitBytesForType:(SCD_Struct_GE0)arg1 ;
-(unsigned long long)recvBytes;
-(unsigned long long)recvBytesForType:(SCD_Struct_GE0)arg1 ;
-(void)enumerateRequestTypes:(/*^block*/id)arg1 ;
-(id)nonZeroResultTypesForType:(SCD_Struct_GE0)arg1 ;
@end
