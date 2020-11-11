/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/ASCLockupViewDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class UICollectionView;

@interface GameCenterUI.BaseCollectionViewController : UICollectionViewController <ASCLockupViewDelegate, UIAdaptivePresentationControllerDelegate> {

	 overlayView;
	 wantsHiddenNavigationBar;
	 wantsHiddenTitle;
	 manualScrollEdgeAppearanceProgress;
	 scrollObserver;
	 navbarScrollObserver;
	 focusedViewFrame;

}

@property (retain,nonatomic) UICollectionView * collectionView; 
-(id)presentingViewControllerForLockupView:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(UICollectionView *)collectionView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

