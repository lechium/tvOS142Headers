/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNVGGishSpeechModelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _input1;

}

@property (nonatomic,retain) MLMultiArray * input1;               //@synthesize input1=_input1 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithInput1:(id)arg1 ;
-(MLMultiArray *)input1;
-(void)setInput1:(MLMultiArray *)arg1 ;
@end

