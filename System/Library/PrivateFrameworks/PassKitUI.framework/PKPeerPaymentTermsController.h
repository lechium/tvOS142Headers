/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKPeerPaymentUpdatedTermsViewControllerDelegate.h>

@class NSURL, NSString, PKPeerPaymentWebService, UIViewController, UINavigationController;

@interface PKPeerPaymentTermsController : NSObject <PKPeerPaymentUpdatedTermsViewControllerDelegate> {

	/*^block*/id _completionHandler;
	NSURL* _termsURL;
	NSString* _termsIdentifier;
	NSString* _passUniqueID;
	PKPeerPaymentWebService* _webService;
	long long _paymentSetupContext;
	/*^block*/id _customPresentationHandler;
	UIViewController* _currentHostController;
	UINavigationController* _navigationController;

}

@property (assign,nonatomic,__weak) UIViewController * currentHostController;              //@synthesize currentHostController=_currentHostController - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) NSURL * termsURL;                                           //@synthesize termsURL=_termsURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * termsIdentifier;                            //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * passUniqueID;                               //@synthesize passUniqueID=_passUniqueID - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentWebService * webService;                       //@synthesize webService=_webService - In the implementation block
@property (assign,nonatomic) long long paymentSetupContext;                                //@synthesize paymentSetupContext=_paymentSetupContext - In the implementation block
@property (nonatomic,copy) id customPresentationHandler;                                   //@synthesize customPresentationHandler=_customPresentationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(NSString *)termsIdentifier;
-(PKPeerPaymentWebService *)webService;
-(NSURL *)termsURL;
-(NSString *)passUniqueID;
-(long long)paymentSetupContext;
-(id)initWithTermsURL:(id)arg1 termsIdentifier:(id)arg2 passUniqueID:(id)arg3 webService:(id)arg4 ;
-(void)presentTermsOverController:(id)arg1 showInterstitialViewController:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_presentRemoteUIController;
-(void)setCustomPresentationHandler:(id)arg1 ;
-(void)_presentRemoteUIControllerWithUpdatedTermsViewController:(id)arg1 ;
-(void)peerPaymentUpdatedTermsViewController:(id)arg1 didSelectContinue:(BOOL)arg2 ;
-(void)setPaymentSetupContext:(long long)arg1 ;
-(id)customPresentationHandler;
-(UIViewController *)currentHostController;
-(void)setCurrentHostController:(UIViewController *)arg1 ;
@end

