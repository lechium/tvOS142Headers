/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface BBBiometricResource : NSObject {

	BOOL _isPasscodeSet;
	BOOL _isBiometricUnlockAllowed;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)_updateIsPasscodeSet;
-(void)_updateIsBiometricUnlockAllowed;
-(void)_registerForBiometricUnlockAllowedChange;
-(void)_registerForPasscodeChange;
-(void)_unregisterForBiometricUnlockAllowedChange;
@end
