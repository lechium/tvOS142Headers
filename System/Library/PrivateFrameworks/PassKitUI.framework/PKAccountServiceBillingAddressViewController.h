/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKAddressEditorViewControllerDelegate.h>

@class CNContact, PKAccountService, PKAccount;

@interface PKAccountServiceBillingAddressViewController : PKSectionTableViewController <PKAddressEditorViewControllerDelegate> {

	CNContact* _currentBillingAddress;
	PKAccountService* _accountService;
	PKAccount* _account;
	unsigned long long _accountFeatureIdentifier;
	long long _detailViewStyle;
	/*^block*/id _handler;
	BOOL _loadingNewBillingContact;

}
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(long long)modalPresentationStyle;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2 ;
-(void)addressEditorViewControllerDidCancel:(id)arg1 ;
-(id)_currentBillingAddressCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_enterNewBillingAddressCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(void)_didSelectChangeAddress;
-(id)requiredBillingAddressKeys;
-(id)initWithBillingAddress:(id)arg1 account:(id)arg2 accountService:(id)arg3 detailViewStyle:(long long)arg4 handler:(/*^block*/id)arg5 ;
@end

