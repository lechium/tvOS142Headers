//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaEntitiesListViewController.h"

#import "TVHMediaEntitiesListViewControllerDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface TVHImageDeckListViewController : TVHMediaEntitiesListViewController <TVHMediaEntitiesListViewControllerDelegate>
{
    NSMutableDictionary *_imageDeckViewControllerMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010005d464
@property(retain, nonatomic) NSMutableDictionary *imageDeckViewControllerMap; // @synthesize imageDeckViewControllerMap=_imageDeckViewControllerMap;
- (id)_imageDeckViewControllerForPreviewFetchIdentifier:(id)arg1;	// IMP=0x000000010005d36c
- (void)mediaEntitiesListViewController:(id)arg1 updatePreviewViewController:(id)arg2 latestMediaEntitiesFetchResult:(id)arg3 previousMediaEntitiesFetchResult:(id)arg4 changeSet:(id)arg5 context:(id)arg6;	// IMP=0x000000010005d238
- (id)mediaEntitiesListViewController:(id)arg1 previewViewControllerForIndexPath:(id)arg2;	// IMP=0x000000010005d18c
- (id)mediaEntitiesListViewController:(id)arg1 previewFetchDescriptorForIdentifier:(id)arg2;	// IMP=0x000000010005d184
- (id)mediaEntitiesListViewController:(id)arg1 previewFetchIdentifierForIndexPath:(id)arg2;	// IMP=0x000000010005d17c
- (id)initWithMediaLibrary:(id)arg1 listViewLayout:(id)arg2;	// IMP=0x000000010005d100
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x000000010005cf60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

