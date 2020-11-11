//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_PBImageProcessingOperation.h"

@class NSObject, XBApplicationSnapshot, XBApplicationSnapshotManifest;
@protocol XBSnapshotDataProvider;

@interface _PBSnapshotSaveOperation : _PBImageProcessingOperation
{
    XBApplicationSnapshotManifest *_snapshotManifest;	// 24 = 0x18
    XBApplicationSnapshot *_snapshot;	// 32 = 0x20
    NSObject<XBSnapshotDataProvider> *_provider;	// 40 = 0x28
    CDUnknownBlockType _generationCompletion;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000e4b18
@property(copy, nonatomic) CDUnknownBlockType generationCompletion; // @synthesize generationCompletion=_generationCompletion;
@property(readonly, nonatomic) NSObject<XBSnapshotDataProvider> *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) XBApplicationSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(readonly, nonatomic) XBApplicationSnapshotManifest *snapshotManifest; // @synthesize snapshotManifest=_snapshotManifest;
- (void)cancel;	// IMP=0x00000001000e4878
- (void)main;	// IMP=0x00000001000e3d5c
- (id)initWithSnapshot:(id)arg1 dataProvider:(id)arg2 manifest:(id)arg3;	// IMP=0x00000001000e3b68

@end

