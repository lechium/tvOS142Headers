/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SKCloudServiceSetupExtensionClientInterface <NSObject>
@required
-(void)overrideCreditCardPresentationWithCompletion:(/*^block*/id)arg1;
-(void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
-(void)didFinishLoadingWithSuccess:(BOOL)arg1 error:(id)arg2;
-(void)dismissCloudServiceSetupViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)dismissSafariViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)presentSafariViewControllerWithURL:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

