/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPaymentSetupViewControllerDelegate <NSObject>
@optional
-(void)viewControllerDidCancelSetupFlow:(id)arg1;
-(void)viewControllerDidFinishChangingPasscodeComplex:(id)arg1;
-(void)viewControllerDidFailToChangePasscodeComplex:(id)arg1;
-(void)viewController:(id)arg1 didShowProvisioningError:(id)arg2;
-(void)viewControllerDidShowEligibilityIssue:(id)arg1;
-(void)viewController:(id)arg1 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 completion:(/*^block*/id)arg3;
-(void)viewController:(id)arg1 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 withShouldContinue:(BOOL)arg3 error:(id)arg4;
-(void)viewController:(id)arg1 requestPasscodeUpgradeWithCompletion:(/*^block*/id)arg2;
-(void)viewController:(id)arg1 didExitPasscodeUpgradeWithShouldContinue:(BOOL)arg2 error:(id)arg3;
-(void)viewController:(id)arg1 willPerformPasscodeUpgradeWithCompletionHandler:(/*^block*/id)arg2;
-(void)viewControllerWillPresentChangePasscodeComplex:(id)arg1;
-(void)viewController:(id)arg1 canProceedWithInstallment:(BOOL)arg2 featureApplication:(id)arg3 completion:(/*^block*/id)arg4;
-(void)viewController:(id)arg1 didFinishWithPasses:(id)arg2 error:(id)arg3;

@required
-(void)viewControllerDidTerminateSetupFlow:(id)arg1;

@end
