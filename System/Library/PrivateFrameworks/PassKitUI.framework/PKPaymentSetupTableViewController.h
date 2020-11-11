/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_PKUIKVisibilityBackdropViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, UILabel, UITableViewController, UIView, PKPaymentSetupDockView, _PKUIKVisibilityBackdropView, NSIndexPath, NSString;

@interface PKPaymentSetupTableViewController : UIViewController <_PKUIKVisibilityBackdropViewDelegate, UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	UILabel* _footerLabel;
	UITableViewController* _tableViewController;
	UIView* _containerView;
	long long _style;
	PKPaymentSetupDockView* _dockView;
	_PKUIKVisibilityBackdropView* _backdropView;
	double _backdropWeight;
	BOOL _clearsSelectionOnViewWillAppear;
	long long _context;
	NSIndexPath* _selectedIndexPath;

}

@property (assign,nonatomic) long long context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                           //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) UILabel * footerLabel; 
@property (nonatomic,readonly) PKPaymentSetupDockView * dockView; 
@property (assign,nonatomic) BOOL clearsSelectionOnViewWillAppear;                //@synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * selectedIndexPath;              //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UITableView *)tableView;
-(BOOL)extendedLayoutIncludesOpaqueBars;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(void)setClearsSelectionOnViewWillAppear:(BOOL)arg1 ;
-(UILabel *)footerLabel;
-(unsigned long long)edgesForExtendedLayout;
-(id)initWithStyle:(long long)arg1 context:(long long)arg2 ;
-(PKPaymentSetupDockView *)dockView;
-(long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2 ;
-(BOOL)clearsSelectionOnViewWillAppear;
@end

