/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFLinkQuality : NSObject <NSCopying> {

	float _scaledRssi;
	NSString* _ssid;
	long long _rssi;

}

@property (nonatomic,copy) NSString * ssid;                 //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) long long rssi;                //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) float scaledRssi;              //@synthesize scaledRssi=_scaledRssi - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(long long)rssi;
-(void)setRssi:(long long)arg1 ;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(float)scaledRssi;
-(id)initWithSSID:(id)arg1 rssi:(long long)arg2 scaledRSSI:(float)arg3 ;
-(void)setScaledRssi:(float)arg1 ;
@end
