/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol OS_dispatch_source;
@class UILabel, NSObject, UIActivityIndicatorView, UIVisualEffectView, NSString;

@interface TVCSActivityIndicatorViewController : UIViewController {

	UILabel* _activityTextLabel;
	BOOL _showingSpinner;
	NSObject*<OS_dispatch_source> _spinnerTimer;
	UIActivityIndicatorView* _spinnerView;
	UIVisualEffectView* _visualEffectView;
	BOOL _activityIndicatorHidden;
	BOOL _allowMenuToDismiss;
	NSString* _activityText;
	double _activityIndicatorDelay;

}

@property (nonatomic,copy) NSString * activityText;                                                      //@synthesize activityText=_activityText - In the implementation block
@property (assign,getter=isActivityIndicatorHidden,nonatomic) BOOL activityIndicatorHidden;              //@synthesize activityIndicatorHidden=_activityIndicatorHidden - In the implementation block
@property (assign,nonatomic) double activityIndicatorDelay;                                              //@synthesize activityIndicatorDelay=_activityIndicatorDelay - In the implementation block
@property (assign,nonatomic) BOOL allowMenuToDismiss;                                                    //@synthesize allowMenuToDismiss=_allowMenuToDismiss - In the implementation block
-(void)dealloc;
-(void)viewDidLoad;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_didSelectMenu;
-(void)setActivityText:(NSString *)arg1 ;
-(void)setActivityIndicatorDelay:(double)arg1 ;
-(NSString *)activityText;
-(BOOL)isActivityIndicatorHidden;
-(void)setActivityIndicatorHidden:(BOOL)arg1 ;
-(double)activityIndicatorDelay;
-(BOOL)allowMenuToDismiss;
-(void)setAllowMenuToDismiss:(BOOL)arg1 ;
@end
