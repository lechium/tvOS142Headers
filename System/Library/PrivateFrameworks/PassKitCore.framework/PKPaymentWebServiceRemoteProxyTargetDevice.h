/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKPaymentWebServiceProxyObjectExportedInterface.h>

@protocol OS_dispatch_queue, PKPaymentWebServiceTargetDeviceProtocol;
@class NSObject, PKPaymentWebService, NSXPCConnection, NSString;

@interface PKPaymentWebServiceRemoteProxyTargetDevice : NSObject <PKPaymentWebServiceProxyObjectExportedInterface> {

	NSObject*<OS_dispatch_queue> _handlerQueue;
	PKPaymentWebService* _webService;
	id<PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)getContextWithCompletion:(/*^block*/id)arg1 ;
-(void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getConfigurationDataWithCompletion:(/*^block*/id)arg1 ;
-(void)getRegistrationDataWithCompletion:(/*^block*/id)arg1 ;
-(void)getTrustedDeviceEnrollmentInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)getProvisioningDataIncludingDeviceMetadata:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteApplicationWithAID:(id)arg1 ;
-(void)didRegisterWithRegionMap:(id)arg1 primaryRegionTopic:(id)arg2 ;
-(void)paymentSupportedInCurrentRegion:(/*^block*/id)arg1 ;
-(void)registrationSupportedInCurrentRegionWithCompletion:(/*^block*/id)arg1 ;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)noteProvisioningDidBegin;
-(void)noteProvisioningDidEnd;
-(void)setNewAuthRandomIfNecessaryReturningPairingState:(/*^block*/id)arg1 ;
-(void)setNewAuthRandom:(/*^block*/id)arg1 ;
-(void)hasPassesOfType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)passesOfType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)validateAddPreconditionsWithCompletion:(/*^block*/id)arg1 ;
-(void)downloadAllPaymentPasses;
-(void)claimSecureElementForCurrentUserWithCompletion:(/*^block*/id)arg1 ;
-(void)secureElementOwnershipStateForCurrentUserWithCompletion:(/*^block*/id)arg1 ;
-(void)validateTransferPreconditionsWithCompletion:(/*^block*/id)arg1 ;
-(void)handlePotentialExpressPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addPassData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removePass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)supportsPeerPaymentRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)appleAccountInformationWithCompletion:(/*^block*/id)arg1 ;
-(void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDefaultPaymentPassUniqueIdentifier:(id)arg1 ;
-(void)notePasscodeUpgradeFlowWillBeginWithCompletion:(/*^block*/id)arg1 ;
-(void)notePasscodeUpgradeFlowDidEnd;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(/*^block*/id)arg1 ;
-(void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg1 ;
-(void)endRequiringUpgradedPasscodeIfNecessary;
-(void)updateAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)supportsAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)supportedFeatureIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)supportedFeatureIdentifiersForAccountProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)updatedAccountsForProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)featureApplicationsForProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)deviceMetadataWithFields:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)applePayTrustKeyForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performDeviceCheckInWithCompletion:(/*^block*/id)arg1 ;
-(void)familyMembersWithCompletion:(/*^block*/id)arg1 ;
-(void)storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2 ;
-(void)passOwnershipTokenWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)archiveContext:(id)arg1 ;
-(void)archiveBackgroundContext:(id)arg1 ;
-(void)invalidateRemoteProxyTargetDevice;
-(id)initWithWebService:(id)arg1 connection:(id)arg2 ;
@end

