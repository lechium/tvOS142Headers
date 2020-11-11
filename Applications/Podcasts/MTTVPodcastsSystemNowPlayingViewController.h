//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSViewServicePresenter-Protocol.h"

@class NSObject, NSString, UINavigationController, UITapGestureRecognizer, UIView;
@protocol TVPAVFPlayback;

@interface MTTVPodcastsSystemNowPlayingViewController : UIViewController <PBSViewServicePresenter>
{
    UINavigationController *_navigationController;	// 8 = 0x8
    UITapGestureRecognizer *_menuGestureRecognizer;	// 16 = 0x10
    NSObject<TVPAVFPlayback> *_player;	// 24 = 0x18
    UIView *_nowPlayingWallPaper;	// 32 = 0x20
}

+ (id)_remoteViewControllerInterface;	// IMP=0x000000010007d5fc
+ (id)_exportedInterface;	// IMP=0x000000010007d4fc
- (void).cxx_destruct;	// IMP=0x000000010007d784
@property(retain, nonatomic) UIView *nowPlayingWallPaper; // @synthesize nowPlayingWallPaper=_nowPlayingWallPaper;
@property(retain, nonatomic) NSObject<TVPAVFPlayback> *player; // @synthesize player=_player;
@property(retain, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)_menuPressed:(id)arg1;	// IMP=0x000000010007d618
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010007d3f4
- (void)_dismissRemoteViewController;	// IMP=0x000000010007d36c
- (void)_playerDidChangeState:(id)arg1;	// IMP=0x000000010007d1c0
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007cef4
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x000000010007ca90
- (void)dealloc;	// IMP=0x000000010007c9f4
- (void)viewDidLoad;	// IMP=0x000000010007c8e4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010007c804

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

