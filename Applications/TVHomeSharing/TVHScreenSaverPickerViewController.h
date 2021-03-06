//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVHKMediaCategoryTypesFetchControllerDelegate-Protocol.h"

@class NSString, TVHKMediaCategoryTypesFetchController, TVHKMediaLibrary, TVHScreenSaverPickerListViewController;

@interface TVHScreenSaverPickerViewController : UIViewController <TVHKMediaCategoryTypesFetchControllerDelegate>
{
    TVHKMediaLibrary *_mediaLibrary;	// 8 = 0x8
    TVHKMediaCategoryTypesFetchController *_fetchController;	// 16 = 0x10
    TVHScreenSaverPickerListViewController *_listViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100059440
@property(retain, nonatomic) TVHScreenSaverPickerListViewController *listViewController; // @synthesize listViewController=_listViewController;
@property(readonly, nonatomic) TVHKMediaCategoryTypesFetchController *fetchController; // @synthesize fetchController=_fetchController;
@property(readonly, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)_showNoContentViewController;	// IMP=0x0000000100059334
- (void)controller:(id)arg1 fetchDidFailWithError:(id)arg2;	// IMP=0x0000000100059328
- (void)controller:(id)arg1 fetchDidCompleteWithResult:(id)arg2;	// IMP=0x00000001000591f4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000590e8
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x0000000100058f44
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100058ebc
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100058e34
- (id)init;	// IMP=0x0000000100058dac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

