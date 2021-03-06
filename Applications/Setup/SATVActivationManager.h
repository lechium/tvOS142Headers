//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SATVActivatorDelegate-Protocol.h"

@class NSMutableArray, NSString, SATVActivator;

@interface SATVActivationManager : NSObject <SATVActivatorDelegate>
{
    NSMutableArray *_requests;	// 8 = 0x8
    SATVActivator *_activator;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010003a9e0
+ (id)new;	// IMP=0x000000010003a954
- (void).cxx_destruct;	// IMP=0x000000010003b42c
@property(retain, nonatomic) SATVActivator *activator; // @synthesize activator=_activator;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
- (void)_completeActivationRequestWithSuccessType:(unsigned long long)arg1 failureReason:(long long)arg2 error:(id)arg3;	// IMP=0x000000010003b1e0
- (void)_startActivationRequestIfPossible;	// IMP=0x000000010003af90
- (void)_requestActivationWithNavigationController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003ae28
- (void)activator:(id)arg1 didFailWithError:(id)arg2 reason:(long long)arg3;	// IMP=0x000000010003ad74
- (void)activator:(id)arg1 didSucceedWithType:(unsigned long long)arg2;	// IMP=0x000000010003ac84
- (void)requestSilentActivationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003abe0
- (void)requestActivationWithNavigationController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003aae4
@property(readonly, nonatomic, getter=isDeviceFactoryActivated) _Bool deviceFactoryActivated;
@property(readonly, nonatomic, getter=isDeviceActivated) _Bool deviceActivated;
- (id)_init;	// IMP=0x000000010003aa58
- (id)init;	// IMP=0x000000010003a990

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

