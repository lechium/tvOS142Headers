//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PodcastsFoundation/IMURLBag.h>

@class NSDictionary, NSOperationQueue;

@interface MTStoreBag : IMURLBag
{
    NSDictionary *_defaultValues;	// 8 = 0x8
    _Bool _singleKeyLoadedFromBag;	// 16 = 0x10
    long long _downloadLimitPodcast;	// 24 = 0x18
    long long _downloadLimitVideoPodcast;	// 32 = 0x20
    IMURLBag *_bag;	// 40 = 0x28
    NSOperationQueue *_queue;	// 48 = 0x30
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100094894
+ (id)sharedInstance;	// IMP=0x00000001000947c4
- (void).cxx_destruct;	// IMP=0x0000000100095f9c
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IMURLBag *bag; // @synthesize bag=_bag;
@property(nonatomic) _Bool singleKeyLoadedFromBag; // @synthesize singleKeyLoadedFromBag=_singleKeyLoadedFromBag;
@property(nonatomic) long long downloadLimitVideoPodcast; // @synthesize downloadLimitVideoPodcast=_downloadLimitVideoPodcast;
@property(nonatomic) long long downloadLimitPodcast; // @synthesize downloadLimitPodcast=_downloadLimitPodcast;
- (id)_amsBagValueForKey:(id)arg1 withType:(unsigned long long)arg2;	// IMP=0x0000000100095d14
- (id)amsBagValueForKey:(id)arg1;	// IMP=0x00000001000959d8
- (void)_reportBagLoadError:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000958fc
- (unsigned long long)explicitContentBadgeTreatment;	// IMP=0x00000001000958a0
- (void)bagValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100095694
- (id)bagValueForKey:(id)arg1;	// IMP=0x0000000100095308
- (id)keys;	// IMP=0x0000000100095194
- (_Bool)bagHasLoaded;	// IMP=0x0000000100095050
- (id)init;	// IMP=0x00000001000948dc
- (id)copy;	// IMP=0x00000001000948b4

@end

