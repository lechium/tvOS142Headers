/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFRequestAirPlayMirroringRequest : DMFTaskRequest {

	BOOL _force;
	NSString* _destinationName;
	NSString* _destinationDeviceID;
	NSString* _password;
	double _scanWaitInterval;

}

@property (nonatomic,copy) NSString * destinationName;                  //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,copy) NSString * destinationDeviceID;              //@synthesize destinationDeviceID=_destinationDeviceID - In the implementation block
@property (nonatomic,copy) NSString * password;                         //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL force;                                //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) double scanWaitInterval;                   //@synthesize scanWaitInterval=_scanWaitInterval - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
-(BOOL)force;
-(void)setForce:(BOOL)arg1 ;
-(NSString *)destinationDeviceID;
-(double)scanWaitInterval;
-(void)setDestinationDeviceID:(NSString *)arg1 ;
-(void)setScanWaitInterval:(double)arg1 ;
@end

