//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, TVHHIDEventManager;
@protocol OS_dispatch_queue_serial;

@interface TVHPPTController : NSObject
{
    _Bool _applicationLoaded;	// 8 = 0x8
    NSObject<OS_dispatch_queue_serial> *_workQueue;	// 16 = 0x10
    NSDictionary *_testsManifest;	// 24 = 0x18
    TVHHIDEventManager *_HIDManager;	// 32 = 0x20
    CDUnknownBlockType _applicationLoadCompletion;	// 40 = 0x28
}

+ (id)new;	// IMP=0x00000001000783f8
+ (id)sharedInstance;	// IMP=0x0000000100078380
- (void).cxx_destruct;	// IMP=0x000000010007ca30
@property(copy, nonatomic) CDUnknownBlockType applicationLoadCompletion; // @synthesize applicationLoadCompletion=_applicationLoadCompletion;
@property(getter=isApplicationLoaded) _Bool applicationLoaded; // @synthesize applicationLoaded=_applicationLoaded;
@property(retain, nonatomic) TVHHIDEventManager *HIDManager; // @synthesize HIDManager=_HIDManager;
@property(retain, nonatomic) NSDictionary *testsManifest; // @synthesize testsManifest=_testsManifest;
@property(retain, nonatomic) NSObject<OS_dispatch_queue_serial> *workQueue; // @synthesize workQueue=_workQueue;
- (id)_navigationController;	// IMP=0x000000010007c87c
- (id)_findViewOfType:(Class)arg1 inView:(id)arg2 withFilter:(CDUnknownBlockType)arg3;	// IMP=0x000000010007c694
- (id)_findCellWithTitle:(id)arg1 inCollectionView:(id)arg2;	// IMP=0x000000010007c490
- (id)_findCellWithTitle:(id)arg1 inViewController:(id)arg2 returningCollectionView:(id *)arg3;	// IMP=0x000000010007c36c
- (id)_findCellWithTitle:(id)arg1 inTopmostViewController:(id)arg2 returningCollectionView:(id *)arg3;	// IMP=0x000000010007c1b4
- (id)_findLabelWithTitle:(id)arg1 inView:(id)arg2;	// IMP=0x000000010007bfe8
- (id)_findLabelInView:(id)arg1;	// IMP=0x000000010007bf3c
- (id)_findCollectionViewInView:(id)arg1;	// IMP=0x000000010007be90
- (id)_findScrollViewInView:(id)arg1 desiredScrollViewClass:(Class)arg2 numScrollSubviewsToSkip:(unsigned long long)arg3 numScrollSubviewsFound:(unsigned long long *)arg4;	// IMP=0x000000010007bc78
- (id)_findScrollViewInView:(id)arg1 desiredScrollViewClass:(Class)arg2 numScrollViewsToSkip:(unsigned long long)arg3;	// IMP=0x000000010007ba18
- (id)_findScrollViewInView:(id)arg1 desiredScrollViewClass:(Class)arg2;	// IMP=0x000000010007ba08
- (id)_findScrollViewInViewController:(id)arg1;	// IMP=0x000000010007b8f8
- (unsigned long long)_viewControllerIndexWithTabItemType:(unsigned long long)arg1 inTabBarController:(id)arg2;	// IMP=0x000000010007b6b8
- (id)_selectedViewControllerInTabBarController:(id)arg1;	// IMP=0x000000010007b5e4
- (id)_findChildViewControllerWithClass:(Class)arg1 inViewController:(id)arg2;	// IMP=0x000000010007b404
- (_Bool)_workQueue_moveFocusInDirection:(long long)arg1 toListItemWithTitle:(id)arg2 inSelectedViewControllerOfTabBarController:(id)arg3;	// IMP=0x000000010007af6c
- (_Bool)_workQueue_performScrollViewTest:(id)arg1 testOptions:(id)arg2 scrollAxis:(unsigned long long)arg3 viewController:(id)arg4 scrollViewBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000010007a8a4
- (_Bool)_workQueue_performScrollViewTest:(id)arg1 testOptions:(id)arg2 scrollAxis:(unsigned long long)arg3 scrollViewBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010007a818
- (_Bool)_workQueue_waitForLoadingToCompleteForViewController:(id)arg1;	// IMP=0x000000010007a660
- (_Bool)_workQueue_waitForLoadingToCompleteForNavigationControllerVisibleViewController;	// IMP=0x000000010007a4f4
- (_Bool)_workQueue_waitForLoadingToCompleteForTabItemType:(unsigned long long)arg1 inTabBarController:(id)arg2;	// IMP=0x000000010007a304
- (_Bool)_workQueue_selectTabWithTabItemType:(unsigned long long)arg1 inTabBarController:(id)arg2;	// IMP=0x000000010007a018
- (id)_workQueue_prepareForPPT;	// IMP=0x0000000100079c88
- (void)_workQueue_runTest:(id)arg1 application:(id)arg2;	// IMP=0x000000010007966c
- (void)_workQueue_dispatchHIDEventWithType:(unsigned long long)arg1;	// IMP=0x000000010007961c
- (void)_runTest:(id)arg1 application:(id)arg2;	// IMP=0x000000010007949c
- (_Bool)_canHandleTest:(id)arg1;	// IMP=0x0000000100079318
- (void)_registerTests;	// IMP=0x000000010007872c
- (void)_handleNavigationControllerDidDisplayViewControllerNotification:(id)arg1;	// IMP=0x00000001000785fc
- (void)runTest:(id)arg1 application:(id)arg2;	// IMP=0x00000001000785ac
- (_Bool)canHandleTest:(id)arg1;	// IMP=0x00000001000785a0
- (id)_init;	// IMP=0x00000001000784bc
- (id)init;	// IMP=0x0000000100078434

@end

