/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>
#import <libobjc.A.dylib/CRTextRecognizerModelOutput.h>

@class NSArray, MLMultiArray, NSSet, NSString;

@interface CRTextSequenceRecognizerModelCoreMLOutput : NSObject <MLFeatureProvider, CRTextRecognizerModelOutput> {

	NSArray* _textFeatureInfo;
	MLMultiArray* _output_label_prob_map;

}

@property (retain) NSArray * textFeatureInfo;                                   //@synthesize textFeatureInfo=_textFeatureInfo - In the implementation block
@property (nonatomic,retain) MLMultiArray * output_label_prob_map;              //@synthesize output_label_prob_map=_output_label_prob_map - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSArray *)textFeatureInfo;
-(void)setTextFeatureInfo:(NSArray *)arg1 ;
-(id)initWithOutput_label_prob_map:(id)arg1 ;
-(MLMultiArray *)output_label_prob_map;
-(void)setOutput_label_prob_map:(MLMultiArray *)arg1 ;
@end

