/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/TVTableViewDelegate.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVTableView, NSString;

@interface TVLMenuViewController : UIViewController <UITableViewDataSource, TVTableViewDelegate, ATVUpdatable> {

	TVTableView* _tableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)preferredFocusEnvironments;
-(void)tableView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(id)initWithMenuElement:(id)arg1 ;
-(void)didUpdateFeedElementRequiringUserInterfaceUpdate:(BOOL)arg1 previousElement:(id)arg2 ;
@end
