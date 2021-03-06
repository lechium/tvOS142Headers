//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HeuristicMitmDetector : NSObject
{
    NSArray *__priorMitmRoots;	// 8 = 0x8
    NSMutableDictionary *__rootHostnameMap;	// 16 = 0x10
    NSDate *_lastReset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010004366c
@property(retain) NSDate *lastReset; // @synthesize lastReset=_lastReset;
@property(retain) NSMutableDictionary *_rootHostnameMap; // @synthesize _rootHostnameMap=__rootHostnameMap;
@property(retain) NSArray *_priorMitmRoots; // @synthesize _priorMitmRoots=__priorMitmRoots;
- (void)reset;	// IMP=0x00000001000435bc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010004338c
- (_Bool)addHostname:(id)arg1 forRoot:(struct __SecCertificate *)arg2;	// IMP=0x0000000100043278
- (void)addPinningFailureForRoot:(struct __SecCertificate *)arg1;	// IMP=0x0000000100043234
- (id)rootUsageForRoot:(struct __SecCertificate *)arg1;	// IMP=0x000000010004314c
- (_Bool)isMitmOperatingWithReporting:(_Bool)arg1;	// IMP=0x0000000100042bf8
- (void)reportMitmScores:(long long)arg1;	// IMP=0x00000001000426c0
- (void)purgeUnusedRoots;	// IMP=0x0000000100042464
- (id)priorMitmRoots;	// IMP=0x00000001000423ac
- (void)setPriorMitmRoots:(id)arg1;	// IMP=0x00000001000421ac
- (void)addRootUsage:(id)arg1 forRoot:(id)arg2;	// IMP=0x00000001000420d8
- (void)removeRoot:(id)arg1;	// IMP=0x0000000100042028
- (void)removeAllRoots;	// IMP=0x0000000100041f94
- (id)rootHostnameMap;	// IMP=0x0000000100041edc
- (id)init;	// IMP=0x0000000100041ce0
- (id)priorMitmRootsFileUrl;	// IMP=0x0000000100041ca8

@end

