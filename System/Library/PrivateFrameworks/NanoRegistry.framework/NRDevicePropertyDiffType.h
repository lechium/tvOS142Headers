/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NRDevicePropertyDiff, NRPBDevicePropertyDiffType;

@interface NRDevicePropertyDiffType : NSObject <NSCopying, NSSecureCoding> {

	NRDevicePropertyDiff* _diff;
	unsigned long long _changeType;

}

@property (nonatomic,readonly) NRDevicePropertyDiff * diff;                        //@synthesize diff=_diff - In the implementation block
@property (nonatomic,readonly) unsigned long long changeType;                      //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) NRPBDevicePropertyDiffType * protobuf; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)changeType;
-(NRDevicePropertyDiff *)diff;
-(NRPBDevicePropertyDiffType *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithDiff:(id)arg1 andChangeType:(unsigned long long)arg2 ;
@end

