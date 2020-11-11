/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorPrivateDelegate.h>

@protocol PKAccountBillPaymentControllerDelegate;
@class PKPaymentWebService, PKPaymentService, PKAccountWebServiceSchedulePaymentRequest, PKPaymentAuthorizationCoordinator, NSError, PKBankAccountInformation, PKPaymentPass, PKAccountService, NSString, NSDecimalNumber, PKPaymentRequest, PKPeerPaymentAccount, PKAccountEvent, NSDate, NSMutableSet, PKAccount, NSArray;

@interface PKAccountBillPaymentController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {

	PKPaymentWebService* _webService;
	PKPaymentService* _paymentService;
	PKAccountWebServiceSchedulePaymentRequest* _schedulePaymentRequest;
	PKPaymentAuthorizationCoordinator* _schedulePaymentAuthorizationCoordinator;
	NSError* _applePayTrustResponseError;
	PKBankAccountInformation* _bankInformation;
	PKPaymentPass* _pass;
	PKAccountService* _accountService;
	NSString* _currency;
	NSDecimalNumber* _totalPaymentAmount;
	NSDecimalNumber* _achPaymentAmount;
	NSDecimalNumber* _apcPaymentAmount;
	NSDecimalNumber* _peerPaymentBalance;
	PKPaymentRequest* _paymentRequest;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PKAccountEvent* _billPaymentSuggestedAmountDataEvent;
	NSDate* _scheduledDate;
	NSString* _peerPaymentPassUniqueId;
	BOOL _accountPaymentSupportsPeerPaymentBalance;
	BOOL _peerPaymentAccountSupportsAccountPayments;
	BOOL _performingAction;
	BOOL _completedBillPayment;
	BOOL _fetchingData;
	NSError* _fetchingDataError;
	NSMutableSet* _dataFetchingCompletionHandlers;
	PKAccount* _account;
	id<PKAccountBillPaymentControllerDelegate> _delegate;
	NSArray* _fundingSources;
	NSArray* _payments;

}

@property (nonatomic,retain) PKAccount * account;                                                     //@synthesize account=_account - In the implementation block
@property (assign,nonatomic,__weak) id<PKAccountBillPaymentControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * fundingSources;                                                //@synthesize fundingSources=_fundingSources - In the implementation block
@property (nonatomic,retain) NSArray * payments;                                                      //@synthesize payments=_payments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PKAccountBillPaymentControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAccountBillPaymentControllerDelegate>)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(void)_accountDidChange:(id)arg1 ;
-(NSArray *)payments;
-(void)setPayments:(NSArray *)arg1 ;
-(id)initWithAccount:(id)arg1 paymentPass:(id)arg2 ;
-(void)_updateAmounts;
-(void)_fetchFundingSources;
-(BOOL)_accountPaymentSupportsPeerPaymentForDate:(id)arg1 ;
-(BOOL)_accountPaymentSupportsPeerPayment;
-(NSArray *)fundingSources;
-(void)setFundingSources:(NSArray *)arg1 ;
-(void)_completeFetchingFundingSources;
-(void)_billPaymentHasCompletedWithState:(unsigned long long)arg1 error:(id)arg2 ;
-(void)_performApplePayTrustSignatureRequestWithSignature:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateUseApplePayCashSetting:(BOOL)arg1 ;
-(id)_paymentSummaryItems;
-(id)_createSchedulePaymentRequest;
-(id)_bankAccountsForFundingSources:(id)arg1 ;
-(void)performBillPaymentActionWithAmount:(id)arg1 billPaymentSuggestedAmountDataEvent:(id)arg2 ;
-(void)performBillPaymentActionWithAmount:(id)arg1 scheduledDate:(id)arg2 billPaymentSuggestedAmountDataEvent:(id)arg3 ;
-(id)_paymentRequestWithSignatureRequest:(id)arg1 bankAccounts:(id)arg2 ;
-(void)_presentPaymentAuthorizationWithPaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_achPayment;
-(id)_apcPayment;
-(BOOL)_shouldUsePeerPaymentBalance;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didUpdateAccountServicePaymentMethod:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)canPerformBillPaymentWithAmount:(id)arg1 scheduledDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)performBillPaymentActionWithAmount:(id)arg1 ;
@end

