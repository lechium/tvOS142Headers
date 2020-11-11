/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, RTVisitHyperParameter;

@interface RTVisitDecoder : NSObject {

	NSArray* _beam;
	RTVisitHyperParameter* _hyperParameter;

}

@property (nonatomic,readonly) RTVisitHyperParameter * hyperParameter;              //@synthesize hyperParameter=_hyperParameter - In the implementation block
-(id)init;
-(void)reset;
-(id)initWithHyperParameter:(id)arg1 ;
-(RTVisitHyperParameter *)hyperParameter;
-(void)updateSuccessor:(id)arg1 newNode:(id)arg2 ;
-(id)createSuccessor:(id)arg1 probabilities:(const float*)arg2 firstTimeStepDate:(id)arg3 currentDate:(id)arg4 ;
-(id)decodeWithProbabilities:(const float*)arg1 batchSize:(unsigned long long)arg2 firstTimeStepDate:(id)arg3 ;
@end

