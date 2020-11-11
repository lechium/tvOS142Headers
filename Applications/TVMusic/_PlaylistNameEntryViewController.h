//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVTextEntryControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, TVTextEntryController;

@interface _PlaylistNameEntryViewController : UIViewController <TVTextEntryControllerDelegate, UIViewControllerTransitioningDelegate>
{
    TVTextEntryController *_textEntryVC;	// 8 = 0x8
    _Bool _hidePresentingView;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010001f888
@property(nonatomic) _Bool hidePresentingView; // @synthesize hidePresentingView=_hidePresentingView;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x000000010001f7d8
- (void)textEntryControllerDidFinish:(id)arg1;	// IMP=0x000000010001f7c8
- (void)_doneButtonAction:(id)arg1;	// IMP=0x000000010001f6f8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010001f654
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001f580
- (void)viewDidLoad;	// IMP=0x000000010001f220
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010001f170

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

