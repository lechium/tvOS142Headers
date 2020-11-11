/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCollectionLayoutEnvironment_Private;
@class _UIListSeparatorConfiguration, UICollectionView, NSArray, NSString, UIColor;

@interface _UICollectionViewListLayoutSectionConfiguration : NSObject <NSCopying> {

	BOOL _stylesFirstItemAsHeader;
	BOOL __apiVersion;
	_UIListSeparatorConfiguration* _separatorConfiguration;
	long long _appearanceStyle;
	double _rowHeight;
	double _sectionHeaderHeight;
	double _sectionFooterHeight;
	double _estimatedRowHeight;
	double _estimatedSectionHeaderHeight;
	double _estimatedSectionFooterHeight;
	long long _separatorStyle;
	/*^block*/id _separatorInsetProvider;
	/*^block*/id _leadingSwipeActionsConfigurationProvider;
	/*^block*/id _trailingSwipeActionsConfigurationProvider;
	/*^block*/id _willBeginSwipingHandler;
	/*^block*/id _didEndSwipingHandler;
	UICollectionView* _collectionView;
	id<NSCollectionLayoutEnvironment_Private> _layoutEnvironment;
	NSArray* _itemHeights;
	NSString* __headerElementKind;
	NSString* __footerElementKind;
	UIColor* __backgroundColor;

}

@property (getter=_collectionView,nonatomic,__weak,readonly) UICollectionView * collectionView;                                                                    //@synthesize collectionView=_collectionView - In the implementation block
@property (getter=_layoutEnvironment,nonatomic,readonly) id<NSCollectionLayoutEnvironment_Private> layoutEnvironment;                                              //@synthesize layoutEnvironment=_layoutEnvironment - In the implementation block
@property (getter=_constants,nonatomic,readonly) id<UITableConstants> constants; 
@property (assign,getter=_isAPIVersion,nonatomic) BOOL _apiVersion;                                                                                                //@synthesize _apiVersion=__apiVersion - In the implementation block
@property (setter=_setItemHeights:,getter=_itemHeights,nonatomic,copy) NSArray * itemHeights;                                                                      //@synthesize itemHeights=_itemHeights - In the implementation block
@property (nonatomic,copy) NSString * _headerElementKind;                                                                                                          //@synthesize _headerElementKind=__headerElementKind - In the implementation block
@property (nonatomic,copy) NSString * _footerElementKind;                                                                                                          //@synthesize _footerElementKind=__footerElementKind - In the implementation block
@property (nonatomic,retain) UIColor * _backgroundColor;                                                                                                           //@synthesize _backgroundColor=__backgroundColor - In the implementation block
@property (assign,nonatomic) long long appearanceStyle;                                                                                                            //@synthesize appearanceStyle=_appearanceStyle - In the implementation block
@property (assign,nonatomic) BOOL stylesFirstItemAsHeader;                                                                                                         //@synthesize stylesFirstItemAsHeader=_stylesFirstItemAsHeader - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                                                                                     //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double sectionHeaderHeight;                                                                                                           //@synthesize sectionHeaderHeight=_sectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double sectionFooterHeight;                                                                                                           //@synthesize sectionFooterHeight=_sectionFooterHeight - In the implementation block
@property (assign,nonatomic) double estimatedRowHeight;                                                                                                            //@synthesize estimatedRowHeight=_estimatedRowHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionHeaderHeight;                                                                                                  //@synthesize estimatedSectionHeaderHeight=_estimatedSectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionFooterHeight;                                                                                                  //@synthesize estimatedSectionFooterHeight=_estimatedSectionFooterHeight - In the implementation block
@property (setter=_setSeparatorConfiguration:,getter=_separatorConfiguration,nonatomic,copy) _UIListSeparatorConfiguration * _separatorConfiguration;              //@synthesize separatorConfiguration=_separatorConfiguration - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                                                                                                             //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets separatorInset; 
@property (nonatomic,copy) id separatorInsetProvider;                                                                                                              //@synthesize separatorInsetProvider=_separatorInsetProvider - In the implementation block
@property (nonatomic,copy) id leadingSwipeActionsConfigurationProvider;                                                                                            //@synthesize leadingSwipeActionsConfigurationProvider=_leadingSwipeActionsConfigurationProvider - In the implementation block
@property (nonatomic,copy) id trailingSwipeActionsConfigurationProvider;                                                                                           //@synthesize trailingSwipeActionsConfigurationProvider=_trailingSwipeActionsConfigurationProvider - In the implementation block
@property (nonatomic,copy) id willBeginSwipingHandler;                                                                                                             //@synthesize willBeginSwipingHandler=_willBeginSwipingHandler - In the implementation block
@property (nonatomic,copy) id didEndSwipingHandler;                                                                                                                //@synthesize didEndSwipingHandler=_didEndSwipingHandler - In the implementation block
+(id)new;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(UIColor *)_backgroundColor;
-(long long)separatorStyle;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setEstimatedSectionHeaderHeight:(double)arg1 ;
-(void)setEstimatedSectionFooterHeight:(double)arg1 ;
-(double)estimatedRowHeight;
-(void)setSeparatorInset:(NSDirectionalEdgeInsets)arg1 ;
-(NSDirectionalEdgeInsets)separatorInset;
-(void)setRowHeight:(double)arg1 ;
-(double)rowHeight;
-(void)setSectionHeaderHeight:(double)arg1 ;
-(void)setSectionFooterHeight:(double)arg1 ;
-(void)setEstimatedRowHeight:(double)arg1 ;
-(id)_collectionView;
-(id)_traitCollection;
-(double)_separatorHeight;
-(id)leadingSwipeActionsConfigurationProvider;
-(void)setLeadingSwipeActionsConfigurationProvider:(id)arg1 ;
-(id)trailingSwipeActionsConfigurationProvider;
-(void)setTrailingSwipeActionsConfigurationProvider:(id)arg1 ;
-(double)sectionHeaderHeight;
-(void)setAppearanceStyle:(long long)arg1 ;
-(double)sectionFooterHeight;
-(id)initWithCollectionView:(id)arg1 ;
-(id)_constants;
-(long long)appearanceStyle;
-(BOOL)_shouldDrawThickSeparators;
-(double)estimatedSectionHeaderHeight;
-(double)estimatedSectionFooterHeight;
-(double)_defaultSectionHeaderHeight;
-(double)_defaultSectionFooterHeight;
-(void)_setItemHeights:(id)arg1 ;
-(void)set_apiVersion:(BOOL)arg1 ;
-(void)set_headerElementKind:(NSString *)arg1 ;
-(void)set_footerElementKind:(NSString *)arg1 ;
-(void)set_backgroundColor:(UIColor *)arg1 ;
-(void)setStylesFirstItemAsHeader:(BOOL)arg1 ;
-(id)initWithAppearanceStyle:(long long)arg1 layoutEnvironment:(id)arg2 ;
-(double)_effectiveEstimatedRowHeight;
-(double)_effectiveEstimatedSectionHeaderHeight;
-(BOOL)_shouldPinSupplementaries;
-(double)_effectiveEstimatedSectionFooterHeight;
-(BOOL)_shouldSupplementariesFollowSectionInsets;
-(BOOL)_usesSectionBackgroundDecoration;
-(BOOL)_isAPIVersion;
-(BOOL)_hasHeaderOrFirstItemStyledAsHeader;
-(BOOL)_hasFooter;
-(double)_defaultRowHeight;
-(_UIListSeparatorConfiguration *)_separatorConfiguration;
-(void)_setSeparatorConfiguration:(id)arg1 ;
-(id)_createSeparatorForBottom:(BOOL)arg1 ;
-(id)_generateLayoutGroup:(id)arg1 ;
-(void)_addSupplementaryItemsToLayout:(id)arg1 ;
-(long long)_defaultContentInsetsReference;
-(NSDirectionalEdgeInsets)_sectionContentInsetsForAppearanceStyleWithDefaultInsets:(NSDirectionalEdgeInsets)arg1 ;
-(BOOL)stylesFirstItemAsHeader;
-(id)separatorInsetProvider;
-(void)setSeparatorInsetProvider:(id)arg1 ;
-(id)willBeginSwipingHandler;
-(void)setWillBeginSwipingHandler:(id)arg1 ;
-(id)didEndSwipingHandler;
-(void)setDidEndSwipingHandler:(id)arg1 ;
-(id)_layoutEnvironment;
-(id)_itemHeights;
-(NSString *)_headerElementKind;
-(NSString *)_footerElementKind;
@end

