//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LRUStringCache, NSDate;

__attribute__((visibility("hidden")))
@interface MitmDetectorRootUsage : NSObject
{
    _Bool _userTrustStore;	// 8 = 0x8
    _Bool _pinningMitmDetected;	// 9 = 0x9
    _Bool _priorMitmRoot;	// 10 = 0xa
    LRUStringCache *_hostnames;	// 16 = 0x10
    LRUStringCache *_gTLDPlusOne;	// 24 = 0x18
    long long _score;	// 32 = 0x20
    NSDate *_lastUse;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100043be4
@property(retain) NSDate *lastUse; // @synthesize lastUse=_lastUse;
@property long long score; // @synthesize score=_score;
@property _Bool priorMitmRoot; // @synthesize priorMitmRoot=_priorMitmRoot;
@property _Bool pinningMitmDetected; // @synthesize pinningMitmDetected=_pinningMitmDetected;
@property _Bool userTrustStore; // @synthesize userTrustStore=_userTrustStore;
@property(retain) LRUStringCache *gTLDPlusOne; // @synthesize gTLDPlusOne=_gTLDPlusOne;
@property(retain) LRUStringCache *hostnames; // @synthesize hostnames=_hostnames;
- (void)addHostname:(id)arg1;	// IMP=0x00000001000438d8
- (id)init;	// IMP=0x0000000100043814

@end

