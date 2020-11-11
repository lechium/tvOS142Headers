//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TVMusicAgeGateInfo;

@interface TVMusicAgeGateController : NSObject
{
    TVMusicAgeGateInfo *_ageGateInfo;	// 8 = 0x8
}

+ (id)customAgeGateControllerWithRatingThreshold:(long long)arg1 dialogTitle:(id)arg2 dialogMessage:(id)arg3;	// IMP=0x00000001000554ac
+ (id)standardAgeGateController;	// IMP=0x0000000100055448
- (void).cxx_destruct;	// IMP=0x00000001000569d0
@property(retain, nonatomic) TVMusicAgeGateInfo *ageGateInfo; // @synthesize ageGateInfo=_ageGateInfo;
- (void)_updateSavedIdentifiers:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000100056734
- (void)_showAgeGateDialogForLibraryItem:(id)arg1 showUnconditionally:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100056014
- (void)_showAgeGateDialogWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100055ba4
- (void)showAgeGateDialogForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100055848
- (void)showAgeGateDialogIfNeededForRatingLevel:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100055620
- (void)showAgeGateDialogIfNeededForLibraryItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000555cc
- (id)initWithAgeGateInfo:(id)arg1;	// IMP=0x0000000100055554

@end
