/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIView, PXMemoriesBlacklistAccessoryViewSpec, NSArray;

@interface PXMemoriesBlacklistAccessoryViewController : UIViewController {

	UIView* _accessoryView;
	PXMemoriesBlacklistAccessoryViewSpec* _viewSpec;
	NSArray* _constraints;

}

@property (nonatomic,retain) UIView * accessoryView;                                       //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) PXMemoriesBlacklistAccessoryViewSpec * viewSpec;              //@synthesize viewSpec=_viewSpec - In the implementation block
@property (setter=_setConstraints:,nonatomic,copy) NSArray * constraints;                  //@synthesize constraints=_constraints - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(NSArray *)constraints;
-(void)viewDidLoad;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(UIView *)accessoryView;
-(void)updateViewConstraints;
-(void)didReceiveMemoryWarning;
-(void)_setConstraints:(id)arg1 ;
-(PXMemoriesBlacklistAccessoryViewSpec *)viewSpec;
-(id)initWithAccessoryView:(id)arg1 viewSpec:(id)arg2 ;
-(void)setViewSpec:(PXMemoriesBlacklistAccessoryViewSpec *)arg1 ;
@end

