/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IBPDeepFusionOutput, BWDeepFusionProcessorControllerDelegate;
@class BWDeepFusionProcessorInput;

@interface BWDeepFusionProcessorRequest : NSObject {

	BWDeepFusionProcessorInput* _input;
	id<IBPDeepFusionOutput> _output;
	id<BWDeepFusionProcessorControllerDelegate> _delegate;
	int _err;

}

@property (assign,nonatomic) int err;                                                             //@synthesize err=_err - In the implementation block
@property (nonatomic,readonly) BWDeepFusionProcessorInput * input;                                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) id<IBPDeepFusionOutput> output;                                    //@synthesize output=_output - In the implementation block
@property (nonatomic,readonly) id<BWDeepFusionProcessorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)description;
-(void)dealloc;
-(id<BWDeepFusionProcessorControllerDelegate>)delegate;
-(BWDeepFusionProcessorInput *)input;
-(id<IBPDeepFusionOutput>)output;
-(int)err;
-(void)setErr:(int)arg1 ;
-(BOOL)receivedAllBuffers;
-(BOOL)receivedAllInferences;
-(id)initWithInput:(id)arg1 output:(id)arg2 delegate:(id)arg3 ;
@end

