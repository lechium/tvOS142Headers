/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKPortraitNavigationController.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class NSData, NSString;

@interface PKFeatureTermsAndConditionsViewController : PKPortraitNavigationController <PKPaymentSetupPresentationProtocol, PKViewControllerPreflightable> {

	BOOL _isIpad;
	NSData* _pdfData;
	NSData* _htmlData;
	BOOL _performedInitialLoad;
	BOOL _useModalPresentation;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	long long _context;

}

@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (assign,nonatomic) long long context;                                                          //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL useModalPresentation;                                                  //@synthesize useModalPresentation=_useModalPresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(id)displayTitle;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)presentWithNavigationController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSetupDelegate:(id)arg1 context:(long long)arg2 ;
-(void)htmlTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)initalTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)pdfTermsDataWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)termsShown;
-(void)termsAccepted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentErrorAlert;
-(void)setUseModalPresentation:(BOOL)arg1 ;
-(void)dismissViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_pk_dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)popViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)useModalPresentation;
@end

