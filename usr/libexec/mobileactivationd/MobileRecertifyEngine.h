//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DataArk;
@protocol OS_dispatch_queue;

@interface MobileRecertifyEngine : NSObject
{
    DataArk *_dark;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002bdf4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) DataArk *dark; // @synthesize dark=_dark;
- (void)recertifyDevice:(CDUnknownBlockType)arg1;	// IMP=0x000000010002a908
- (id)createRecertInfoWithDataArk:(id)arg1 alcoholBlob:(struct NACContextOpaque_ *)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100029ba4
- (id)initWithQueue:(id)arg1 dark:(id)arg2;	// IMP=0x0000000100029ac4

@end

