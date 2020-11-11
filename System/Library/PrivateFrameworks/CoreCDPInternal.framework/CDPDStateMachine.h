/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CDPDSecureBackupDelegate.h>
#import <libobjc.A.dylib/CDPDCircleDelegate.h>

@protocol CDPStateUIProviderInternal;
@class CDPContext, CDPDPCSController, CDPDCircleController, CDPDSecureBackupController;

@interface CDPDStateMachine : NSObject <CDPDSecureBackupDelegate, CDPDCircleDelegate> {

	CDPContext* _context;
	id<CDPStateUIProviderInternal> _uiProvider;
	CDPDPCSController* _pcsController;
	CDPDCircleController* _circleController;
	CDPDSecureBackupController* _secureBackupController;
	BOOL _attemptedCDPEnable;

}

@property (nonatomic,retain) CDPDSecureBackupController * secureBackupController;              //@synthesize secureBackupController=_secureBackupController - In the implementation block
@property (nonatomic,retain) CDPDCircleController * circleController;                          //@synthesize circleController=_circleController - In the implementation block
@property (nonatomic,retain) CDPDPCSController * pcsController;                                //@synthesize pcsController=_pcsController - In the implementation block
@property (nonatomic,retain) CDPContext * context;                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<CDPStateUIProviderInternal> uiProvider;                        //@synthesize uiProvider=_uiProvider - In the implementation block
@property (assign,nonatomic) BOOL attemptedCDPEnable;                                          //@synthesize attemptedCDPEnable=_attemptedCDPEnable - In the implementation block
-(void)dealloc;
-(CDPContext *)context;
-(void)setContext:(CDPContext *)arg1 ;
-(void)setUiProvider:(id<CDPStateUIProviderInternal>)arg1 ;
-(id)initWithContext:(id)arg1 uiProvider:(id)arg2 ;
-(id<CDPStateUIProviderInternal>)uiProvider;
-(void)handleCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)repairCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(CDPDCircleController *)circleController;
-(void)setCircleController:(CDPDCircleController *)arg1 ;
-(CDPDSecureBackupController *)secureBackupController;
-(void)setSecureBackupController:(CDPDSecureBackupController *)arg1 ;
-(id)contextForController:(id)arg1 ;
-(void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(/*^block*/id)arg2 ;
-(id)secureChannelContextForController:(id)arg1 ;
-(void)shouldPerformRepairWithOptionForceFetch:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)circlePeerIDForSecureBackupController:(id)arg1 ;
-(BOOL)synchronizeCircleViewsForSecureBackupContext:(id)arg1 ;
-(void)promptForAdoptionOfMultipleICSCWithCompletion:(/*^block*/id)arg1 ;
-(void)promptForLocalSecretWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isICloudKeychainDisabledByManagementProfile;
-(void)_handleCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_enrollOrDisableCDPAfterEnabledStateVerified:(/*^block*/id)arg1 ;
-(void)_handleiCDPStatusCheckError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_attemptCDPEnable:(/*^block*/id)arg1 ;
-(void)_handlePreflightError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_preflightAccountStateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleJoinResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleRecoveryResetRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_recoverSecureBackupWithCircleJoinResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_disableCloudDataProtectionWithCompletion:(/*^block*/id)arg1 ;
-(void)_enableSecureBackupWithCircleJoinResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resetAccountCDPStateWithCompletion:(/*^block*/id)arg1 ;
-(id)_predicateForRecordUpgradeCheckIgnoringBottled;
-(void)_confirmCDPEligibilityWithCompletion:(/*^block*/id)arg1 ;
-(void)_refreshAndAuthenticateWithContext:(id)arg1 ;
-(void)_authenticatedShouldPerformRepairWithOptionForceFetch:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_predicateForRepair;
-(void)_performSilentlyAuthenticatedRepair:(/*^block*/id)arg1 ;
-(void)_authenticatedRepairCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_performInteractivelyAuthenticatedRepair:(/*^block*/id)arg1 ;
-(BOOL)shouldAllowCDPEnrollment;
-(void)_attemptBackupRecoveryWithLocalSecret:(id)arg1 type:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 circleJoinResult:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_handleInteractiveRecoveryFlowWithCircleJoinResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_attemptBackupRecoveryByPromptingForRemoteSecretWithLocalSecret:(id)arg1 localSecretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 circleJoinResult:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_postRecoveryEnableSecureBackupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_disableAsyncModeRequested;
-(id)_predicateForRecordUpgradeCheck;
-(CDPDPCSController *)pcsController;
-(void)setPcsController:(CDPDPCSController *)arg1 ;
-(BOOL)attemptedCDPEnable;
-(void)setAttemptedCDPEnable:(BOOL)arg1 ;
@end
