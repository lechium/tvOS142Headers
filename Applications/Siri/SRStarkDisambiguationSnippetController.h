//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SRStarkTableViewController.h"

#import "SRStarkItemController-Protocol.h"
#import "SRStarkTableViewControllerDelegate-Protocol.h"

@class AFAnalyticsTurnBasedInstrumentationContext, NSMutableDictionary, NSString, SAUIListItem;
@protocol SRStarkDisambiguationSnippetControllerDataSource, SRStarkDisambiguationSnippetControllerDelegate;

@interface SRStarkDisambiguationSnippetController : SRStarkTableViewController <SRStarkTableViewControllerDelegate, SRStarkItemController>
{
    unsigned long long _preferredListItemIndex;	// 8 = 0x8
    SAUIListItem *_preferredListItem;	// 16 = 0x10
    _Bool _isGroup;	// 24 = 0x18
    NSMutableDictionary *_groupNameMapping;	// 32 = 0x20
    id <SRStarkDisambiguationSnippetControllerDelegate> _delegate;	// 40 = 0x28
    id <SRStarkDisambiguationSnippetControllerDataSource> _dataSource;	// 48 = 0x30
    NSString *_disambiguationKey;	// 56 = 0x38
    AFAnalyticsTurnBasedInstrumentationContext *_turnContext;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010002f914
@property(retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *turnContext; // @synthesize turnContext=_turnContext;
@property(copy, nonatomic, getter=_disambiguationKey) NSString *disambiguationKey; // @synthesize disambiguationKey=_disambiguationKey;
@property(nonatomic) __weak id <SRStarkDisambiguationSnippetControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SRStarkDisambiguationSnippetControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_toggleFullScreen:(_Bool)arg1;	// IMP=0x000000010002f800
- (id)_disambiguationAttributedString:(id)arg1 boldedRange:(struct _NSRange)arg2;	// IMP=0x000000010002f67c
- (_Bool)isRightHandDrive;	// IMP=0x000000010002f628
- (void)didPressShowMore;	// IMP=0x000000010002f484
- (void)didPressItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000010002f27c
- (id)newShowMoreCellWithIdentifier:(id)arg1;	// IMP=0x000000010002f224
- (Class)showMoreCellClass;	// IMP=0x000000010002f218
- (void)configureCell:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000010002ee98
- (id)newCellWithIdentifier:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000010002ee44
- (id)cellIdentifierForItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000010002ee38
- (id)tableCellIdentifiersAndClasses;	// IMP=0x000000010002edb0
- (void)siriRequestWillStart;	// IMP=0x000000010002ed68
- (unsigned long long)autoDismissalReason;	// IMP=0x000000010002ed60
- (long long)autoDismissalStrategy;	// IMP=0x000000010002ed58
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000010002ed10
- (void)autodisambiguate;	// IMP=0x000000010002ece4
- (_Bool)shouldAutodisambiguate;	// IMP=0x000000010002eccc
- (id)initWithAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x000000010002e61c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldProceedToNextCommandAtSpeechSynthesisEnd;
@property(readonly) Class superclass;

@end

