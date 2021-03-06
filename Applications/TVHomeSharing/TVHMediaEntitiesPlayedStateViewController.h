//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHStackViewController.h"

#import "TVHMediaEntitiesShelfViewControllerDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, TVHCollectionViewDiffableDataSource, TVHKMediaLibrary, TVHMediaEntitiesPlayedStateDataSource;
@protocol TVHMediaEntitiesPlayedStateViewControllerDelegate;

@interface TVHMediaEntitiesPlayedStateViewController : TVHStackViewController <TVHMediaEntitiesShelfViewControllerDelegate, UICollectionViewDelegateFlowLayout>
{
    CDStruct_78dcb04e _delegateFlags;	// 8 = 0x8
    id <TVHMediaEntitiesPlayedStateViewControllerDelegate> _delegate;	// 16 = 0x10
    TVHKMediaLibrary *_mediaLibrary;	// 24 = 0x18
    TVHMediaEntitiesPlayedStateDataSource *_playedStateDataSource;	// 32 = 0x20
    TVHCollectionViewDiffableDataSource *_diffableDataSource;	// 40 = 0x28
}

+ (id)new;	// IMP=0x00000001000ab97c
- (void).cxx_destruct;	// IMP=0x00000001000ac900
@property(retain, nonatomic) TVHCollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(readonly, nonatomic) TVHMediaEntitiesPlayedStateDataSource *playedStateDataSource; // @synthesize playedStateDataSource=_playedStateDataSource;
@property(readonly, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(nonatomic) __weak id <TVHMediaEntitiesPlayedStateViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_configureCell:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000001000ac77c
- (void)_delegateDidPlayMediaEntity:(id)arg1;	// IMP=0x00000001000ac6ec
- (void)_delegateDidLongPressMediaEntity:(id)arg1;	// IMP=0x00000001000ac65c
- (void)_delegateDidSelectMediaEntity:(id)arg1;	// IMP=0x00000001000ac5cc
- (void)mediaEntitiesShelfViewController:(id)arg1 didPlayMediaEntity:(id)arg2;	// IMP=0x00000001000ac5bc
- (void)mediaEntitiesShelfViewController:(id)arg1 didLongPressMediaEntity:(id)arg2;	// IMP=0x00000001000ac5ac
- (void)mediaEntitiesShelfViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x00000001000ac59c
- (void)mediaEntitiesShelfViewController:(id)arg1 configureLockup:(id)arg2 forMediaEntity:(id)arg3;	// IMP=0x00000001000ac4e8
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001000ac404
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001000ac31c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000ac1e8
- (void)viewDidLoad;	// IMP=0x00000001000abf54
- (id)initWithMediaLibrary:(id)arg1 unplayedDataSource:(id)arg2 partiallyPlayedDataSource:(id)arg3 lockupLayoutByMediaEntityType:(id)arg4;	// IMP=0x00000001000abb50
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000abac8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000aba40
- (id)init;	// IMP=0x00000001000ab9b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

