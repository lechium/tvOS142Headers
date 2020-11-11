//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBTopShelfItem.h"

#import "HBUITopShelfParadeItem-Protocol.h"

@class HBTopShelfIndeterminiteLoadingAction, HBTopShelfRottenTomatoesRating, HBUITopShelfAsyncImage, NSArray, NSDate, NSHashTable, NSNumber, NSString, NSURL, UIImage, _TVContentRating;
@protocol HBUITopShelfParadeAction;

@interface HBTopShelfParadeItem : HBTopShelfItem <HBUITopShelfParadeItem>
{
    NSArray *_namedAttributes;	// 8 = 0x8
    id <HBUITopShelfParadeAction> _primaryAction;	// 16 = 0x10
    id <HBUITopShelfParadeAction> _secondaryAction;	// 24 = 0x18
    unsigned long long _contentOptions;	// 32 = 0x20
    _TVContentRating *_contentRating;	// 40 = 0x28
    HBTopShelfRottenTomatoesRating *_rottenTomatoesRating;	// 48 = 0x30
    NSHashTable *_observers;	// 56 = 0x38
    HBTopShelfIndeterminiteLoadingAction *_loadingAction;	// 64 = 0x40
    NSString *_applicationBundleIdentifier;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010000bb98
@property(readonly, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(retain, nonatomic) HBTopShelfIndeterminiteLoadingAction *loadingAction; // @synthesize loadingAction=_loadingAction;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) HBTopShelfRottenTomatoesRating *rottenTomatoesRating; // @synthesize rottenTomatoesRating=_rottenTomatoesRating;
@property(readonly, nonatomic) _TVContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(readonly, nonatomic) unsigned long long contentOptions; // @synthesize contentOptions=_contentOptions;
@property(readonly, nonatomic) NSArray *namedAttributes; // @synthesize namedAttributes=_namedAttributes;
- (id)_topShelfCarouselItem;	// IMP=0x000000010000bae0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000b770
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010000b32c
@property(readonly, nonatomic) UIImage *contextImage;
@property(readonly, nonatomic) HBUITopShelfAsyncImage *titleImage;
@property(readonly, nonatomic) NSString *termsAndConditionsText;
- (void)removeObserver:(id)arg1;	// IMP=0x000000010000b158
- (void)addObserver:(id)arg1;	// IMP=0x000000010000b0ec
@property(readonly, nonatomic) id <HBUITopShelfParadeAction> secondaryAction; // @synthesize secondaryAction=_secondaryAction;
@property(readonly, nonatomic) id <HBUITopShelfParadeAction> primaryAction; // @synthesize primaryAction=_primaryAction;
@property(readonly, nonatomic) NSNumber *commonSenseRecommendedAge;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSString *genre;
@property(readonly, nonatomic) NSString *summary;
@property(readonly, nonatomic) NSString *contextTitle;
@property(readonly, nonatomic) NSURL *previewVideoURL;
@property(readonly, nonatomic) NSURL *cinemagraphURL;
- (id)imageURLForTraitCollection:(id)arg1;	// IMP=0x000000010000addc
@property(readonly, nonatomic) NSString *photosAssetIdentifier;
- (void)_didPerformAction:(id)arg1 withSuccess:(_Bool)arg2;	// IMP=0x000000010000acb0
- (void)_willPerformAction:(id)arg1;	// IMP=0x000000010000abac
- (id)_assetCatalogImageNamed:(id)arg1;	// IMP=0x000000010000aa78
- (void)_setPrimaryAction:(id)arg1;	// IMP=0x000000010000a740
- (void)setPlayAction:(id)arg1;	// IMP=0x000000010000a680
- (void)setDisplayAction:(id)arg1;	// IMP=0x000000010000a4e8
- (id)initWithTopShelfCarouselItem:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000010000a45c
- (id)initWithTopShelfCarouselItem:(id)arg1 contentOptions:(unsigned long long)arg2 bundleIdentifier:(id)arg3;	// IMP=0x000000010000a27c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *title;

@end
