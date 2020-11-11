/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDataSourcePrefetching.h>
#import <libobjc.A.dylib/PKEditTableNoPassesViewDelegate.h>
#import <libobjc.A.dylib/PKEditPassesPerformanceTestResponder.h>

@protocol OS_dispatch_queue, PKEditTableViewControllerCachingDelegate;
@class PKEditTableNoPassesView, UITableView, NSCache, NSObject, PKEditPendingCacheRequest, NSMutableArray, NSMutableDictionary, PKGroupsController, NSString, NSDictionary;

@interface PKEditTableViewController : UITableViewController <UITableViewDataSourcePrefetching, PKEditTableNoPassesViewDelegate, PKEditPassesPerformanceTestResponder> {

	PKEditTableNoPassesView* _noPassesView;
	BOOL _shouldShowNoPassesView;
	UITableView* _tableView;
	BOOL _scrollingUp;
	CGSize _imageSizeNeeded;
	BOOL _needsFullPass;
	BOOL _isAccessibilityCategory;
	NSCache* _imageCache;
	unsigned long long _imagesToKeep;
	NSObject*<OS_dispatch_queue> _queueCaching;
	NSObject*<OS_dispatch_queue> _queuePlaceholder;
	PKEditPendingCacheRequest* _currentCacheRequest;
	BOOL _shouldProcessHighPriorityRequests;
	NSMutableArray* _highPriorityRequests;
	BOOL _shouldProcessLowPriorityRequests;
	NSMutableArray* _lowPriorityRequests;
	unsigned long long _visibleRows;
	NSMutableDictionary* _placeholdersPerPassStyle;
	long long _testIteration;
	double _snapshotDurationAverage;
	NSMutableArray* _lastSnapshotDurations;
	double _lastYOffset;
	double _lastYOffsetTime;
	BOOL _scrollingFast;
	BOOL _dragging;
	id<PKEditTableViewControllerCachingDelegate> _cachingDelegate;
	PKGroupsController* _existingGroupsController;
	long long _performanceTest;
	NSString* _performanceTestName;

}

@property (assign,nonatomic) long long performanceTest;                                                        //@synthesize performanceTest=_performanceTest - In the implementation block
@property (nonatomic,retain) NSString * performanceTestName;                                                   //@synthesize performanceTestName=_performanceTestName - In the implementation block
@property (assign,nonatomic) long long testIteration;                                                          //@synthesize testIteration=_testIteration - In the implementation block
@property (assign,nonatomic,__weak) id<PKEditTableViewControllerCachingDelegate> cachingDelegate;              //@synthesize cachingDelegate=_cachingDelegate - In the implementation block
@property (nonatomic,retain) PKGroupsController * existingGroupsController;                                    //@synthesize existingGroupsController=_existingGroupsController - In the implementation block
@property (nonatomic,retain) NSDictionary * placeholders; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)loadPlaceholdersWithCompletion:(/*^block*/id)arg1 ;
+(id)_generatePlaceholderImageForStyle:(long long)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(NSDictionary *)placeholders;
-(void)setPlaceholders:(NSDictionary *)arg1 ;
-(void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)noPassesViewScanCodeButtonTapped:(id)arg1 ;
-(void)noPassesViewFindAppsForWalletTapped:(id)arg1 ;
-(void)setPerformanceTest:(long long)arg1 ;
-(void)setPerformanceTestName:(NSString *)arg1 ;
-(id)initWithStyle:(long long)arg1 placeholders:(id)arg2 ;
-(void)setExistingGroupsController:(PKGroupsController *)arg1 ;
-(unsigned long long)visibleRowsCount;
-(void)imageForPass:(id)arg1 stacked:(BOOL)arg2 synchronously:(BOOL)arg3 placeholder:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)preemptivelyCacheImagesForPass:(id)arg1 stacked:(BOOL)arg2 ;
-(id)mostRecentPassInGroup:(id)arg1 ;
-(long long)performanceTest;
-(void)clearImageCacheForPass:(id)arg1 ;
-(void)passedTest;
-(id)tableView:(id)arg1 cellWithIdentifier:(id)arg2 ;
-(void)loadContentAndImageSetFromExistingPassForPass:(id)arg1 ;
-(PKGroupsController *)existingGroupsController;
-(NSString *)performanceTestName;
-(void)setCachingDelegate:(id<PKEditTableViewControllerCachingDelegate>)arg1 ;
-(long long)testIteration;
-(void)setTestIteration:(long long)arg1 ;
-(void)selectFirstRowOrFailTest;
-(void)showNoPassesView:(BOOL)arg1 ;
-(void)findApps;
-(void)scanCode;
-(void)_imageOfSize:(CGSize)arg1 forPass:(id)arg2 fullPass:(BOOL)arg3 stacked:(BOOL)arg4 synchronously:(BOOL)arg5 preemptive:(BOOL)arg6 placeholder:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(id)_createImageForPass:(id)arg1 imageSize:(CGSize)arg2 cacheKey:(id)arg3 fullPass:(BOOL)arg4 stacked:(BOOL)arg5 ;
-(void)_placeholderImageForStyle:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)processCacheRequest:(id)arg1 ;
-(void)triageCacheRequest:(id)arg1 ;
-(void)currentCacheRequestCompletedWithImage:(id)arg1 duration:(double)arg2 ;
-(void)updateAverageSnapshotDuration:(double)arg1 ;
-(id)_createPassStackWithPassImage:(id)arg1 withHeight:(double)arg2 ;
-(void)removeRequestsWithCacheKey:(id)arg1 ;
-(unsigned long long)_imagesToKeepOutsideVisibleCells;
-(void)moveHighPriorityToLowPriorityWithCacheKey:(id)arg1 ;
-(void)_setShouldProcessLowPriorityRequests:(BOOL)arg1 ;
-(void)resumeRequestIfNoScrollingAfterTimeInterval:(double)arg1 ;
-(void)_updateShouldProcessHighPriorityRequestsWithFastScrolling:(BOOL)arg1 ;
-(void)scrollToLastRowOrFailTest;
-(void)scrollToFirstRowOrFailTest;
-(void)failedTestWithReason:(id)arg1 ;
-(void)startedTestWithName:(id)arg1 ;
-(void)beginScrollingTestWithTestName:(id)arg1 ;
-(void)beginPassSelectionTestWithTestName:(id)arg1 ;
-(void)beginPassDeletionTestWithTestName:(id)arg1 ;
-(id<PKEditTableViewControllerCachingDelegate>)cachingDelegate;
@end

