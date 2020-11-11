/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKWebService.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@protocol OS_dispatch_queue, PKPaymentWebServiceArchiver, PKPaymentWebServiceBackgroundDelegate, PKPaymentWebServiceTargetDeviceProtocol;
@class NSURLSession, PKPaymentDevice, NSMutableDictionary, NSObject, NSOperationQueue, NSHashTable, PKPaymentWebServiceContext, PKPaymentWebServiceBackgroundContext, NSURL, NSArray, NSString;

@interface PKPaymentWebService : PKWebService <NSURLSessionDownloadDelegate> {

	NSURLSession* _backgroundSession;
	PKPaymentDevice* _paymentDevice;
	NSMutableDictionary* _passesByLocalURL;
	int _paymentSupportInRegion;
	int _registrationSupportInRegion;
	os_unfair_lock_s _supportInRegionLock;
	os_unfair_lock_s _delegateLock;
	NSObject*<OS_dispatch_queue> _backgroundDownloadQueue;
	NSOperationQueue* _backgroundSessionDelegateQueue;
	NSHashTable* _delegates;
	PKPaymentWebServiceContext* _context;
	os_unfair_lock_s _contextLock;
	BOOL _handlingApplePayTrustReRegister;
	BOOL _sharedService;
	PKPaymentWebServiceBackgroundContext* _backgroundContext;
	id<PKPaymentWebServiceArchiver> _archiver;
	id<PKPaymentWebServiceBackgroundDelegate> _backgroundDelegate;
	id<PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;

}

@property (assign,nonatomic) BOOL sharedService;                                                      //@synthesize sharedService=_sharedService - In the implementation block
@property (nonatomic,retain) PKPaymentWebServiceContext * context; 
@property (retain) PKPaymentWebServiceBackgroundContext * backgroundContext;                          //@synthesize backgroundContext=_backgroundContext - In the implementation block
@property (readonly) BOOL needsRegistration; 
@property (readonly) NSURL * primaryBrokerURL; 
@property (readonly) BOOL needsConfiguration; 
@property (readonly) int paymentSetupSupportedInRegion; 
@property (readonly) BOOL registrationSetupSupportedInRegion; 
@property (readonly) NSArray * delegates; 
@property (retain) id<PKPaymentWebServiceArchiver> archiver;                                          //@synthesize archiver=_archiver - In the implementation block
@property (__weak) id<PKPaymentWebServiceBackgroundDelegate> backgroundDelegate;                      //@synthesize backgroundDelegate=_backgroundDelegate - In the implementation block
@property (nonatomic,readonly) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;              //@synthesize targetDevice=_targetDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)sharedService;
-(void)dealloc;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(PKPaymentWebServiceContext *)context;
-(void)setContext:(PKPaymentWebServiceContext *)arg1 ;
-(BOOL)sharedService;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSArray *)delegates;
-(id<PKPaymentWebServiceTargetDeviceProtocol>)targetDevice;
-(BOOL)needsRegistration;
-(unsigned long long)registerDeviceWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)unregisterDeviceWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)performProductActionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithContext:(id)arg1 targetDevice:(id)arg2 archiver:(id)arg3 tapToRadarDelegate:(id)arg4 ;
-(id)_paymentDevice;
-(unsigned long long)revokeSharedCredentialWithRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)passAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)registrationSetupSupportedInRegion;
-(int)paymentSetupSupportedInRegion;
-(BOOL)needsConfiguration;
-(unsigned long long)configurePaymentServiceWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateRequestWithCurrentTargetDevice:(id)arg1 ;
-(id)_appleAccountInformation;
-(unsigned long long)_resultForResponse:(id)arg1 error:(id)arg2 successHandler:(/*^block*/id)arg3 ;
-(id)_errorWithResult:(unsigned long long)arg1 data:(id)arg2 ;
-(unsigned long long)registerAuxiliaryCapabilityWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)fetchBarcodesWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)fundingSourcesWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)schedulePaymentWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)applePayTrustSignatureRequestWithRequest:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)credentialAccountAttesationWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_canRegisterForPeerPaymentWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)performApplePayTrustRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(void)_shouldPerformApplePayTrustRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_needsRegistrationShouldCheckSecureElementOwnership:(BOOL)arg1 ;
-(unsigned long long)discoveryManifestWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)discoveryBundleForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)performInstallmentBindWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)serviceProviderAugmentSessionWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)augmentSessionWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)serviceProviderNonceWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)inAppPaymentNonceWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)prepareTransactionDetailsForMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 amount:(id)arg3 currencyCode:(id)arg4 completion:(/*^block*/id)arg5 ;
-(unsigned long long)completeSessionWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)performServiceProviderPayment:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)rewrapInAppPaymentWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)performInstallmentAuthorizationWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)registerCredentialWithRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_isSandboxAccount;
-(id)initWithContext:(id)arg1 targetDevice:(id)arg2 tapToRadarDelegate:(id)arg3 ;
-(id)initWithContext:(id)arg1 targetDevice:(id)arg2 archiver:(id)arg3 ;
-(id)initWithTapToRadarDelegate:(id)arg1 ;
-(void)_handleRetryAfterRegisterWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleResponse:(id)arg1 withError:(id)arg2 data:(id)arg3 task:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)forbiddenErrorWithResponse:(id)arg1 ;
-(void)setSharedService:(BOOL)arg1 ;
-(BOOL)canBypassTrustExtendedValidation;
-(BOOL)_isValidResponse:(id)arg1 error:(id)arg2 ;
-(void)_archiveContext;
-(void)_deviceRegistrationDataWithCompletion:(/*^block*/id)arg1 ;
-(id<PKPaymentWebServiceArchiver>)archiver;
-(void)handleAuthenticationFailureWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleWillPerformHTTPRedirectionWithResponse:(id)arg1 originalRequest:(id)arg2 redirectHandler:(/*^block*/id)arg3 ;
-(id)logFacility;
-(void)processRetryRequest:(id)arg1 responseData:(id)arg2 orginalRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)accountActionWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)remotePaymentCredentialsForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)remotePaymentCredentialsUpdateForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)availableProductsWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)browseableBankAppsWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)provisioningMethodWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)serviceProviderPurchasesWithRequest:(id)arg1 inRegion:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)accountPassDetailsRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)requirementsForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)eligibilityForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)provisionForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)paymentProvisioningNonceOfType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)moreInfoItemAtURL:(id)arg1 withMetadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isChinaRegionIdentifier:(id)arg1 ;
-(unsigned long long)_performAccountRequest:(id)arg1 taskID:(unsigned long long)arg2 responseClass:(Class)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)_performAccountRequest:(id)arg1 account:(id)arg2 taskID:(unsigned long long)arg3 responseClass:(Class)arg4 completion:(/*^block*/id)arg5 ;
-(unsigned long long)_performAccountRequest:(id)arg1 responseClass:(Class)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)_performAccountApplePayTrustProtocolRequest:(id)arg1 originalRequest:(id)arg2 taskID:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_applePayTrustPublicKeyHashWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)_performAccountRequest:(id)arg1 account:(id)arg2 responseClass:(Class)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)_performOptionalAccountApplePayTrustProtocolRequest:(id)arg1 originalRequest:(id)arg2 taskID:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)accountsWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)accountWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)deleteAccountWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)accountTermsWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)accountTermsDataWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)accountBankLookupWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)accountStatementsWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)accountStatementActionWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)paymentsWithRequest:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)cancelPaymentWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)addFundingSourceWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)deleteFundingSourceWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)accountServiceCertificatesWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)customizePhysicalCardWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)requestPhysicalCardWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)physicalCardActionWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)accountUserInfoWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)accountUpdateUserInfoWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)createVirtualCardWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)virtualCardActionWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)virtualCardListWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)virtualCardLegacyCredentialsWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)accountTransactionAnswerWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)applePayTrustSignatureRequestWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)exportTransactionDataWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleRetryAfterTSMSyncForPushTopic:(id)arg1 withRequest:(id)arg2 taskIdentifier:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleRetryAfterApplePayTrustEnrollmentWithOriginalRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_regionChanged;
-(void)sharedPaymentServiceChanged:(id)arg1 ;
-(void)sharedPaymentServiceAccountChanged:(id)arg1 ;
-(void)_resetSupportInRegionCache;
-(BOOL)_canRegisterForPeerPayment;
-(NSURL *)primaryBrokerURL;
-(unsigned long long)updateRegistrationDataAtBrokerURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_recentConfiguration:(/*^block*/id)arg1 ;
-(void)startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_hasConfiguration;
-(void)_startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_deviceConfigurationDataWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)registerDeviceAtBrokerURL:(id)arg1 withConsistencyCheckResults:(id)arg2 retries:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)registerDeviceAtBrokerURL:(id)arg1 consistencyCheckResults:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)_updateContextWithRegistrationResponse:(id)arg1 ;
-(unsigned long long)_performApplePayTrustRegistrationWithURL:(id)arg1 pushToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_createApplePayTrustKeyWithCompletion:(/*^block*/id)arg1 ;
-(PKPaymentWebServiceBackgroundContext *)backgroundContext;
-(void)_archiveBackgroundContext;
-(unsigned long long)unregisterDeviceWithCompanionSerialNumber:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_passOwnershipTokenForPaymentCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)verificationRecordForPass:(id)arg1 ;
-(void)_removeVerificationRequestRecord:(id)arg1 ;
-(unsigned long long)_downloadPassAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_deviceProvisioningDataIncludingDeviceMetadata:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_performVerificationRequest:(id)arg1 selectedChannel:(id)arg2 paymentPass:(id)arg3 taskID:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)_addVerificationRequestRecord:(id)arg1 ;
-(id)_fakeVerificationChannelsWithRealChannels:(id)arg1 ;
-(unsigned long long)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)verificationOptionsForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)updateVerification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_downloadPassesWithURLs:(id)arg1 ;
-(void)backgroundDownloadPassesForPushTopic:(id)arg1 sinceLastUpdatedTag:(BOOL)arg2 ;
-(void)backgroundDownloadRemotePassAssets:(id)arg1 cloudStoreCoordinatorDelegate:(id)arg2 ;
-(void)backgroundDownloadRemotePassAssets:(id)arg1 forSuffixesAndScreenScales:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 ;
-(id)_movePassToDownloadCache:(id)arg1 ;
-(void)_backgroundDownloadCloudStoreAssetsforItem:(id)arg1 cloudStoreCoordinatorDelegate:(id)arg2 ;
-(void)_passWithData:(id)arg1 response:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)_nonceWithRequest:(id)arg1 serviceURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)_augmentSessionWithRequest:(id)arg1 serviceURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)rewrapInAppPayment:(id)arg1 merchantIdentifier:(id)arg2 hostApplicationIdentifier:(id)arg3 applicationData:(id)arg4 pass:(id)arg5 completion:(/*^block*/id)arg6 ;
-(unsigned long long)_performRewrapRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleRemoteURLAssetDownloadTask:(id)arg1 data:(id)arg2 ;
-(void)_handlePassListDownloadTask:(id)arg1 data:(id)arg2 ;
-(void)_handlePassDownloadTask:(id)arg1 data:(id)arg2 ;
-(void)_handleDeviceCheckInTask:(id)arg1 downloadRecord:(id)arg2 data:(id)arg3 ;
-(id)_passWithFileURL:(id)arg1 ;
-(void)_cleanupPassDownloadCache;
-(void)_handleRemoteCloudStoreAssetForRecordName:(id)arg1 taskRecord:(id)arg2 data:(id)arg3 shouldWriteData:(BOOL)arg4 ;
-(void)_handleRemoteAssetDownloadForManifestItem:(id)arg1 taskPassURL:(id)arg2 data:(id)arg3 shouldWriteData:(BOOL)arg4 ;
-(void)backgroundDownloadPassAtURL:(id)arg1 ;
-(unsigned long long)_resultForUnexpectedStatusCode:(long long)arg1 ;
-(id)_downloadCacheLocation;
-(BOOL)_supportsAccounts;
-(void)startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3 ;
-(void)invalidateBackgroundSession;
-(void)signNonce:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)deviceCheckInDeviceCheckInForRegion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)backgroundPerformDeviceCheckInForRegion:(id)arg1 identifier:(id)arg2 ;
-(unsigned long long)issuerProvisioningCertificatesForRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)provisionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)deprovisionForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)verificationChannelsForPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)requestVerificationCodeForPass:(id)arg1 usingChannel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)devicePassesSinceLastUpdatedTag:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)passesWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)notifyIssuerAppletStateDirtyWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)performNotificationActionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)backgroundDownloadPassesSinceLastUpdatedTag:(BOOL)arg1 ;
-(void)getHasBackgroundDownloadTaskPassesForPushTopic:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)backgroundDownloadRemotePassAssets:(id)arg1 ;
-(void)backgroundDownloadRemotePassAssets:(id)arg1 forSuffixesAndScreenScales:(id)arg2 ;
-(void)backgroundDownloadWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(void)backgroundRegisterCredentialWithRequest:(id)arg1 ;
-(unsigned long long)pushProvisioningSharingIdentifiersWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)pushProvisioningSharingStatusRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)provideEncryptedPushProvisioningTargetWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)contactInformationWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)passUpgradeWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)passActionWithRemoteContentPassAction:(id)arg1 forPass:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)cardInfoForMerchantIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)transactionReceiptAuthorizationWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)transactionReceiptWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)inAppPaymentNonceForPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)rewrapInAppPayment:(id)arg1 merchantIdentifier:(id)arg2 merchantSession:(id)arg3 hostApplicationIdentifier:(id)arg4 applicationData:(id)arg5 pass:(id)arg6 paymentApplication:(id)arg7 completion:(/*^block*/id)arg8 ;
-(unsigned long long)completeSession:(id)arg1 wrappedPayment:(id)arg2 pass:(id)arg3 applicationData:(id)arg4 completion:(/*^block*/id)arg5 ;
-(unsigned long long)availableDevicesWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)checkMerchantStatus:(id)arg1 forDomain:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(unsigned long long)serviceProviderPurchaseWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)performAction:(id)arg1 onServiceProviderPurchase:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)networkManifestWithCompletion:(/*^block*/id)arg1 ;
-(void)setBackgroundContext:(PKPaymentWebServiceBackgroundContext *)arg1 ;
-(void)setArchiver:(id<PKPaymentWebServiceArchiver>)arg1 ;
-(id<PKPaymentWebServiceBackgroundDelegate>)backgroundDelegate;
-(void)setBackgroundDelegate:(id<PKPaymentWebServiceBackgroundDelegate>)arg1 ;
-(unsigned long long)_performApplyRequest:(id)arg1 responseClass:(Class)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)applicationsWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)deleteApplicationWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)createWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)applyWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)submitDocumentsWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)termsDataWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)featureTermsDataWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)shownTermsWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)submitTermsWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

