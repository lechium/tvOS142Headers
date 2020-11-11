/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Stocks/Stocks-Structs.h>
@class StockChartDisplayMode;

@interface StocksLayout : NSObject {

	BOOL _infoViewHasBottomLine;
	BOOL _newsViewHasBottomLine;
	BOOL _chartViewHasBottomLine;
	BOOL _newsViewShouldUseLargerFonts;
	BOOL _chartViewHasTapGesture;
	BOOL _hasScrollView;
	BOOL _infoViewInScrollView;
	BOOL _chartViewInScrollView;
	BOOL _newsViewInScrollView;
	BOOL _hasBlurView;
	BOOL _hasGrayView;
	BOOL _hasSecondaryGrayView;
	BOOL _hasStatusView;
	BOOL _hasStatusViewDivider;
	BOOL _hasPrimaryHorizontalDivider;
	BOOL _hasSecondaryHorizontalDivider;
	BOOL _hasPrimaryVerticalDivider;
	BOOL _hasSecondaryVerticalDivider;
	BOOL _hasBlackView;
	BOOL _isFullScreenChart;
	unsigned long long _listViewRowCount;
	double _statusViewCenteringRatio;
	StockChartDisplayMode* _chartDisplayMode;
	CGSize _scrollViewContentSize;
	CGRect _listViewFrame;
	CGRect _infoViewFrame;
	CGRect _chartViewFrame;
	CGRect _newsViewFrame;
	UIEdgeInsets _listViewContentInsets;
	CGRect _scrollViewFrame;
	CGRect _blurViewFrame;
	CGRect _grayViewFrame;
	CGRect _secondaryGrayViewFrame;
	CGRect _statusViewFrame;
	CGRect _statusViewDividerFrame;
	CGRect _primaryHorizontalDividerFrame;
	CGRect _secondaryHorizontalDividerFrame;
	CGRect _primaryVerticalDividerFrame;
	CGRect _secondaryVerticalDividerFrame;

}

@property (assign,nonatomic) CGRect listViewFrame;                                  //@synthesize listViewFrame=_listViewFrame - In the implementation block
@property (assign,nonatomic) CGRect infoViewFrame;                                  //@synthesize infoViewFrame=_infoViewFrame - In the implementation block
@property (assign,nonatomic) CGRect chartViewFrame;                                 //@synthesize chartViewFrame=_chartViewFrame - In the implementation block
@property (assign,nonatomic) CGRect newsViewFrame;                                  //@synthesize newsViewFrame=_newsViewFrame - In the implementation block
@property (assign,nonatomic) UIEdgeInsets listViewContentInsets;                    //@synthesize listViewContentInsets=_listViewContentInsets - In the implementation block
@property (assign,nonatomic) BOOL infoViewHasBottomLine;                            //@synthesize infoViewHasBottomLine=_infoViewHasBottomLine - In the implementation block
@property (assign,nonatomic) BOOL newsViewHasBottomLine;                            //@synthesize newsViewHasBottomLine=_newsViewHasBottomLine - In the implementation block
@property (assign,nonatomic) BOOL chartViewHasBottomLine;                           //@synthesize chartViewHasBottomLine=_chartViewHasBottomLine - In the implementation block
@property (assign,nonatomic) BOOL newsViewShouldUseLargerFonts;                     //@synthesize newsViewShouldUseLargerFonts=_newsViewShouldUseLargerFonts - In the implementation block
@property (assign,nonatomic) BOOL chartViewHasTapGesture;                           //@synthesize chartViewHasTapGesture=_chartViewHasTapGesture - In the implementation block
@property (assign,nonatomic) BOOL hasScrollView;                                    //@synthesize hasScrollView=_hasScrollView - In the implementation block
@property (assign,nonatomic) CGRect scrollViewFrame;                                //@synthesize scrollViewFrame=_scrollViewFrame - In the implementation block
@property (assign,nonatomic) CGSize scrollViewContentSize;                          //@synthesize scrollViewContentSize=_scrollViewContentSize - In the implementation block
@property (assign,nonatomic) BOOL infoViewInScrollView;                             //@synthesize infoViewInScrollView=_infoViewInScrollView - In the implementation block
@property (assign,nonatomic) BOOL chartViewInScrollView;                            //@synthesize chartViewInScrollView=_chartViewInScrollView - In the implementation block
@property (assign,nonatomic) BOOL newsViewInScrollView;                             //@synthesize newsViewInScrollView=_newsViewInScrollView - In the implementation block
@property (assign,nonatomic) BOOL hasBlurView;                                      //@synthesize hasBlurView=_hasBlurView - In the implementation block
@property (assign,nonatomic) CGRect blurViewFrame;                                  //@synthesize blurViewFrame=_blurViewFrame - In the implementation block
@property (assign,nonatomic) BOOL hasGrayView;                                      //@synthesize hasGrayView=_hasGrayView - In the implementation block
@property (assign,nonatomic) CGRect grayViewFrame;                                  //@synthesize grayViewFrame=_grayViewFrame - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryGrayView;                             //@synthesize hasSecondaryGrayView=_hasSecondaryGrayView - In the implementation block
@property (assign,nonatomic) CGRect secondaryGrayViewFrame;                         //@synthesize secondaryGrayViewFrame=_secondaryGrayViewFrame - In the implementation block
@property (assign,nonatomic) BOOL hasStatusView;                                    //@synthesize hasStatusView=_hasStatusView - In the implementation block
@property (assign,nonatomic) CGRect statusViewFrame;                                //@synthesize statusViewFrame=_statusViewFrame - In the implementation block
@property (assign,nonatomic) BOOL hasStatusViewDivider;                             //@synthesize hasStatusViewDivider=_hasStatusViewDivider - In the implementation block
@property (assign,nonatomic) CGRect statusViewDividerFrame;                         //@synthesize statusViewDividerFrame=_statusViewDividerFrame - In the implementation block
@property (assign,nonatomic) BOOL hasPrimaryHorizontalDivider;                      //@synthesize hasPrimaryHorizontalDivider=_hasPrimaryHorizontalDivider - In the implementation block
@property (assign,nonatomic) CGRect primaryHorizontalDividerFrame;                  //@synthesize primaryHorizontalDividerFrame=_primaryHorizontalDividerFrame - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryHorizontalDivider;                    //@synthesize hasSecondaryHorizontalDivider=_hasSecondaryHorizontalDivider - In the implementation block
@property (assign,nonatomic) CGRect secondaryHorizontalDividerFrame;                //@synthesize secondaryHorizontalDividerFrame=_secondaryHorizontalDividerFrame - In the implementation block
@property (assign,nonatomic) BOOL hasPrimaryVerticalDivider;                        //@synthesize hasPrimaryVerticalDivider=_hasPrimaryVerticalDivider - In the implementation block
@property (assign,nonatomic) CGRect primaryVerticalDividerFrame;                    //@synthesize primaryVerticalDividerFrame=_primaryVerticalDividerFrame - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryVerticalDivider;                      //@synthesize hasSecondaryVerticalDivider=_hasSecondaryVerticalDivider - In the implementation block
@property (assign,nonatomic) CGRect secondaryVerticalDividerFrame;                  //@synthesize secondaryVerticalDividerFrame=_secondaryVerticalDividerFrame - In the implementation block
@property (assign,nonatomic) unsigned long long listViewRowCount;                   //@synthesize listViewRowCount=_listViewRowCount - In the implementation block
@property (assign,nonatomic) double statusViewCenteringRatio;                       //@synthesize statusViewCenteringRatio=_statusViewCenteringRatio - In the implementation block
@property (nonatomic,retain) StockChartDisplayMode * chartDisplayMode;              //@synthesize chartDisplayMode=_chartDisplayMode - In the implementation block
@property (assign,nonatomic) BOOL hasBlackView;                                     //@synthesize hasBlackView=_hasBlackView - In the implementation block
@property (assign,nonatomic) BOOL isFullScreenChart;                                //@synthesize isFullScreenChart=_isFullScreenChart - In the implementation block
+(id)singleColumnPortraitLayoutForSize:(CGSize)arg1 ;
+(id)twoColumnsPortraitLayoutForSize:(CGSize)arg1 ;
+(id)fullScreenChartLayoutForSize:(CGSize)arg1 ;
+(id)twoColumnsLandscapeLayoutForSize:(CGSize)arg1 ;
+(id)threeColumnsLandscapeLayoutForSize:(CGSize)arg1 ;
+(unsigned long long)numberOfRowsForSize:(CGSize)arg1 ;
+(id)layoutForSize:(CGSize)arg1 ;
-(id)description;
-(CGSize)scrollViewContentSize;
-(void)setListViewFrame:(CGRect)arg1 ;
-(void)setInfoViewFrame:(CGRect)arg1 ;
-(void)setChartViewFrame:(CGRect)arg1 ;
-(void)setNewsViewFrame:(CGRect)arg1 ;
-(void)setListViewContentInsets:(UIEdgeInsets)arg1 ;
-(void)setNewsViewHasBottomLine:(BOOL)arg1 ;
-(void)setInfoViewHasBottomLine:(BOOL)arg1 ;
-(void)setChartViewHasBottomLine:(BOOL)arg1 ;
-(void)setNewsViewShouldUseLargerFonts:(BOOL)arg1 ;
-(void)setHasScrollView:(BOOL)arg1 ;
-(void)setScrollViewFrame:(CGRect)arg1 ;
-(void)setScrollViewContentSize:(CGSize)arg1 ;
-(void)setInfoViewInScrollView:(BOOL)arg1 ;
-(void)setChartViewInScrollView:(BOOL)arg1 ;
-(void)setNewsViewInScrollView:(BOOL)arg1 ;
-(void)setHasBlurView:(BOOL)arg1 ;
-(void)setBlurViewFrame:(CGRect)arg1 ;
-(void)setHasGrayView:(BOOL)arg1 ;
-(void)setGrayViewFrame:(CGRect)arg1 ;
-(void)setHasSecondaryGrayView:(BOOL)arg1 ;
-(void)setSecondaryGrayViewFrame:(CGRect)arg1 ;
-(void)setListViewRowCount:(unsigned long long)arg1 ;
-(void)setStatusViewCenteringRatio:(double)arg1 ;
-(void)setHasStatusView:(BOOL)arg1 ;
-(void)setStatusViewFrame:(CGRect)arg1 ;
-(void)setHasStatusViewDivider:(BOOL)arg1 ;
-(void)setStatusViewDividerFrame:(CGRect)arg1 ;
-(void)setHasPrimaryHorizontalDivider:(BOOL)arg1 ;
-(void)setHasSecondaryHorizontalDivider:(BOOL)arg1 ;
-(void)setHasPrimaryVerticalDivider:(BOOL)arg1 ;
-(CGRect)listViewFrame;
-(void)setPrimaryVerticalDividerFrame:(CGRect)arg1 ;
-(void)setHasSecondaryVerticalDivider:(BOOL)arg1 ;
-(void)setChartDisplayMode:(StockChartDisplayMode *)arg1 ;
-(void)setPrimaryHorizontalDividerFrame:(CGRect)arg1 ;
-(void)setSecondaryVerticalDividerFrame:(CGRect)arg1 ;
-(void)setChartViewHasTapGesture:(BOOL)arg1 ;
-(void)setHasBlackView:(BOOL)arg1 ;
-(void)setIsFullScreenChart:(BOOL)arg1 ;
-(CGRect)infoViewFrame;
-(BOOL)infoViewInScrollView;
-(CGRect)chartViewFrame;
-(BOOL)chartViewInScrollView;
-(CGRect)newsViewFrame;
-(BOOL)newsViewInScrollView;
-(BOOL)hasScrollView;
-(CGRect)scrollViewFrame;
-(UIEdgeInsets)listViewContentInsets;
-(BOOL)infoViewHasBottomLine;
-(BOOL)newsViewHasBottomLine;
-(BOOL)chartViewHasBottomLine;
-(BOOL)newsViewShouldUseLargerFonts;
-(BOOL)chartViewHasTapGesture;
-(BOOL)hasBlurView;
-(CGRect)blurViewFrame;
-(BOOL)hasGrayView;
-(CGRect)grayViewFrame;
-(BOOL)hasSecondaryGrayView;
-(CGRect)secondaryGrayViewFrame;
-(BOOL)hasStatusView;
-(CGRect)statusViewFrame;
-(BOOL)hasStatusViewDivider;
-(CGRect)statusViewDividerFrame;
-(BOOL)hasPrimaryHorizontalDivider;
-(CGRect)primaryHorizontalDividerFrame;
-(BOOL)hasSecondaryHorizontalDivider;
-(CGRect)secondaryHorizontalDividerFrame;
-(void)setSecondaryHorizontalDividerFrame:(CGRect)arg1 ;
-(BOOL)hasPrimaryVerticalDivider;
-(CGRect)primaryVerticalDividerFrame;
-(BOOL)hasSecondaryVerticalDivider;
-(CGRect)secondaryVerticalDividerFrame;
-(unsigned long long)listViewRowCount;
-(double)statusViewCenteringRatio;
-(StockChartDisplayMode *)chartDisplayMode;
-(BOOL)hasBlackView;
-(BOOL)isFullScreenChart;
@end

