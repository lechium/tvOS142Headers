/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class UILabel, UICollectionViewFlowLayout, UICollectionView, NSArray, NSString;

@interface VUIAppsGridViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIViewControllerTransitioningDelegate> {

	UILabel* _titleLabel;
	UICollectionViewFlowLayout* _layout;
	UICollectionView* _collectionView;
	NSArray* _apps;

}

@property (nonatomic,copy) NSArray * apps;                          //@synthesize apps=_apps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setTitle:(id)arg1 ;
-(NSArray *)apps;
-(void)setApps:(NSArray *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)_collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(Class)_collectionViewClass;
@end

