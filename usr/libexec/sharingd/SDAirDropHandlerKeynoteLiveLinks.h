//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAirDropHandlerGenericLinks.h"

@class SDAirDropHandlerWebLinks;

__attribute__((visibility("hidden")))
@interface SDAirDropHandlerKeynoteLiveLinks : SDAirDropHandlerGenericLinks
{
    SDAirDropHandlerWebLinks *_webLinksHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010003fdb0
- (void)updatePossibleActions;	// IMP=0x000000010003fd04
- (id)suitableContentsDescription;	// IMP=0x000000010003fc44
- (long long)transferTypes;	// IMP=0x000000010003fc0c
- (_Bool)canHandleTransfer;	// IMP=0x000000010003fbec
- (id)initWithTransfer:(id)arg1;	// IMP=0x000000010003fbb8

@end

