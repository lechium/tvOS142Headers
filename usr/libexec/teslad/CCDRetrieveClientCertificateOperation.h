//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSTimer;

@interface CCDRetrieveClientCertificateOperation : NSOperation
{
    _Bool _operationExecuting;	// 8 = 0x8
    _Bool _operationFinished;	// 9 = 0x9
    _Bool _operationReady;	// 10 = 0xa
    _Bool _certificateRetrievalFailed;	// 11 = 0xb
    CDUnknownBlockType _certificateRetrievalCompletionBlock;	// 16 = 0x10
    long long _certificateRetrievalRequestCount;	// 24 = 0x18
    NSTimer *_timeoutTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000104f8
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) long long certificateRetrievalRequestCount; // @synthesize certificateRetrievalRequestCount=_certificateRetrievalRequestCount;
@property(nonatomic) _Bool certificateRetrievalFailed; // @synthesize certificateRetrievalFailed=_certificateRetrievalFailed;
@property(nonatomic) _Bool operationReady; // @synthesize operationReady=_operationReady;
@property(nonatomic) _Bool operationFinished; // @synthesize operationFinished=_operationFinished;
@property(nonatomic) _Bool operationExecuting; // @synthesize operationExecuting=_operationExecuting;
@property(copy, nonatomic) CDUnknownBlockType certificateRetrievalCompletionBlock; // @synthesize certificateRetrievalCompletionBlock=_certificateRetrievalCompletionBlock;
- (void)timeoutTimerDidFire:(id)arg1;	// IMP=0x0000000100010404
- (void)_startRetryTimerWithInterval:(double)arg1;	// IMP=0x00000001000102e4
- (void)_retryCertificateRetrievalIfAllowedAfterDelayOrFailWithError:(id)arg1;	// IMP=0x000000010001025c
- (void)_retryCertificateRetrievalIfAllowed:(_Bool)arg1 afterDelay:(double)arg2 orFailWithError:(id)arg3;	// IMP=0x0000000100010174
- (void)_endOperation;	// IMP=0x0000000100010138
- (void)_completeOperationWithReferenceKey:(id)arg1 certificates:(id)arg2 error:(id)arg3;	// IMP=0x000000010000fefc
- (void)retrieveClientCertificate;	// IMP=0x000000010000fd3c
- (void)start;	// IMP=0x000000010000fcf0
- (_Bool)isAsynchronous;	// IMP=0x000000010000fce8
- (_Bool)isFinished;	// IMP=0x000000010000fc60
- (_Bool)isExecuting;	// IMP=0x000000010000fbd8
- (_Bool)isReady;	// IMP=0x000000010000fb50
- (id)init;	// IMP=0x000000010000fb08

@end

