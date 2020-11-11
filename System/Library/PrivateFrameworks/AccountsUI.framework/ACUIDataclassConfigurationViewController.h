/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccountsUI/ACUIViewController.h>

@class NSString, NSMutableDictionary, PSSpecifier, NSArray, ACAccount;

@interface ACUIDataclassConfigurationViewController : ACUIViewController {

	BOOL _forceMailSetup;
	NSString* _accountIdentifier;
	NSMutableDictionary* _allDesiredDataclassActions;
	BOOL _isMergingSyncData;
	PSSpecifier* _deleteButtonSpecifier;
	PSSpecifier* _accountSummaryCellSpecifier;
	NSArray* _dataclassSpecifiers;
	NSArray* _otherSpecifiers;
	BOOL _didShowDataclassActionPickerDuringRemoval;
	BOOL _firstTimeSetup;
	BOOL _shouldShowDeleteAccountButton;
	BOOL _shouldEnableDeleteAccountButton;
	BOOL _shouldEnableAccountSummaryCell;
	BOOL _isMailSetupForced;
	NSArray* _preEnabledDataclasses;
	ACAccount* _account;
	PSSpecifier* _dataclassGroupSpecifier;
	/*^block*/id _configurationCompletion;

}

@property (assign,getter=isFirstTimeSetup,nonatomic) BOOL firstTimeSetup;              //@synthesize firstTimeSetup=_firstTimeSetup - In the implementation block
@property (nonatomic,copy) NSArray * preEnabledDataclasses;                            //@synthesize preEnabledDataclasses=_preEnabledDataclasses - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PSSpecifier * dataclassGroupSpecifier;                    //@synthesize dataclassGroupSpecifier=_dataclassGroupSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * deleteButtonSpecifier;                    //@synthesize deleteButtonSpecifier=_deleteButtonSpecifier - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDeleteAccountButton;                       //@synthesize shouldShowDeleteAccountButton=_shouldShowDeleteAccountButton - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableDeleteAccountButton;                     //@synthesize shouldEnableDeleteAccountButton=_shouldEnableDeleteAccountButton - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableAccountSummaryCell;                      //@synthesize shouldEnableAccountSummaryCell=_shouldEnableAccountSummaryCell - In the implementation block
@property (assign,nonatomic) BOOL isMailSetupForced;                                   //@synthesize isMailSetupForced=_isMailSetupForced - In the implementation block
@property (nonatomic,copy) id configurationCompletion;                                 //@synthesize configurationCompletion=_configurationCompletion - In the implementation block
+(BOOL)shouldPresentAsModalSheet;
-(id)init;
-(id)_accountIdentifier;
-(BOOL)isUserEnrollment;
-(void)viewDidLoad;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)displayedAccountTypeString;
-(id)displayedShortAccountTypeString;
-(id)_navigationTitle;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(BOOL)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2 ;
-(long long)operationsHelper:(id)arg1 shouldRemoveOrDisableAccount:(id)arg2 ;
-(void)setShouldEnableAccountSummaryCell:(BOOL)arg1 ;
-(void)setShouldEnableDeleteAccountButton:(BOOL)arg1 ;
-(void)setFirstTimeSetup:(BOOL)arg1 ;
-(void)setShouldShowDeleteAccountButton:(BOOL)arg1 ;
-(BOOL)isFirstTimeSetup;
-(BOOL)shouldVerifyBeforeAccountSave;
-(id)configurationCompletion;
-(void)setConfigurationCompletion:(id)arg1 ;
-(id)specifierForAccountSummaryCell;
-(id)_specifiersForDataclasses:(id)arg1 ;
-(BOOL)shouldShowOtherSpecifiersDuringFirstSetup;
-(id)otherSpecifiers;
-(BOOL)shouldShowDeleteAccountButton;
-(id)titleForDeleteButton;
-(void)deleteButtonTapped:(id)arg1 ;
-(BOOL)shouldEnableDeleteAccountButton;
-(Class)accountInfoControllerClass;
-(id)valueForAccountSummaryCell;
-(BOOL)shouldEnableAccountSummaryCell;
-(id)_orderDataclassList:(id)arg1 ;
-(void)setDataclassGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)dataclassGroupSpecifier;
-(BOOL)shouldShowSpecifierForDataclass:(id)arg1 ;
-(id)specifierForDataclass:(id)arg1 ;
-(void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(id)dataclassSwitchStateForSpecifier:(id)arg1 ;
-(BOOL)_isUserOverridableForDataclass:(id)arg1 ;
-(NSArray *)preEnabledDataclasses;
-(void)setDataclass:(id)arg1 enabled:(BOOL)arg2 ;
-(id)_setupSpinnerTimerForSpecifier:(id)arg1 ;
-(void)_setDataclass:(id)arg1 enabled:(BOOL)arg2 onAccount:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1 ;
-(void)_presentUndoAlert:(id)arg1 reason:(id)arg2 ;
-(void)_enableAllProvisionedDataclassesWithoutRequringUserInteraction;
-(BOOL)_confirmKeepLocalDataForDataclasses:(id)arg1 ;
-(BOOL)_confirmDeleteLocalDataForDataclasses:(id)arg1 ;
-(void)_notifyOfAccountSetupCompletion;
-(BOOL)_isShowingDeleteAccountButton;
-(BOOL)_promptUserToConfirmAccountDeletion;
-(BOOL)isAppleMailAccount:(id)arg1 ;
-(BOOL)_confirmSyncDelete;
-(long long)_promptUserToConfirmAccountSyncDeletion;
-(id)deviceMessage;
-(id)messageForAccountDeletionWarning;
-(id)messageForAccountDeletionProgressUI;
-(void)forceMailSetup;
-(long long)deleteButtonIndex;
-(BOOL)isMailSetupForced;
-(void)reloadDynamicSpecifiersWithAnimation:(BOOL)arg1 ;
-(void)appendDeleteAccountButton;
-(void)setPreEnabledDataclasses:(NSArray *)arg1 ;
-(PSSpecifier *)deleteButtonSpecifier;
-(void)setIsMailSetupForced:(BOOL)arg1 ;
@end

