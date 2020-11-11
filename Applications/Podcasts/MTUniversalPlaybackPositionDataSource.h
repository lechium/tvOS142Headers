//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MZUniversalPlaybackPositionDataSource-Protocol.h"

@class NSString;

@interface MTUniversalPlaybackPositionDataSource : NSObject <MZUniversalPlaybackPositionDataSource>
{
}

+ (double)uppLastSyncTime;	// IMP=0x000000010007ef44
+ (void)setUppLastSyncTime:(double)arg1;	// IMP=0x000000010007eeb0
+ (void)resetUppLastSyncTimeAndDomainVersion;	// IMP=0x000000010007ee14
+ (void)updateEpisode:(id)arg1 withUPPMetadata:(id)arg2;	// IMP=0x000000010007eccc
+ (id)mediaItemIdentifierForEpisode:(id)arg1;	// IMP=0x000000010007d7ec
- (void)commitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010007ded8
- (void)cancelUniversalPlaybackPositionTransaction:(id)arg1;	// IMP=0x000000010007ded4
- (id)beginTransactionWithItemsToSyncEnumerationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010007d908
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x000000010007d86c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
