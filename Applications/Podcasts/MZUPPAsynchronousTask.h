//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MZAsynchronousTask.h"

@class MZUPPMetrics;

@interface MZUPPAsynchronousTask : MZAsynchronousTask
{
    _Bool _reportMetrics;	// 8 = 0x8
    MZUPPMetrics *_metrics;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010006d830
@property(nonatomic) _Bool reportMetrics; // @synthesize reportMetrics=_reportMetrics;
@property(retain, nonatomic) MZUPPMetrics *metrics; // @synthesize metrics=_metrics;
- (void)finishTaskOperationWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000010006d4b8
- (void)beginTaskOperation;	// IMP=0x000000010006d424
- (id)initWithHandlerQueue:(id)arg1 taskTimeout:(double)arg2 assertionTimeout:(double)arg3 debugDescription:(id)arg4 reportMetrics:(_Bool)arg5;	// IMP=0x000000010006d354

@end

