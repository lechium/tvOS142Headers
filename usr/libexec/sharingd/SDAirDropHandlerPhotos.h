//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAirDropHandler.h"

__attribute__((visibility("hidden")))
@interface SDAirDropHandlerPhotos : SDAirDropHandler
{
    _Bool _hasPhotos;	// 8 = 0x8
    _Bool _hasVideos;	// 9 = 0x9
    _Bool _shouldExtractMediaFromPhotosBundles;	// 10 = 0xa
}

@property(readonly, nonatomic) _Bool shouldExtractMediaFromPhotosBundles; // @synthesize shouldExtractMediaFromPhotosBundles=_shouldExtractMediaFromPhotosBundles;
- (id)createDestination;	// IMP=0x00000001001c1c40
- (void)updatePossibleActions;	// IMP=0x00000001001c1c0c
- (id)suitableContentsDescription;	// IMP=0x00000001001c17e8
- (long long)transferTypes;	// IMP=0x00000001001c17b0
- (_Bool)canHandleTransfer;	// IMP=0x00000001001c1790
- (id)initWithTransfer:(id)arg1;	// IMP=0x00000001001c1754

@end

