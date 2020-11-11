/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchRemote/TROperation.h>

@class ACAccount, NSSet, UIViewController;

@interface TRProxyAuthOperation : TROperation {

	ACAccount* _account;
	NSSet* _targetedServices;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) ACAccount * account;                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSSet * targetedServices;                                 //@synthesize targetedServices=_targetedServices - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
+(long long)_appleIDServiceTypeForTRAccountServices:(id)arg1 ;
+(id)_logStringForAppleIDServiceType:(long long)arg1 ;
-(void)execute;
-(UIViewController *)presentingViewController;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setTargetedServices:(NSSet *)arg1 ;
-(void)_sendProxyDeviceRequest;
-(void)_handleProxyDeviceResponse:(id)arg1 ;
-(void)_performProxyAuthenticationWithProxiedDevice:(id)arg1 ;
-(NSSet *)targetedServices;
-(void)_handleProxyAuthenticationResponse:(id)arg1 ;
@end

