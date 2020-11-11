/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ICDelegationServiceSecuritySettings : NSObject {

	long long _securityMode;
	NSString* _password;

}

@property (nonatomic,readonly) long long securityMode;                //@synthesize securityMode=_securityMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
+(void)getDeviceReceiverSettingsWithCompletion:(/*^block*/id)arg1 ;
+(void)getDeviceSenderSettingsForReceiverName:(id)arg1 securityMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)description;
-(NSString *)password;
-(id)_init;
-(long long)securityMode;
@end

