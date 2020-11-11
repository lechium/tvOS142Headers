/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTSignalStrengthMeasurements : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _rssi;
	NSNumber* _rscp;
	NSNumber* _ecn0;
	NSNumber* _rsrp;
	NSNumber* _rsrq;
	NSNumber* _snr;
	NSNumber* _ecio;
	NSNumber* _rxagc;

}

@property (nonatomic,retain) NSNumber * rssi;               //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,retain) NSNumber * rscp;               //@synthesize rscp=_rscp - In the implementation block
@property (nonatomic,retain) NSNumber * ecn0;               //@synthesize ecn0=_ecn0 - In the implementation block
@property (nonatomic,retain) NSNumber * rsrp;               //@synthesize rsrp=_rsrp - In the implementation block
@property (nonatomic,retain) NSNumber * rsrq;               //@synthesize rsrq=_rsrq - In the implementation block
@property (nonatomic,retain) NSNumber * snr;                //@synthesize snr=_snr - In the implementation block
@property (nonatomic,retain) NSNumber * ecio;               //@synthesize ecio=_ecio - In the implementation block
@property (nonatomic,retain) NSNumber * rxagc;              //@synthesize rxagc=_rxagc - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)rssi;
-(NSNumber *)rscp;
-(NSNumber *)ecn0;
-(NSNumber *)rsrp;
-(NSNumber *)rsrq;
-(NSNumber *)snr;
-(NSNumber *)ecio;
-(NSNumber *)rxagc;
-(void)setRssi:(NSNumber *)arg1 ;
-(void)setRscp:(NSNumber *)arg1 ;
-(void)setEcn0:(NSNumber *)arg1 ;
-(void)setRsrp:(NSNumber *)arg1 ;
-(void)setRsrq:(NSNumber *)arg1 ;
-(void)setSnr:(NSNumber *)arg1 ;
-(void)setEcio:(NSNumber *)arg1 ;
-(void)setRxagc:(NSNumber *)arg1 ;
@end

