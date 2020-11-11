//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TVInterfaceCreatingPrivate-Protocol.h"

@class NSMutableSet, NSString, TVMusicCloudViewController, TVMusicPlaybackHostController, UIFocusGuide, UITabBarController, UIView;

@interface TVMusicInterfaceFactory : NSObject <_TVInterfaceCreatingPrivate>
{
    TVMusicCloudViewController *_musicCloudViewController;	// 8 = 0x8
    TVMusicPlaybackHostController *_musicPlaybackHostController;	// 16 = 0x10
    UITabBarController *_tabBarController;	// 24 = 0x18
    UIView *_userMonogramView;	// 32 = 0x20
    NSMutableSet *_configuredTVMLPages;	// 40 = 0x28
    UIFocusGuide *_monogramBottomFocusGuide;	// 48 = 0x30
}

+ (id)sharedInterfaceFactory;	// IMP=0x000000010003021c
+ (_Bool)isDataPrivateForElement:(id)arg1;	// IMP=0x00000001000a473c
+ (id)playlistImgWithElement:(id)arg1 existingView:(id)arg2;	// IMP=0x00000001000a4124
- (void).cxx_destruct;	// IMP=0x0000000100032970
@property(retain, nonatomic) UIFocusGuide *monogramBottomFocusGuide; // @synthesize monogramBottomFocusGuide=_monogramBottomFocusGuide;
@property(retain, nonatomic) NSMutableSet *configuredTVMLPages; // @synthesize configuredTVMLPages=_configuredTVMLPages;
@property(nonatomic) __weak UIView *userMonogramView; // @synthesize userMonogramView=_userMonogramView;
@property(nonatomic) __weak UITabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
- (id)_searchController;	// IMP=0x0000000100032704
- (id)_placeholderImageForResourceName:(id)arg1;	// IMP=0x000000010003243c
- (id)_imageProxyForElement:(id)arg1;	// IMP=0x0000000100032220
- (id)_styleSheetURLForTemplate:(id)arg1;	// IMP=0x0000000100032034
- (Class)collectionViewCellClassForElement:(id)arg1;	// IMP=0x0000000100031f44
- (id)imageForResource:(id)arg1;	// IMP=0x0000000100031e98
- (id)viewForElement:(id)arg1 existingView:(id)arg2;	// IMP=0x0000000100031a40
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;	// IMP=0x000000010003155c
- (void)_didUpdateFocus:(id)arg1;	// IMP=0x00000001000313f8
- (void)configureViewElementsForPage:(id)arg1;	// IMP=0x0000000100030888
- (void)setup;	// IMP=0x0000000100030288

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

