//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKIOHIDService, NSSet;
@protocol BKHIDEventDispatcher;

@interface BKTouchPadInfo : NSObject
{
    unsigned int _pathIndexInRangeMask;	// 8 = 0x8
    unsigned int _pathIndexTouchingMask;	// 12 = 0xc
    float _maxForce;	// 16 = 0x10
    BKIOHIDService *_service;	// 24 = 0x18
    id <BKHIDEventDispatcher> _eventDispatcher;	// 32 = 0x20
    NSSet *_currentDestinations;	// 40 = 0x28
    struct CGSize _digitizerSurfaceDimensions;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010000b1fc
@property(nonatomic) struct CGSize digitizerSurfaceDimensions; // @synthesize digitizerSurfaceDimensions=_digitizerSurfaceDimensions;
@property(nonatomic) float maxForce; // @synthesize maxForce=_maxForce;
@property(nonatomic) unsigned int pathIndexTouchingMask; // @synthesize pathIndexTouchingMask=_pathIndexTouchingMask;
@property(nonatomic) unsigned int pathIndexInRangeMask; // @synthesize pathIndexInRangeMask=_pathIndexInRangeMask;
@property(retain, nonatomic) NSSet *currentDestinations; // @synthesize currentDestinations=_currentDestinations;
@property(retain, nonatomic) id <BKHIDEventDispatcher> eventDispatcher; // @synthesize eventDispatcher=_eventDispatcher;
@property(retain, nonatomic) BKIOHIDService *service; // @synthesize service=_service;
- (void)resetForCancel;	// IMP=0x000000010000b144
- (id)description;	// IMP=0x000000010000afc8
- (id)initWithService:(id)arg1;	// IMP=0x000000010000adbc

@end

