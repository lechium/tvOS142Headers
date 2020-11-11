/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PXContentFilterController.h>

@protocol PXContentFilterControllerDelegate;
@class PXContentFilterState, NSString, NSArray;

@interface PXUIContentFilterController : UITableViewController <UITableViewDataSource, UITableViewDelegate, PXContentFilterController> {

	NSArray* _contentFilterGroups;
	PXContentFilterState* _filterState;
	NSString* _identifier;
	id<PXContentFilterControllerDelegate> _contentFilterDelegate;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) id<PXContentFilterControllerDelegate> contentFilterDelegate;              //@synthesize contentFilterDelegate=_contentFilterDelegate - In the implementation block
@property (nonatomic,copy) PXContentFilterState * filterState;                                                  //@synthesize filterState=_filterState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL filteringIsActive; 
@property (nonatomic,readonly) NSString * filteringLocalizedCaption; 
@property (nonatomic,readonly) NSString * filteringLocalizedTitle; 
-(NSString *)identifier;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(void)setFilterState:(PXContentFilterState *)arg1 ;
-(PXContentFilterState *)filterState;
-(id)_contentFilterGroups;
-(BOOL)filteringIsActive;
-(NSString *)filteringLocalizedCaption;
-(NSString *)filteringLocalizedTitle;
-(void)_setupNavigationBar;
-(void)_setupTableView;
-(id)_existingCellForRowAtIndexPath:(id)arg1 ;
-(long long)_filterItemTagForExistingCellForRowAtIndexPath:(id)arg1 ;
-(void)_enumerateExistingCellsUsingBlock:(/*^block*/id)arg1 ;
-(id)_existingCellForFilterItemTag:(long long)arg1 ;
-(BOOL)_selectCellWithFilterItemTag:(long long)arg1 ;
-(id)_getUpdatedFilterState;
-(void)_clickedContentFilterCell:(id)arg1 ;
-(void)_clickedRowAtIndexPath:(id)arg1 ;
-(void)_updateFilterState:(id)arg1 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(id<PXContentFilterControllerDelegate>)contentFilterDelegate;
@end

