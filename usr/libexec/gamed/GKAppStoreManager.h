//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKAppStoreManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x00000001000b17c8
- (void)loadTellAFriendMessageForGameWithAdamID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b24b4
- (void)lookupStoreItemsForAdamIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b1c04
- (id)gameCenterBag;	// IMP=0x00000001000b1b70
- (_Bool)accountIsLoggedIntoAStore;	// IMP=0x00000001000b1b0c
- (void)updateStoreFront;	// IMP=0x00000001000b18b4
- (void)startup;	// IMP=0x00000001000b1834

@end

