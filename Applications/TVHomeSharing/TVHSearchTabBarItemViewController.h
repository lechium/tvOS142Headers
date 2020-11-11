//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVHKMediaEntitiesSearchControllerDelegate-Protocol.h"
#import "TVHMediaLibraryTabBarItemViewController-Protocol.h"
#import "TVHSearchResultsViewControllerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class NSSet, NSString, TVHKMediaEntitiesSearchController, TVHKMediaEntitiesSearchRequest, TVHKMediaLibrary, TVHKStateMachine, TVHSearchResultsWrapperViewController, UIFocusGuide, UISearchBar, UISystemInputViewController;

@interface TVHSearchTabBarItemViewController : UIViewController <TVHKMediaEntitiesSearchControllerDelegate, TVHSearchResultsViewControllerDelegate, UISearchBarDelegate, TVHMediaLibraryTabBarItemViewController>
{
    _Bool _showingLinearKeyboard;	// 8 = 0x8
    _Bool _showingSpinner;	// 9 = 0x9
    TVHKMediaLibrary *_mediaLibrary;	// 16 = 0x10
    TVHKMediaEntitiesSearchController *_mediaEntitiesSearchController;	// 24 = 0x18
    TVHKMediaEntitiesSearchRequest *_currentMediaEntitiesSearchRequest;	// 32 = 0x20
    UISystemInputViewController *_inputViewController;	// 40 = 0x28
    UIFocusGuide *_gridKeyboardFocusGuide;	// 48 = 0x30
    UISearchBar *_searchBar;	// 56 = 0x38
    TVHSearchResultsWrapperViewController *_resultsWrapperViewController;	// 64 = 0x40
    TVHKStateMachine *_stateMachine;	// 72 = 0x48
}

+ (id)new;	// IMP=0x000000010001d138
- (void).cxx_destruct;	// IMP=0x0000000100020a78
@property(retain, nonatomic) TVHKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) TVHSearchResultsWrapperViewController *resultsWrapperViewController; // @synthesize resultsWrapperViewController=_resultsWrapperViewController;
@property(nonatomic) _Bool showingSpinner; // @synthesize showingSpinner=_showingSpinner;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool showingLinearKeyboard; // @synthesize showingLinearKeyboard=_showingLinearKeyboard;
@property(retain, nonatomic) UIFocusGuide *gridKeyboardFocusGuide; // @synthesize gridKeyboardFocusGuide=_gridKeyboardFocusGuide;
@property(retain, nonatomic) UISystemInputViewController *inputViewController; // @synthesize inputViewController=_inputViewController;
@property(retain, nonatomic) TVHKMediaEntitiesSearchRequest *currentMediaEntitiesSearchRequest; // @synthesize currentMediaEntitiesSearchRequest=_currentMediaEntitiesSearchRequest;
@property(retain, nonatomic) TVHKMediaEntitiesSearchController *mediaEntitiesSearchController; // @synthesize mediaEntitiesSearchController=_mediaEntitiesSearchController;
@property(readonly, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)_updateWithSearchControllerResult:(id)arg1 forSearchTerm:(id)arg2;	// IMP=0x0000000100020770
- (void)_handleSearchTextDidChange;	// IMP=0x000000010002043c
- (id)_sanitizedSearchText;	// IMP=0x0000000100020354
- (_Bool)_isSearchTextAtWordEnd;	// IMP=0x0000000100020258
- (id)_searchField;	// IMP=0x0000000100020180
- (id)_playbackViewControllerForMediaEntityCollection:(id)arg1;	// IMP=0x000000010002006c
- (id)_playbackViewControllerForMediaItem:(id)arg1;	// IMP=0x000000010001ff78
- (void)_startAnimatingGridKeyboardOffScreen;	// IMP=0x000000010001fd50
- (void)_startAnimatingGridKeyboardOnScreen;	// IMP=0x000000010001fb44
- (double)_keyboardInterfaceWidth;	// IMP=0x000000010001faac
- (void)_setViewBoundsOriginX:(double)arg1;	// IMP=0x000000010001fa4c
- (void)_layoutSubviewsForGridKeyboard;	// IMP=0x000000010001f750
- (void)_layoutSubviewsForLinearKeyboard;	// IMP=0x000000010001f474
- (void)_layoutSubviewsCommon;	// IMP=0x000000010001f38c
- (_Bool)_isKeyboardViewValid;	// IMP=0x000000010001f2f4
- (void)_registerStateMachineHandlers;	// IMP=0x000000010001e8c8
- (void)_configureStateMachine;	// IMP=0x000000010001e840
- (void)_doneButtonPressed:(id)arg1;	// IMP=0x000000010001e834
- (void)searchResultsViewController:(id)arg1 didPlayMediaEntity:(id)arg2;	// IMP=0x000000010001e758
- (void)searchResultsViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x000000010001e2f0
- (void)searchResultsViewController:(id)arg1 collectionViewDidScroll:(id)arg2;	// IMP=0x000000010001e2a8
- (void)controller:(id)arg1 searchRequest:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x000000010001e1ac
- (void)controller:(id)arg1 searchRequest:(id)arg2 didCompleteWithResult:(id)arg3;	// IMP=0x000000010001e030
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x000000010001dfac
- (id)tabBarObservedScrollView;	// IMP=0x000000010001df10
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x000000010001df08
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x000000010001df00
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010001dbe0
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000010001db58
- (void)viewDidLayoutSubviews;	// IMP=0x000000010001dae0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010001da6c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001d9f8
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x000000010001d7c8
- (void)viewDidLoad;	// IMP=0x000000010001d70c
- (void)loadView;	// IMP=0x000000010001d5a4
- (void)didLoseSelection;	// IMP=0x000000010001d564
- (void)didReceiveSelection;	// IMP=0x000000010001d524
@property(readonly, nonatomic) unsigned long long selectedMediaCategoryType;
@property(readonly, copy, nonatomic) NSSet *mediaCategoryTypes;
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x000000010001d284
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010001d1fc
- (id)init;	// IMP=0x000000010001d174

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
