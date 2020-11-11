/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DMFUpdateAppRequest.h>

@class NSString, NSArray, NSNumber, NSDictionary;

@interface DMFMDMv1UpdateAppRequest : DMFUpdateAppRequest {

	NSString* _originator;
	unsigned long long _managementOptions;
	NSString* _VPNUUIDString;
	NSArray* _associatedDomains;
	NSNumber* _associatedDomainsEnableDirectDownloads;
	NSNumber* _removable;
	NSDictionary* _configuration;

}

@property (nonatomic,copy) NSString * originator;                                          //@synthesize originator=_originator - In the implementation block
@property (assign,nonatomic) unsigned long long managementOptions;                         //@synthesize managementOptions=_managementOptions - In the implementation block
@property (nonatomic,copy) NSString * VPNUUIDString;                                       //@synthesize VPNUUIDString=_VPNUUIDString - In the implementation block
@property (nonatomic,copy) NSArray * associatedDomains;                                    //@synthesize associatedDomains=_associatedDomains - In the implementation block
@property (nonatomic,copy) NSNumber * associatedDomainsEnableDirectDownloads;              //@synthesize associatedDomainsEnableDirectDownloads=_associatedDomainsEnableDirectDownloads - In the implementation block
@property (nonatomic,copy) NSNumber * removable;                                           //@synthesize removable=_removable - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;                                   //@synthesize configuration=_configuration - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)configuration;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSArray *)associatedDomains;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
-(void)setOriginator:(NSString *)arg1 ;
-(NSString *)originator;
-(NSString *)VPNUUIDString;
-(void)setVPNUUIDString:(NSString *)arg1 ;
-(NSNumber *)associatedDomainsEnableDirectDownloads;
-(void)setAssociatedDomainsEnableDirectDownloads:(NSNumber *)arg1 ;
-(NSNumber *)removable;
-(void)setRemovable:(NSNumber *)arg1 ;
-(unsigned long long)managementOptions;
-(void)setManagementOptions:(unsigned long long)arg1 ;
@end

