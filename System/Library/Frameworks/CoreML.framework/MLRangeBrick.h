/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EspressoBrick.h>

@class NSString;

@interface MLRangeBrick : NSObject <EspressoBrick> {

	int _size;
	float _start;
	float _stepSize;
	float _startValueParameter;
	float _endValueParameter;
	float _stepSizeValueParameter;

}

@property (nonatomic,readonly) int size;                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) float start;                               //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) float stepSize;                            //@synthesize stepSize=_stepSize - In the implementation block
@property (nonatomic,readonly) float startValueParameter;                 //@synthesize startValueParameter=_startValueParameter - In the implementation block
@property (nonatomic,readonly) float endValueParameter;                   //@synthesize endValueParameter=_endValueParameter - In the implementation block
@property (nonatomic,readonly) float stepSizeValueParameter;              //@synthesize stepSizeValueParameter=_stepSizeValueParameter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)size;
-(float)start;
-(id)initWithParameters:(id)arg1 ;
-(BOOL)hasDynamicOutputShape:(unsigned long long)arg1 ;
-(id)computeDynamicOutputShape:(id)arg1 ;
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2 ;
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2 ;
-(BOOL)hasGPUSupport;
-(float)stepSize;
-(float)startValueParameter;
-(float)endValueParameter;
-(float)stepSizeValueParameter;
@end

