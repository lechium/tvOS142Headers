//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DMDPowerAssertion : NSObject
{
    _Bool _isParked;	// 8 = 0x8
    NSString *_operation;	// 16 = 0x10
}

+ (id)assertionForOperation:(id)arg1;	// IMP=0x000000010005d7f0
- (void).cxx_destruct;	// IMP=0x000000010005deac
@property(retain, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property(nonatomic) _Bool isParked; // @synthesize isParked=_isParked;
- (void)_release;	// IMP=0x000000010005dd74
- (void)_retain;	// IMP=0x000000010005dc30
- (void)unpark;	// IMP=0x000000010005db30
- (void)park;	// IMP=0x000000010005da30
- (void)stayAliveThroughHereAtLeast;	// IMP=0x000000010005da2c
- (void)dealloc;	// IMP=0x000000010005d984
- (id)initForOperation:(id)arg1;	// IMP=0x000000010005d898

@end
