//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKFirstBootDetector;

@interface BKBootUIOverlayVendor : NSObject
{
    BKFirstBootDetector *_firstBootDetector;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100058274
- (void).cxx_destruct;	// IMP=0x0000000100058268
- (id)currentOverlayWithLevel:(float)arg1;	// IMP=0x00000001000580d8
- (id)initWithFirstBootDetector:(id)arg1;	// IMP=0x0000000100058060

@end

