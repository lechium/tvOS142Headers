//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PBSystemOverlayPresentationRequest.h"

@class NSDictionary, NSString;
@protocol PBSystemOverlayUIProvider;

@interface PBMutableSystemOverlayPresentationRequest : PBSystemOverlayPresentationRequest
{
}

- (void)_setInsertAtFrontOfQueue:(_Bool)arg1;	// IMP=0x0000000100107ee8
@property(nonatomic) unsigned long long sceneDeactivationReasons; // @dynamic sceneDeactivationReasons;
@property(copy, nonatomic) NSDictionary *clientOptions; // @dynamic clientOptions;
@property(retain, nonatomic) id <PBSystemOverlayUIProvider> provider; // @dynamic provider;
@property(nonatomic, getter=isAnimated) _Bool animated; // @dynamic animated;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100107cb8
- (id)init;	// IMP=0x0000000100107c2c

@end

