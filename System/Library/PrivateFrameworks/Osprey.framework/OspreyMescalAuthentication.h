/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Osprey/OspreyDeviceAuthenticating.h>

@class OspreyMescalSession, OspreyAuthService, OspreyConnectionPreferences, OspreyGRPCChannel, NSDate, NSData, NSString;

@interface OspreyMescalAuthentication : NSObject <OspreyDeviceAuthenticating> {

	OspreyMescalSession* _mescalSession;
	OspreyAuthService* _authService;
	OspreyConnectionPreferences* _connectionPreferences;
	OspreyGRPCChannel* _grpcChannel;
	unsigned long long _state;
	NSDate* _sessionExpiration;
	NSData* _certificateData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)state;
-(unsigned long long)authenticationStrategyVersion;
-(void)signData:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)initWithChannel:(id)arg1 connectionPreferences:(id)arg2 ;
-(id)mescalSession;
-(void)_continuePreparationWithCompletion:(/*^block*/id)arg1 ;
-(void)moveToState:(unsigned long long)arg1 ;
-(BOOL)isSessionExpired;
@end

