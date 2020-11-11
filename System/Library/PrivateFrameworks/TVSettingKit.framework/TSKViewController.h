/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSettingKit/TSKTableViewController.h>
#import <TVSettingKit/TVCSTableViewDiffableDataSourceProxy.h>
#import <libobjc.A.dylib/TSKSettingGroupDelegate.h>
#import <libobjc.A.dylib/TSKSettingItemEditingControllerDelegate.h>

@protocol OS_dispatch_source;
@class NSArray, UIViewController, NSObject, TSKVibrantImageView, NSMutableDictionary, TSKSettingItem, TVCSTableViewDiffableDataSource, NSString;

@interface TSKViewController : TSKTableViewController <TVCSTableViewDiffableDataSourceProxy, TSKSettingGroupDelegate, TSKSettingItemEditingControllerDelegate> {

	BOOL _shouldProcessUpdates;
	NSArray* _settingGroups;
	UIViewController* _previewViewController;
	NSObject*<OS_dispatch_source> _reloadSource;
	NSArray* _visibleSettingGroups;
	TSKVibrantImageView* _imagePreviewView;
	NSMutableDictionary* _observationContexts;
	TSKSettingItem* _initialFocusedSettingItem;
	TVCSTableViewDiffableDataSource* _diffableDataSource;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_source> reloadSource;                                                                                           //@synthesize reloadSource=_reloadSource - In the implementation block
@property (nonatomic,copy,readonly) NSArray * settingGroups;                                                                                                         //@synthesize settingGroups=_settingGroups - In the implementation block
@property (nonatomic,copy) NSArray * visibleSettingGroups;                                                                                                           //@synthesize visibleSettingGroups=_visibleSettingGroups - In the implementation block
@property (nonatomic,readonly) TSKVibrantImageView * imagePreviewView;                                                                                               //@synthesize imagePreviewView=_imagePreviewView - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * observationContexts;                                                                                       //@synthesize observationContexts=_observationContexts - In the implementation block
@property (assign,nonatomic) BOOL shouldProcessUpdates;                                                                                                              //@synthesize shouldProcessUpdates=_shouldProcessUpdates - In the implementation block
@property (assign,setter=_setInitialFocusedSettingItem:,getter=_initialFocusedSettingItem,nonatomic,__weak) TSKSettingItem * initialFocusedSettingItem;              //@synthesize initialFocusedSettingItem=_initialFocusedSettingItem - In the implementation block
@property (nonatomic,retain) TVCSTableViewDiffableDataSource * diffableDataSource;                                                                                   //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (nonatomic,retain) UIViewController * previewViewController;                                                                                               //@synthesize previewViewController=_previewViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDiffableDataSource:(TVCSTableViewDiffableDataSource *)arg1 ;
-(TVCSTableViewDiffableDataSource *)diffableDataSource;
-(void)reloadSettings;
-(UIViewController *)previewViewController;
-(void)setPreviewViewController:(UIViewController *)arg1 ;
-(void)tableView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(void)_updateTableViewAnimated:(BOOL)arg1 ;
-(void)reloadSettingsIfNeeded;
-(void)_deregisterAllItemsForObserving;
-(id)defaultIndexPathForPreview;
-(id)_initialFocusedSettingItem;
-(id)indexPathForSettingItem:(id)arg1 ;
-(void)setShouldProcessUpdates:(BOOL)arg1 ;
-(BOOL)shouldProcessUpdates;
-(id)loadSettingGroups;
-(void)_registerItemForObserving:(id)arg1 ;
-(void)setVisibleSettingGroups:(NSArray *)arg1 ;
-(NSArray *)settingGroups;
-(NSArray *)visibleSettingGroups;
-(id)settingGroupAtIndex:(unsigned long long)arg1 ;
-(id)previewForItemAtIndexPath:(id)arg1 ;
-(id)settingItemAtIndexPath:(id)arg1 ;
-(id)_prepareChildViewControllerWithItem:(id)arg1 ;
-(void)_deregisterItemForObserving:(id)arg1 ;
-(void)_updateSettingGroup:(id)arg1 ;
-(void)_removeDeletedItems;
-(void)settingGroup:(id)arg1 didInsertItems:(id)arg2 ;
-(void)settingGroup:(id)arg1 willRemoveItems:(id)arg2 ;
-(void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3 ;
-(void)editingController:(id)arg1 didCancelForSettingItem:(id)arg2 ;
-(id)_settingGroups;
-(NSObject*<OS_dispatch_source>)reloadSource;
-(TSKVibrantImageView *)imagePreviewView;
-(NSMutableDictionary *)observationContexts;
-(void)_setInitialFocusedSettingItem:(id)arg1 ;
@end

