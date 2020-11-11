/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableSet, NSMutableArray, _UIFlowLayoutInfo, NSArray;

@interface _UIFlowLayoutSection : NSObject {

	BOOL _isValid;
	CGRect _validRect;
	CGRect _rectToKeepValid;
	NSMutableSet* _invalidatedIndexPaths;
	BOOL _fixedItemSize;
	BOOL _lastRowIncomplete;
	NSMutableArray* _items;
	NSMutableArray* _rows;
	double _verticalInterstice;
	double _horizontalInterstice;
	double _headerDimension;
	double _footerDimension;
	_UIFlowLayoutInfo* _layoutInfo;
	double _otherMargin;
	double _beginMargin;
	double _endMargin;
	double _actualGap;
	double _lastRowBeginMargin;
	double _lastRowEndMargin;
	double _lastRowActualGap;
	long long _itemsCount;
	long long _itemsByRowCount;
	long long _indexOfIncompleteRow;
	SCD_Struct_UI41 _rowAlignmentOptions;
	CGSize _itemSize;
	NSRange _validItemRange;
	UIEdgeInsets _sectionMargins;
	CGRect _frame;
	CGRect _headerFrame;
	CGRect _footerFrame;

}

@property (nonatomic,readonly) NSMutableArray * items;                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSMutableArray * rows;                                             //@synthesize rows=_rows - In the implementation block
@property (assign,nonatomic) double verticalInterstice;                                           //@synthesize verticalInterstice=_verticalInterstice - In the implementation block
@property (assign,nonatomic) double horizontalInterstice;                                         //@synthesize horizontalInterstice=_horizontalInterstice - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionMargins;                                         //@synthesize sectionMargins=_sectionMargins - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                        //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect headerFrame;                                                  //@synthesize headerFrame=_headerFrame - In the implementation block
@property (assign,nonatomic) CGRect footerFrame;                                                  //@synthesize footerFrame=_footerFrame - In the implementation block
@property (nonatomic,readonly) double headerDimension;                                            //@synthesize headerDimension=_headerDimension - In the implementation block
@property (nonatomic,readonly) double footerDimension;                                            //@synthesize footerDimension=_footerDimension - In the implementation block
@property (nonatomic,readonly) CGRect effectiveHeaderFrameWithSectionMarginsApplied; 
@property (nonatomic,readonly) CGRect effectiveFooterFrameWithSectionMarginsApplied; 
@property (assign,nonatomic,__weak) _UIFlowLayoutInfo * layoutInfo;                               //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI41 rowAlignmentOptions;                                 //@synthesize rowAlignmentOptions=_rowAlignmentOptions - In the implementation block
@property (assign,nonatomic) BOOL fixedItemSize;                                                  //@synthesize fixedItemSize=_fixedItemSize - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                                     //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,readonly) double otherMargin;                                                //@synthesize otherMargin=_otherMargin - In the implementation block
@property (nonatomic,readonly) double beginMargin;                                                //@synthesize beginMargin=_beginMargin - In the implementation block
@property (nonatomic,readonly) double endMargin;                                                  //@synthesize endMargin=_endMargin - In the implementation block
@property (nonatomic,readonly) double actualGap;                                                  //@synthesize actualGap=_actualGap - In the implementation block
@property (nonatomic,readonly) double lastRowBeginMargin;                                         //@synthesize lastRowBeginMargin=_lastRowBeginMargin - In the implementation block
@property (nonatomic,readonly) double lastRowEndMargin;                                           //@synthesize lastRowEndMargin=_lastRowEndMargin - In the implementation block
@property (nonatomic,readonly) double lastRowActualGap;                                           //@synthesize lastRowActualGap=_lastRowActualGap - In the implementation block
@property (nonatomic,readonly) BOOL lastRowIncomplete;                                            //@synthesize lastRowIncomplete=_lastRowIncomplete - In the implementation block
@property (assign,nonatomic) long long itemsCount;                                                //@synthesize itemsCount=_itemsCount - In the implementation block
@property (nonatomic,readonly) long long itemsByRowCount;                                         //@synthesize itemsByRowCount=_itemsByRowCount - In the implementation block
@property (nonatomic,readonly) long long indexOfIncompleteRow;                                    //@synthesize indexOfIncompleteRow=_indexOfIncompleteRow - In the implementation block
@property (nonatomic,readonly) NSRange validItemRange;                                            //@synthesize validItemRange=_validItemRange - In the implementation block
@property (nonatomic,readonly) NSArray * invalidatedIndexPaths; 
-(id)init;
-(void)invalidate;
-(NSMutableArray *)items;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(id)snapshot;
-(NSMutableArray *)rows;
-(long long)itemsCount;
-(void)setLayoutInfo:(_UIFlowLayoutInfo *)arg1 ;
-(_UIFlowLayoutInfo *)layoutInfo;
-(void)setItemSize:(CGSize)arg1 ;
-(CGSize)itemSize;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(double)headerDimension;
-(double)footerDimension;
-(BOOL)fixedItemSize;
-(long long)itemsByRowCount;
-(SCD_Struct_UI41)rowAlignmentOptions;
-(BOOL)lastRowIncomplete;
-(long long)indexOfIncompleteRow;
-(double)lastRowBeginMargin;
-(double)lastRowActualGap;
-(double)beginMargin;
-(double)actualGap;
-(double)otherMargin;
-(double)verticalInterstice;
-(double)endMargin;
-(NSRange)validItemRange;
-(void)setItemsCount:(long long)arg1 ;
-(id)addItem;
-(void)setFixedItemSize:(BOOL)arg1 ;
-(void)setSectionMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)sectionMargins;
-(void)setHorizontalInterstice:(double)arg1 ;
-(void)setVerticalInterstice:(double)arg1 ;
-(void)setRowAlignmentOptions:(SCD_Struct_UI41)arg1 ;
-(void)setHeaderDimension:(double)arg1 forSection:(long long)arg2 ;
-(void)setFooterDimension:(double)arg1 forSection:(long long)arg2 ;
-(void)updateEstimatedSizeForSection:(long long)arg1 ;
-(void)computeLayoutInRect:(CGRect)arg1 forSection:(long long)arg2 invalidating:(BOOL)arg3 invalidationContext:(id)arg4 ;
-(void)computeLayout;
-(CGRect)effectiveHeaderFrameWithSectionMarginsApplied;
-(CGRect)headerFrame;
-(CGRect)footerFrame;
-(CGRect)effectiveFooterFrameWithSectionMarginsApplied;
-(void)logInvalidSizesForHorizontalDirection:(BOOL)arg1 warnAboutDelegateValues:(BOOL)arg2 ;
-(id)addRowAtEnd:(BOOL)arg1 ;
-(void)setEstimatedSize:(CGSize)arg1 forSection:(long long)arg2 ;
-(void)addInvalidatedIndexPath:(id)arg1 ;
-(void)sizeChangedForItem:(id)arg1 atIndexPath:(id)arg2 inRow:(id)arg3 ;
-(long long)estimatedIndexOfItemAtPoint:(CGPoint)arg1 ;
-(void)logInvalidSizes;
-(NSArray *)invalidatedIndexPaths;
-(void)computeLayoutValidatingForwardForIndexPath:(id)arg1 ;
-(id)copyFromLayoutInfo:(id)arg1 ;
-(void)updateSize:(CGSize)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)setSize:(CGSize)arg1 forItemAtIndexPath:(id)arg2 invalidationContext:(id)arg3 ;
-(id)rowsInRect:(CGRect)arg1 ;
-(double)horizontalInterstice;
-(void)setHeaderFrame:(CGRect)arg1 ;
-(void)setFooterFrame:(CGRect)arg1 ;
-(double)lastRowEndMargin;
@end

