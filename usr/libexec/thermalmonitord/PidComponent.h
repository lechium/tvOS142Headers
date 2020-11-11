//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PidComponent : NSObject
{
    _Bool allowCEOverride;	// 8 = 0x8
    float kp;	// 12 = 0xc
    float ki;	// 16 = 0x10
    float ts;	// 20 = 0x14
    float integrator;	// 24 = 0x18
    float integratorMin;	// 28 = 0x1c
    float integratorMax;	// 32 = 0x20
    float TARGET;	// 36 = 0x24
    float engageDelta;	// 40 = 0x28
    int mitigationType;	// 44 = 0x2c
    struct __CFString *nameofComponent;	// 48 = 0x30
    int boundCheckLow;	// 56 = 0x38
    int boundCheckHigh;	// 60 = 0x3c
    int controlEffort;	// 64 = 0x40
}

@property(nonatomic) float TARGET; // @synthesize TARGET;
@property(readonly, nonatomic) float integrator; // @synthesize integrator;
@property(readonly, nonatomic) struct __CFString *nameofComponent; // @synthesize nameofComponent;
@property(readonly, nonatomic) int mitigationType; // @synthesize mitigationType;
@property(nonatomic) int controlEffort; // @synthesize controlEffort;
@property(nonatomic) _Bool allowCEOverride; // @synthesize allowCEOverride;
- (void)applySeedToIntegratorFromControlEffort:(int)arg1 currentTemperature:(float)arg2;	// IMP=0x0000000100009bec
- (_Bool)isIntegratorAtMin;	// IMP=0x0000000100009bdc
- (_Bool)isEqualMType:(int)arg1;	// IMP=0x0000000100009bcc
- (void)calculateControlEffort:(float)arg1;	// IMP=0x0000000100009b4c
- (void)dealloc;	// IMP=0x0000000100009b00
- (id)initPIDWith:(struct __CFDictionary *)arg1;	// IMP=0x00000001000099ec

@end

