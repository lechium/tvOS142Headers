//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

@protocol UIApplicationDelegate;

@interface MTApplication : UIApplication
{
    id <UIApplicationDelegate> _strongDelegate;	// 8 = 0x8
}

+ (_Bool)localLibraryUpdatesDisabled;	// IMP=0x000000010003d88c
+ (_Bool)handleTextViewURL:(id)arg1 interaction:(long long)arg2;	// IMP=0x000000010003d6a4
+ (id)appController;	// IMP=0x000000010003d628
+ (id)sharedApplication;	// IMP=0x000000010003d5ec
- (void).cxx_destruct;	// IMP=0x000000010003db7c
@property(retain, nonatomic) id <UIApplicationDelegate> strongDelegate; // @synthesize strongDelegate=_strongDelegate;
- (id)_extendLaunchTest;	// IMP=0x000000010003db4c
- (void)openURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003d9fc
- (_Bool)openURL:(id)arg1;	// IMP=0x000000010003d948
- (void)setDelegate:(id)arg1;	// IMP=0x000000010003d814
- (id)delegate;	// IMP=0x000000010003d7d8
- (void)dealloc;	// IMP=0x000000010003d78c
- (id)init;	// IMP=0x000000010003d734

@end

