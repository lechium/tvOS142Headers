//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVHDeletableContentViewController-Protocol.h"
#import "TVHMediaEntitiesGridViewControllerDelegate-Protocol.h"
#import "TVHMoviesInfoCenterObserver-Protocol.h"

@class NSString, TVHKMediaEntitiesFetchContext, TVHMediaEntitiesGridDataSource, TVHMediaEntitiesGridViewController, TVHMoviesInfoCenter;

@interface TVHMoviesByContributorViewController : UIViewController <TVHMediaEntitiesGridViewControllerDelegate, TVHMoviesInfoCenterObserver, TVHDeletableContentViewController>
{
    _Bool _contentHasBeenDeleted;	// 8 = 0x8
    NSString *_contributor;	// 16 = 0x10
    TVHKMediaEntitiesFetchContext *_moviesFetchContext;	// 24 = 0x18
    TVHMoviesInfoCenter *_moviesInfoCenter;	// 32 = 0x20
    TVHMediaEntitiesGridViewController *_gridViewController;	// 40 = 0x28
    TVHMediaEntitiesGridDataSource *_gridDataSource;	// 48 = 0x30
}

+ (id)new;	// IMP=0x0000000100030658
- (void).cxx_destruct;	// IMP=0x00000001000312cc
@property(retain, nonatomic) TVHMediaEntitiesGridDataSource *gridDataSource; // @synthesize gridDataSource=_gridDataSource;
@property(retain, nonatomic) TVHMediaEntitiesGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
@property(readonly, nonatomic) TVHMoviesInfoCenter *moviesInfoCenter; // @synthesize moviesInfoCenter=_moviesInfoCenter;
@property(readonly, nonatomic) TVHKMediaEntitiesFetchContext *moviesFetchContext; // @synthesize moviesFetchContext=_moviesFetchContext;
@property(readonly, copy, nonatomic) NSString *contributor; // @synthesize contributor=_contributor;
@property(nonatomic) _Bool contentHasBeenDeleted; // @synthesize contentHasBeenDeleted=_contentHasBeenDeleted;
- (struct CGSize)_imageSize;	// IMP=0x0000000100031198
- (void)moviesInfoCenterDidChange:(id)arg1;	// IMP=0x0000000100030f34
- (void)mediaEntitiesGridViewController:(id)arg1 didPlayMediaEntity:(id)arg2;	// IMP=0x0000000100030e44
- (void)mediaEntitiesGridViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x0000000100030d2c
- (void)mediaEntitiesGridViewController:(id)arg1 configureLockup:(id)arg2 forMediaEntity:(id)arg3;	// IMP=0x0000000100030c58
- (void)dealloc;	// IMP=0x0000000100030bfc
- (id)initWithContributor:(id)arg1 moviesFetchContext:(id)arg2 moviesInfoCenter:(id)arg3;	// IMP=0x000000010003082c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000307a4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010003071c
- (id)init;	// IMP=0x0000000100030694

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

