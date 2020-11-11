/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/MLClassifier.h>

@class MLSVMEngine;

@interface MLSupportVectorClassifier : MLClassifier {

	MLSVMEngine* _engine;

}

@property (retain) MLSVMEngine * engine;              //@synthesize engine=_engine - In the implementation block
+(id)featureValueWithObject:(id)arg1 ;
-(MLSVMEngine *)engine;
-(void)setEngine:(MLSVMEngine *)arg1 ;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
@end

