/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSData;

@interface DMFInstallProvisioningProfileRequest : DMFTaskRequest {

	NSString* _managingProfileIdentifier;
	NSData* _profileData;

}

@property (nonatomic,copy) NSString * managingProfileIdentifier;              //@synthesize managingProfileIdentifier=_managingProfileIdentifier - In the implementation block
@property (nonatomic,copy) NSData * profileData;                              //@synthesize profileData=_profileData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)managingProfileIdentifier;
-(void)setManagingProfileIdentifier:(NSString *)arg1 ;
-(NSData *)profileData;
-(void)setProfileData:(NSData *)arg1 ;
@end

