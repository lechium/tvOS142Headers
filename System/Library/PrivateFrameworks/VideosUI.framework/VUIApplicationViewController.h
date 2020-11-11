/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TVApplicationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class TVApplicationController, VUIBootURLController, UINavigationController, NSString;

@interface VUIApplicationViewController : UIViewController <TVApplicationControllerDelegate, UIGestureRecognizerDelegate> {

	TVApplicationController* _applicationController;
	VUIBootURLController* _bootURLController;
	UINavigationController* _navigationController;

}

@property (nonatomic,retain) TVApplicationController * applicationController;              //@synthesize applicationController=_applicationController - In the implementation block
@property (nonatomic,retain) VUIBootURLController * bootURLController;                     //@synthesize bootURLController=_bootURLController - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLoad;
-(id)_launchOptions;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)setApplicationController:(TVApplicationController *)arg1 ;
-(TVApplicationController *)applicationController;
-(void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)appController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(void)setBootURLController:(VUIBootURLController *)arg1 ;
-(VUIBootURLController *)bootURLController;
-(void)_startApplicationControllerWithBootURL:(id)arg1 ;
-(void)_exposeObjectsInJSContext:(id)arg1 ;
-(id)_initialViewControllerWithAppContext:(id)arg1 ;
-(Class)_applicationControllerClass;
@end

