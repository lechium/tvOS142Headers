//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OctagonFollowUpControllerProtocol;

__attribute__((visibility("hidden")))
@interface OTFollowup : NSObject
{
    id <OctagonFollowUpControllerProtocol> _cdpd;	// 8 = 0x8
    double _previousFollowupEnd;	// 16 = 0x10
    double _followupStart;	// 24 = 0x18
    double _followupEnd;	// 32 = 0x20
    NSMutableSet *_postedCFUTypes;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010013c05c
@property(retain) NSMutableSet *postedCFUTypes; // @synthesize postedCFUTypes=_postedCFUTypes;
@property double followupEnd; // @synthesize followupEnd=_followupEnd;
@property double followupStart; // @synthesize followupStart=_followupStart;
@property double previousFollowupEnd; // @synthesize previousFollowupEnd=_previousFollowupEnd;
@property(retain) id <OctagonFollowUpControllerProtocol> cdpd; // @synthesize cdpd=_cdpd;
- (id)sfaStatus;	// IMP=0x000000010013bcac
- (id)sysdiagnoseStatus;	// IMP=0x000000010013b9d0
- (_Bool)clearFollowUp:(unsigned char)arg1 error:(id *)arg2;	// IMP=0x000000010013b7e8
- (_Bool)postFollowUp:(unsigned char)arg1 error:(id *)arg2;	// IMP=0x000000010013b5d0
- (id)createCDPFollowupContext:(unsigned char)arg1;	// IMP=0x000000010013b584
- (id)initWithFollowupController:(id)arg1;	// IMP=0x000000010013b4e4
- (void)clearAllPostedFlags;	// IMP=0x000000010013c114
- (_Bool)hasPosted:(unsigned char)arg1;	// IMP=0x000000010013c08c

@end

