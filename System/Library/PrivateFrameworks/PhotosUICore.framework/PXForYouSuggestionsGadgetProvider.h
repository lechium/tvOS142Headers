/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@class NSMapTable, PXSuggestionsDataSourceManager, NSString, NSArray, PXAssetReference, PXAssetsDataSourceManager, PXSuggestionsDataSource;

@interface PXForYouSuggestionsGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver> {

	BOOL _hasGeneratedGadgets;
	NSMapTable* _keyAssetFetchesBySuggestion;
	PXSuggestionsDataSourceManager* _dataSourceManager;
	NSString* _localizedTitle;
	NSArray* _oneUpAssets;
	PXAssetReference* _oneUpInitialAssetReference;
	PXAssetsDataSourceManager* _oneUpDataSourceManager;
	PXSuggestionsDataSource* _dataSource;

}

@property (nonatomic,retain) NSArray * oneUpAssets;                                             //@synthesize oneUpAssets=_oneUpAssets - In the implementation block
@property (nonatomic,retain) PXAssetReference * oneUpInitialAssetReference;                     //@synthesize oneUpInitialAssetReference=_oneUpInitialAssetReference - In the implementation block
@property (nonatomic,retain) PXAssetsDataSourceManager * oneUpDataSourceManager;                //@synthesize oneUpDataSourceManager=_oneUpDataSourceManager - In the implementation block
@property (nonatomic,readonly) PXSuggestionsDataSource * dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) PXSuggestionsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                                  //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)localizedTitle;
-(PXSuggestionsDataSource *)dataSource;
-(PXSuggestionsDataSourceManager *)dataSourceManager;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setDataSource:(id)arg1 changeDetails:(id)arg2 ;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2 ;
-(void)loadDataForGadgets;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(PXAssetsDataSourceManager *)oneUpDataSourceManager;
-(void)setOneUpDataSourceManager:(PXAssetsDataSourceManager *)arg1 ;
-(void)presentOneUpForSuggestion:(id)arg1 animated:(BOOL)arg2 ;
-(void)suggestionGadgetsWantsOneUpPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(id)_gadgetForAssetReference:(id)arg1 ;
-(PXAssetReference *)oneUpInitialAssetReference;
-(void)setOneUpInitialAssetReference:(PXAssetReference *)arg1 ;
-(id)initWithDataSourceManager:(id)arg1 localizedTitle:(id)arg2 ;
-(void)configureGadget:(id)arg1 ;
-(id)keyAssetForSuggestion:(id)arg1 ;
-(NSArray *)oneUpAssets;
-(void)setOneUpAssets:(NSArray *)arg1 ;
@end

