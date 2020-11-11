/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKStoreRemoteViewControllerDelegate.h>

@protocol SKArcadeSubscribeViewControllerDelegate, NSCopying;
@class SKStoreRemoteViewController, NSString, NSNumber, NSExtension;

@interface SKArcadeSubscribeViewController : UIViewController <SKStoreRemoteViewControllerDelegate> {

	id<SKArcadeSubscribeViewControllerDelegate> _delegate;
	SKStoreRemoteViewController* _remoteViewController;
	NSString* _bundleID;
	NSNumber* _itemID;
	NSExtension* _extension;
	id<NSCopying> _extensionRequestIdentifier;

}

@property (nonatomic,retain) SKStoreRemoteViewController * remoteViewController;                       //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * itemID;                                                        //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                                  //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) id<NSCopying> extensionRequestIdentifier;                                 //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<SKArcadeSubscribeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SKArcadeSubscribeViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKArcadeSubscribeViewControllerDelegate>)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)finish;
-(NSNumber *)itemID;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(SKStoreRemoteViewController *)remoteViewController;
-(void)setRemoteViewController:(SKStoreRemoteViewController *)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_loadOcelotUpsellExtension;
-(void)setExtensionRequestIdentifier:(id<NSCopying>)arg1 ;
-(void)_setupRemoteChildViewController;
-(void)storeRemoteViewControllerNeedsTabSelection:(id)arg1 ;
-(void)storeRemoteViewController:(id)arg1 presentRequestedViewControllerWithIdentifier:(id)arg2 ;
-(void)storeRemoteViewControllerDidDismiss;
-(void)storeRemoteViewControllerTerminatedWithError:(id)arg1 ;
-(id)initWithItemID:(id)arg1 bundleID:(id)arg2 ;
-(void)finishExtension;
-(id<NSCopying>)extensionRequestIdentifier;
@end

