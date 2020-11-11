//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"

@class NSString, SATVLanguageViewController;
@protocol TVSKStepDelegate;

@interface SATVLanguageStep : NSObject <TVSKStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
    SATVLanguageViewController *_languageViewController;	// 16 = 0x10
}

+ (id)stableIdentifier;	// IMP=0x000000010006b10c
+ (void)initialize;	// IMP=0x000000010006b0a8
- (void).cxx_destruct;	// IMP=0x000000010006b9d4
@property(retain, nonatomic) SATVLanguageViewController *languageViewController; // @synthesize languageViewController=_languageViewController;
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_handleLanguageSelection:(id)arg1;	// IMP=0x000000010006b850
- (void)_showLanguageViewController;	// IMP=0x000000010006b6e0
- (void)_resetLanguageIfRequiredForContext:(id)arg1;	// IMP=0x000000010006b634
- (_Bool)_didLockdownSetLanguage;	// IMP=0x000000010006b5c8
- (void)autoAdvance;	// IMP=0x000000010006b534
- (id)executeStepForContext:(id)arg1;	// IMP=0x000000010006b118

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

