//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString;

@interface PBBackgroundFetchTask : NSObject
{
    _Bool _finished;	// 8 = 0x8
    unsigned int _sequenceNumber;	// 12 = 0xc
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    BKSProcessAssertion *_assertion;	// 32 = 0x20
}

+ (id)makeUIFetchContentInBackgroundActionFromBundleID:(id)arg1;	// IMP=0x00000001001129b4
- (void).cxx_destruct;	// IMP=0x0000000100113924
@property(retain, nonatomic) BKSProcessAssertion *assertion; // @synthesize assertion=_assertion;
@property(readonly, nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)finishWithResult:(unsigned long long)arg1;	// IMP=0x0000000100113578
- (id)initForApplication:(id)arg1 sequenceNumber:(unsigned int)arg2;	// IMP=0x0000000100112efc

@end

