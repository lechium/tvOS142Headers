//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBSystemActivationManager : NSObject
{
    long long _activationState;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010015ceac
@property long long activationState; // @synthesize activationState=_activationState;
- (void)_updateActivationState;	// IMP=0x000000010015d108
- (id)init;	// IMP=0x000000010015cfac

@end

