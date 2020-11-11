/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UITabBar, NSMutableArray, UITabBarItemProxy, UITabBarItem, UISnapshotView, UIImageView, UILabel, NSArray, UINavigationBar;

@interface UITabBarCustomizeView : UIView {

	UITabBar* _tabBar;
	NSMutableArray* _proxies;
	NSMutableArray* _fixedItems;
	UITabBarItemProxy* _draggingProxy;
	UITabBarItem* _draggingItem;
	UISnapshotView* _dragImage;
	UIImageView* _replacementGlow;
	UITabBarItem* _replaceItem;
	UILabel* _titleLabel;
	CGPoint _startPoint;
	long long _itemsInRowCount;
	double _gridOffset;
	CGRect _firstItemRect;
	UITabBarItem* _selectedBeforeItem;
	BOOL _isBeingDismissed;
	NSArray* _availableItems;
	UINavigationBar* _navigationBar;

}

@property (nonatomic,retain) NSArray * availableItems;                     //@synthesize availableItems=_availableItems - In the implementation block
@property (nonatomic,retain) UINavigationBar * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UINavigationBar *)navigationBar;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)titleLabelFont;
-(NSArray *)availableItems;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(void)tabBarTouchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)itemInTabBarWithTouches:(id)arg1 withEvent:(id)arg2 ;
-(void)tabBarTouchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)tabBarTouchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(long long)_barMetrics;
-(void)updateProxiesSelection;
-(void)setAvailableItems:(NSArray *)arg1 ;
-(void)tintTabBarItemsForEdit:(BOOL)arg1 ;
-(void)adjustDragImageWithTouches:(id)arg1 withEvent:(id)arg2 ;
-(void)setIsBeingDismissed;
-(void)setTabBar:(id)arg1 currentItems:(id)arg2 availableItems:(id)arg3 ;
-(void)tabBarTouchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end

