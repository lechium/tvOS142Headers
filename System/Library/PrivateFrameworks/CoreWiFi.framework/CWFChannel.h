/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/WFScanableChannel.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CWFChannel : NSObject <WFScanableChannel, NSCopying, NSSecureCoding> {

	int _flags;
	unsigned long long _channel;

}

@property (nonatomic,readonly) unsigned long long channel; 
@property (nonatomic,readonly) unsigned long long flags; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long channel;                //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) int flags;                                 //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) BOOL is2GHz; 
@property (nonatomic,readonly) BOOL is5GHz; 
@property (nonatomic,readonly) BOOL isDFS; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)channel;
-(int)width;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setChannel:(unsigned long long)arg1 ;
-(BOOL)isEqualToChannel:(id)arg1 ;
-(BOOL)isDFS;
-(BOOL)is2GHz;
-(BOOL)is5GHz;
@end

