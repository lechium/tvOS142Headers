/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSString;


@protocol WFOtherNetworkProviderContext <WFCredentialsProviderContext>
@property (nonatomic,readonly) BOOL WAPIEnabled; 
@property (nonatomic,readonly) NSArray * WAPIRootCertificates; 
@property (nonatomic,readonly) NSArray * WAPIIdentities; 
@property (nonatomic,readonly) BOOL supportsRandomMACAddress; 
@property (nonatomic,readonly) BOOL isUsingRandomMACAddress; 
@property (nonatomic,copy,readonly) NSString * randomMACAddress; 
@property (nonatomic,copy,readonly) NSString * hardwareMACAddress; 
@required
-(BOOL)isUsingRandomMACAddress;
-(NSString *)randomMACAddress;
-(NSString *)hardwareMACAddress;
-(NSArray *)WAPIRootCertificates;
-(NSArray *)WAPIIdentities;
-(void)saveRandomMAC;
-(void)saveHardwareMAC;
-(BOOL)WAPIEnabled;
-(BOOL)supportsRandomMACAddress;

@end
