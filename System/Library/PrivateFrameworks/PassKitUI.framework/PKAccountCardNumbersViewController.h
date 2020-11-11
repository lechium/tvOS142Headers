/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKSectionTableViewController.h>

@class PKVirtualCard, PKVirtualCardCredentials, PKAccountService, PKAccount, PKPaymentPass, PKPhysicalCard;

@interface PKAccountCardNumbersViewController : PKSectionTableViewController {

	unsigned long long _accountFeatureIdentifier;
	PKVirtualCard* _virtualCard;
	PKVirtualCardCredentials* _cardCredentials;
	PKAccountService* _accountService;
	PKAccount* _account;
	PKPaymentPass* _pass;
	long long _context;
	BOOL _loadingReplacementCard;
	PKPhysicalCard* _physicalCard;
	BOOL _redactSensitiveDetails;

}
-(void)applicationWillResignActive:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(id)initWithPass:(id)arg1 accountService:(id)arg2 account:(id)arg3 cardCredentials:(id)arg4 virtualCard:(id)arg5 physicalCard:(id)arg6 context:(long long)arg7 ;
-(long long)_numberOfVirtualCardCredentialDetailsRowsEnabled;
-(BOOL)_virtualCardCredentialDetailsRowIsEnabled:(unsigned long long)arg1 ;
-(id)_cardCredentialsCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_physicalCardCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_dpanCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_virtualCardStateFooter;
-(unsigned long long)_virtualCardCredentialDetailsRowForRowIndex:(long long)arg1 ;
-(id)_replaceCardAlertFromIndexPath:(id)arg1 ;
-(id)_credentialsCellWithPrimaryText:(id)arg1 detailText:(id)arg2 forTableView:(id)arg3 ;
-(id)_buttonCellForRowIndex:(long long)arg1 text:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4 ;
-(id)reuseIdentifierForSection:(unsigned long long)arg1 ;
-(id)initWithPass:(id)arg1 accountService:(id)arg2 account:(id)arg3 physicalCard:(id)arg4 context:(long long)arg5 ;
@end

