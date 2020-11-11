/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSMutableSet, PXCuratedLibraryAssetCollectionSkimmingInfo, NSSet, NSNumber;


@protocol PXMutablePhotosLibraryViewModel <NSObject>
@property (assign,nonatomic) BOOL isAppearing; 
@property (assign,nonatomic) long long zoomLevelTransitionPhase; 
@property (nonatomic,readonly) NSMutableSet * visibleAssetCollections; 
@property (assign,nonatomic) BOOL viewBasedDecorationsEnabled; 
@property (assign,nonatomic) BOOL isSelecting; 
@property (assign,nonatomic) double daysMarginScale; 
@property (nonatomic,retain) PXCuratedLibraryAssetCollectionSkimmingInfo * skimmingInfo; 
@property (nonatomic,copy) NSSet * draggedAssetReferences; 
@property (assign,nonatomic) long long zoomLevel; 
@property (nonatomic,copy) NSObject*<PXFilterState> allPhotosFilterState; 
@property (assign,nonatomic) BOOL wantsOptionalChromeVisible; 
@property (assign,nonatomic) BOOL wantsDarkStatusBar; 
@property (nonatomic,retain) Class cplActionManagerClass; 
@property (assign,nonatomic) BOOL sidebarCanBecomeVisible; 
@property (assign,nonatomic) BOOL wantsSidebarVisible; 
@property (nonatomic,copy) NSNumber * userWantsAspectFitContent; 
@required
-(void)removePresenter:(id)arg1;
-(void)addPresenter:(id)arg1;
-(void)setZoomLevel:(long long)arg1;
-(long long)zoomLevel;
-(BOOL)isSelecting;
-(NSSet *)draggedAssetReferences;
-(void)setDraggedAssetReferences:(id)arg1;
-(void)setIsSelecting:(BOOL)arg1;
-(BOOL)viewBasedDecorationsEnabled;
-(void)setViewBasedDecorationsEnabled:(BOOL)arg1;
-(void)toggleSelectionForIndexPath:(PXSimpleIndexPath)arg1;
-(void)toggleSelectionForAssetReference:(id)arg1;
-(void)toggleSelectionForAssetReference:(id)arg1 updateCursorIndexPath:(BOOL)arg2;
-(void)toggleSelectionForAssetCollectionReference:(id)arg1;
-(BOOL)isAppearing;
-(void)setIsAppearing:(BOOL)arg1;
-(NSNumber *)userWantsAspectFitContent;
-(void)setUserWantsAspectFitContent:(id)arg1;
-(NSMutableSet *)visibleAssetCollections;
-(void)addView:(id)arg1;
-(void)removeView:(id)arg1;
-(void)setWantsOptionalChromeVisible:(BOOL)arg1 changeReason:(long long)arg2;
-(long long)zoomLevelTransitionPhase;
-(void)setZoomLevelTransitionPhase:(long long)arg1;
-(double)daysMarginScale;
-(void)setDaysMarginScale:(double)arg1;
-(PXCuratedLibraryAssetCollectionSkimmingInfo *)skimmingInfo;
-(void)setSkimmingInfo:(id)arg1;
-(NSObject*<PXFilterState>)allPhotosFilterState;
-(void)setAllPhotosFilterState:(id)arg1;
-(BOOL)wantsOptionalChromeVisible;
-(void)setWantsOptionalChromeVisible:(BOOL)arg1;
-(BOOL)wantsDarkStatusBar;
-(void)setWantsDarkStatusBar:(BOOL)arg1;
-(Class)cplActionManagerClass;
-(void)setCplActionManagerClass:(Class)arg1;
-(BOOL)sidebarCanBecomeVisible;
-(void)setSidebarCanBecomeVisible:(BOOL)arg1;
-(BOOL)wantsSidebarVisible;
-(void)setWantsSidebarVisible:(BOOL)arg1;

@end

