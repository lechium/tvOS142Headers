/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AASignOutFlowControllerDelegate;
@class ACAccountStore;

@interface AASignOutFlowController : NSObject {

	ACAccountStore* _accountStore;
	id<AASignOutFlowControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AASignOutFlowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<AASignOutFlowControllerDelegate>)delegate;
-(void)setDelegate:(id<AASignOutFlowControllerDelegate>)arg1 ;
-(void)_signOutAppleAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_preflightSignOutOfAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_disableDeviceLocatorForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_delegate_signOutAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_delegate_disableFindMyDeviceForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signOutAppleAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_delegate_presentError:(id)arg1 withTitle:(id)arg2 ;
@end

