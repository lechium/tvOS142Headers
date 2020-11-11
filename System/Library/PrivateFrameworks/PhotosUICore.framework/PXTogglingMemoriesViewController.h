/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXUIViewControllerZoomTransitionEndPoint.h>

@class PXFetchResultBasedMemoriesDataSourceManager, PXMemoriesUIViewController, UIBarButtonItem, PXMemoriesFeedUIViewController, NSString;

@interface PXTogglingMemoriesViewController : UIViewController <PXSectionedDataSourceManagerObserver, PXUIViewControllerZoomTransitionEndPoint> {

	BOOL _onlyShowFavorites;
	BOOL _hasAnyMemories;
	PXFetchResultBasedMemoriesDataSourceManager* _favoriteMemoriesDataSourceManager;
	PXMemoriesUIViewController* _favoriteMemoriesViewController;
	UIBarButtonItem* _toggleButton;
	PXMemoriesFeedUIViewController* _memoriesViewController;

}

@property (nonatomic,retain) PXFetchResultBasedMemoriesDataSourceManager * favoriteMemoriesDataSourceManager;              //@synthesize favoriteMemoriesDataSourceManager=_favoriteMemoriesDataSourceManager - In the implementation block
@property (nonatomic,retain) PXMemoriesUIViewController * favoriteMemoriesViewController;                                  //@synthesize favoriteMemoriesViewController=_favoriteMemoriesViewController - In the implementation block
@property (nonatomic,readonly) PXMemoriesFeedUIViewController * currentViewController; 
@property (nonatomic,readonly) NSString * currentBarButtonTitle; 
@property (assign,setter=setShouldOnlyShowFavorites:,nonatomic) BOOL onlyShowFavorites;                                    //@synthesize onlyShowFavorites=_onlyShowFavorites - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * toggleButton;                                                             //@synthesize toggleButton=_toggleButton - In the implementation block
@property (assign,nonatomic) BOOL hasAnyMemories;                                                                          //@synthesize hasAnyMemories=_hasAnyMemories - In the implementation block
@property (nonatomic,readonly) PXMemoriesFeedUIViewController * memoriesViewController;                                    //@synthesize memoriesViewController=_memoriesViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL keepsSourceRegionOfInterestContent; 
-(id)init;
-(void)viewDidLoad;
-(UIBarButtonItem *)toggleButton;
-(void)toggle;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)zoomAnimationCoordinatorForZoomTransition:(id)arg1 ;
-(id)regionOfInterestForTransition:(id)arg1 ;
-(void)prepareForInteractiveTransition:(id)arg1 ;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(BOOL)hasAnyMemories;
-(BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1 ;
-(id)px_endPointForTransition:(id)arg1 ;
-(PXMemoriesFeedUIViewController *)currentViewController;
-(void)setShouldOnlyShowFavorites:(BOOL)arg1 ;
-(NSString *)currentBarButtonTitle;
-(void)_configureMemoryViewControllers;
-(void)_configureBarButton;
-(void)_configureTitle;
-(void)_configureTitleInset;
-(void)_reloadCurrentViewController;
-(PXFetchResultBasedMemoriesDataSourceManager *)favoriteMemoriesDataSourceManager;
-(void)setFavoriteMemoriesDataSourceManager:(PXFetchResultBasedMemoriesDataSourceManager *)arg1 ;
-(PXMemoriesUIViewController *)favoriteMemoriesViewController;
-(void)setFavoriteMemoriesViewController:(PXMemoriesUIViewController *)arg1 ;
-(BOOL)onlyShowFavorites;
-(void)setHasAnyMemories:(BOOL)arg1 ;
-(PXMemoriesFeedUIViewController *)memoriesViewController;
@end

