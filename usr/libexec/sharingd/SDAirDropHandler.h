//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSBundleProxy, NSString, SFAirDropTransfer;

__attribute__((visibility("hidden")))
@interface SDAirDropHandler : NSObject
{
    _Bool _hasFiles;	// 8 = 0x8
    _Bool _hasLinks;	// 9 = 0x9
    _Bool _isActivated;	// 10 = 0xa
    _Bool _handlingAppInstalled;	// 11 = 0xb
    SFAirDropTransfer *_transfer;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    LSBundleProxy *_bundleProxy;	// 32 = 0x20
    NSString *_handlingAppBundleID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010003604c
@property(retain, nonatomic) NSString *handlingAppBundleID; // @synthesize handlingAppBundleID=_handlingAppBundleID;
@property(nonatomic) _Bool handlingAppInstalled; // @synthesize handlingAppInstalled=_handlingAppInstalled;
@property(retain, nonatomic) LSBundleProxy *bundleProxy; // @synthesize bundleProxy=_bundleProxy;
@property(nonatomic) _Bool isActivated; // @synthesize isActivated=_isActivated;
@property(readonly, nonatomic) _Bool hasLinks; // @synthesize hasLinks=_hasLinks;
@property(readonly, nonatomic) _Bool hasFiles; // @synthesize hasFiles=_hasFiles;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) SFAirDropTransfer *transfer; // @synthesize transfer=_transfer;
- (_Bool)openURLs:(id)arg1;	// IMP=0x0000000100035fbc
- (_Bool)openURLs:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0000000100035a54
- (void)removeItemAtURLToFreeUpSpace:(id)arg1;	// IMP=0x0000000100035988
- (void)logReceiverBundleID:(id)arg1 forAppProxy:(id)arg2 andURL:(id)arg3;	// IMP=0x00000001000357a0
@property(readonly, copy, nonatomic) NSString *senderName;
- (id)bundleProxyFromCandidateIdentifiers:(id)arg1 handlesURL:(id)arg2;	// IMP=0x0000000100035314
- (id)alertMessageLocalizedKeyForTypeDicts:(id)arg1;	// IMP=0x0000000100034f40
@property(readonly, nonatomic) unsigned long long totalSharedItemsCount;
@property(readonly, nonatomic) _Bool isJustLinks;
@property(readonly, nonatomic) _Bool isJustFiles;
- (id)applicationProxyForBundleProxy:(id)arg1;	// IMP=0x0000000100034d1c
- (id)defaultActionForBundleProxy:(id)arg1;	// IMP=0x0000000100034b90
- (void)prepareForAccept;	// IMP=0x0000000100034b8c
- (void)prepareOrPerformOpenAction;	// IMP=0x00000001000348a8
- (void)updatePossibleActions;	// IMP=0x0000000100034714
- (id)cancelActionTitleToAccompanyActions:(id)arg1;	// IMP=0x0000000100034674
@property(readonly, copy, nonatomic) NSString *singleItemActionTitle;
@property(readonly, nonatomic) NSString *suitableContentsDescription;
@property(readonly, nonatomic) NSString *suitableContentsTitle;
- (long long)transferTypes;	// IMP=0x0000000100034630
@property(readonly, nonatomic) _Bool canHandleTransfer;
- (void)lockStatusChanged:(id)arg1;	// IMP=0x000000010003461c
- (void)removeStatusMonitorObservers;	// IMP=0x00000001000345cc
- (void)addStatusMonitorObservers;	// IMP=0x0000000100034564
- (void)triggerSelectedActionIfAppropriate;	// IMP=0x0000000100034198
- (void)actionSelected:(id)arg1;	// IMP=0x0000000100033da8
- (void)transferUpdated;	// IMP=0x0000000100033b5c
- (id)description;	// IMP=0x0000000100033a34
- (void)activate;	// IMP=0x000000010003398c
- (void)dealloc;	// IMP=0x000000010003392c
- (id)initWithTransfer:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00000001000336a4
- (id)initWithTransfer:(id)arg1;	// IMP=0x0000000100033694
- (id)init;	// IMP=0x00000001000335e0

@end

