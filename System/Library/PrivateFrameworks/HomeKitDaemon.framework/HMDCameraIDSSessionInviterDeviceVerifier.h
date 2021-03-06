/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString, HMDDevice;

@interface HMDCameraIDSSessionInviterDeviceVerifier : HMFObject {

	NSString* _sessionID;
	HMDDevice* _expectedInviter;

}

@property (readonly) NSString * sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) HMDDevice * expectedInviter;              //@synthesize expectedInviter=_expectedInviter - In the implementation block
-(NSString *)sessionID;
-(id)initWithSessionID:(id)arg1 expectedInviter:(id)arg2 ;
-(HMDDevice *)expectedInviter;
-(BOOL)canAcceptInvitationFromDeviceWithHandle:(id)arg1 forSessionWithIdentifier:(id)arg2 ;
@end

