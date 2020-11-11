/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXPeopleStripCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/PXPeopleDataSourceDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PXWidget.h>

@protocol PXWidgetDelegate, PXWidgetUnlockDelegate;
@class PXPhotosDetailsContext, PXWidgetSpec, PXPeopleStripCollectionViewController, PXPeopleWidgetDataSource, PXUITapGestureRecognizer, NSString, PXTilingController, PXSectionedSelectionManager;

@interface PXPeopleRelatedWidget : NSObject <PXPeopleStripCollectionViewControllerDelegate, PXPeopleDataSourceDelegate, UIGestureRecognizerDelegate, PXWidget> {

	BOOL _userInteractionEnabled;
	BOOL _isSummaryMode;
	BOOL _showFooter;
	BOOL _startedLoadingDataSource;
	BOOL _hasLoadedContentData;
	id<PXWidgetDelegate> _widgetDelegate;
	PXPhotosDetailsContext* _context;
	PXWidgetSpec* _spec;
	long long _contentViewAnchoringType;
	id<PXWidgetUnlockDelegate> _widgetUnlockDelegate;
	PXPeopleStripCollectionViewController* _collectionViewController;
	double _cellMinInteritemSpacing;
	double _cellMinLineSpacing;
	PXPeopleWidgetDataSource* _dataSource;
	unsigned long long _viewType;
	PXUITapGestureRecognizer* __tapRecognizer;
	double _targetPrefetchWidth;
	CGSize _contentSize;
	CGSize _cellSize;

}

@property (nonatomic,retain) PXPeopleStripCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (assign,nonatomic) BOOL isSummaryMode;                                                            //@synthesize isSummaryMode=_isSummaryMode - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                            //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) CGSize cellSize;                                                               //@synthesize cellSize=_cellSize - In the implementation block
@property (assign,nonatomic) double cellMinInteritemSpacing;                                                //@synthesize cellMinInteritemSpacing=_cellMinInteritemSpacing - In the implementation block
@property (assign,nonatomic) double cellMinLineSpacing;                                                     //@synthesize cellMinLineSpacing=_cellMinLineSpacing - In the implementation block
@property (assign,nonatomic) BOOL showFooter;                                                               //@synthesize showFooter=_showFooter - In the implementation block
@property (nonatomic,retain) PXPeopleWidgetDataSource * dataSource;                                         //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,getter=hasStartedLoadingDataSource,nonatomic) BOOL startedLoadingDataSource;              //@synthesize startedLoadingDataSource=_startedLoadingDataSource - In the implementation block
@property (assign,nonatomic) unsigned long long viewType;                                                   //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,retain) PXUITapGestureRecognizer * _tapRecognizer;                                     //@synthesize _tapRecognizer=__tapRecognizer - In the implementation block
@property (assign,nonatomic) double targetPrefetchWidth;                                                    //@synthesize targetPrefetchWidth=_targetPrefetchWidth - In the implementation block
@property (assign,setter=_setHasLoadedContentData:,nonatomic) BOOL hasLoadedContentData;                    //@synthesize hasLoadedContentData=_hasLoadedContentData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXWidgetDelegate> widgetDelegate;                                    //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetUnlockDelegate> widgetUnlockDelegate;                        //@synthesize widgetUnlockDelegate=_widgetUnlockDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetEditingDelegate> widgetEditingDelegate; 
@property (nonatomic,retain) PXPhotosDetailsContext * context;                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PXWidgetSpec * spec;                                                           //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) BOOL hasContentForCurrentInput; 
@property (nonatomic,readonly) double extraSpaceNeededAtContentBottom; 
@property (nonatomic,readonly) NSObject*<PXAnonymousView> contentView; 
@property (nonatomic,readonly) long long contentViewAnchoringType;                                          //@synthesize contentViewAnchoringType=_contentViewAnchoringType - In the implementation block
@property (nonatomic,readonly) PXTilingController * contentTilingController; 
@property (nonatomic,readonly) long long contentLayoutStyle; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSString * localizedCaption; 
@property (nonatomic,readonly) NSString * localizedDisclosureTitle; 
@property (nonatomic,readonly) BOOL allowUserInteractionWithSubtitle; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled;                   //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL supportsSelection; 
@property (assign,getter=isSelecting,nonatomic) BOOL selecting; 
@property (nonatomic,readonly) BOOL supportsFaceMode; 
@property (assign,getter=isFaceModeEnabled,nonatomic) BOOL faceModeEnabled; 
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager; 
@property (nonatomic,readonly) BOOL wantsFocus; 
@property (nonatomic,readonly) BOOL isInEditMode; 
@property (assign,nonatomic) CGSize maxVisibleSizeInEditMode; 
-(PXPhotosDetailsContext *)context;
-(void)setContext:(PXPhotosDetailsContext *)arg1 ;
-(NSString *)localizedTitle;
-(PXPeopleWidgetDataSource *)dataSource;
-(CGSize)contentSize;
-(void)setDataSource:(PXPeopleWidgetDataSource *)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(NSObject*<PXAnonymousView>)contentView;
-(CGSize)cellSize;
-(void)setContentSize:(CGSize)arg1 ;
-(id)traitCollection;
-(PXWidgetSpec *)spec;
-(BOOL)isUserInteractionEnabled;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(double)minimumInteritemSpacing;
-(UIEdgeInsets)sectionInset;
-(double)minimumLineSpacing;
-(PXPeopleStripCollectionViewController *)collectionViewController;
-(void)_handleTap:(id)arg1 ;
-(void)setSpec:(PXWidgetSpec *)arg1 ;
-(double)preferredContentHeightForWidth:(double)arg1 ;
-(void)loadContentData;
-(void)unloadContentData;
-(id<PXWidgetDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id<PXWidgetDelegate>)arg1 ;
-(id<PXWidgetUnlockDelegate>)widgetUnlockDelegate;
-(void)setWidgetUnlockDelegate:(id<PXWidgetUnlockDelegate>)arg1 ;
-(BOOL)hasContentForCurrentInput;
-(BOOL)hasLoadedContentData;
-(long long)contentViewAnchoringType;
-(void)_setHasLoadedContentData:(BOOL)arg1 ;
-(PXUITapGestureRecognizer *)_tapRecognizer;
-(void)peopleDataSourceMembersChanged:(id)arg1 ;
-(void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2 ;
-(CGSize)sizeForItem;
-(void)memberTappedAtIndexPath:(id)arg1 forPeopleStripController:(id)arg2 ;
-(void)contentSizeCategoryChanged:(id)arg1 ;
-(void)peopleDataSource:(id)arg1 didAddMembersAtIndexPaths:(id)arg2 ;
-(void)peopleDataSource:(id)arg1 didRemoveMembersAtIndexPaths:(id)arg2 ;
-(void)peopleDataSource:(id)arg1 didUpdateMembersAtIndexPaths:(id)arg2 ;
-(void)_prepareDataSource;
-(UIEdgeInsets)_realContentInset;
-(void)_loadContainerView;
-(BOOL)_calculateLayoutInfosForWidth:(double)arg1 cellSize:(CGSize*)arg2 interitemSpacing:(double*)arg3 ;
-(CGSize)_sizeForItemWithWidth:(double)arg1 withInterItemSpacing:(double)arg2 ;
-(unsigned long long)_numberOfVisibleFacesForWidth:(double)arg1 ;
-(void)_resetControllerLayoutInfosForWidth:(double)arg1 ;
-(void)setCollectionViewController:(PXPeopleStripCollectionViewController *)arg1 ;
-(void)setCellSize:(CGSize)arg1 ;
-(double)cellMinInteritemSpacing;
-(void)setCellMinInteritemSpacing:(double)arg1 ;
-(double)cellMinLineSpacing;
-(void)setCellMinLineSpacing:(double)arg1 ;
-(double)targetPrefetchWidth;
-(void)setTargetPrefetchWidth:(double)arg1 ;
-(BOOL)showFooter;
-(void)setShowFooter:(BOOL)arg1 ;
-(id)initWithViewType:(unsigned long long)arg1 ;
-(void)setIsSummaryMode:(BOOL)arg1 ;
-(BOOL)isSummaryMode;
-(BOOL)hasStartedLoadingDataSource;
-(void)setStartedLoadingDataSource:(BOOL)arg1 ;
-(unsigned long long)viewType;
-(void)setViewType:(unsigned long long)arg1 ;
-(void)set_tapRecognizer:(PXUITapGestureRecognizer *)arg1 ;
@end

