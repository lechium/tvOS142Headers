/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/CRTextDecoding.h>

@class CRRecognizerConfiguration, CRTextSequenceRecognizerModel, CRCtcBeamSearch, CRRegex, NSString;

@interface CRTextDecoderCTCV1 : NSObject <CRTextDecoding> {

	CRRecognizerConfiguration* _configuration;
	CRTextSequenceRecognizerModel* _model;
	CRCtcBeamSearch* _beamSearch;
	CRRegex* _regExpressions;

}

@property (retain) CRRecognizerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (retain) CRTextSequenceRecognizerModel * model;                  //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) CRCtcBeamSearch * beamSearch;                 //@synthesize beamSearch=_beamSearch - In the implementation block
@property (nonatomic,retain) CRRegex * regExpressions;                     //@synthesize regExpressions=_regExpressions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CRRecognizerConfiguration *)configuration;
-(void)setConfiguration:(CRRecognizerConfiguration *)arg1 ;
-(CRTextSequenceRecognizerModel *)model;
-(void)setModel:(CRTextSequenceRecognizerModel *)arg1 ;
-(CRCtcBeamSearch *)beamSearch;
-(void)setBeamSearch:(CRCtcBeamSearch *)arg1 ;
-(void)decodeOutput:(id)arg1 imageSize:(CGSize)arg2 error:(id*)arg3 ;
-(id)initWithConfiguration:(id)arg1 model:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldDecodeWithLM;
-(CRRegex *)regExpressions;
-(void)setRegExpressions:(CRRegex *)arg1 ;
-(id)correctLMDecodingWithRegex:(id)arg1 noLMDecoding:(id)arg2 ;
-(void)maxDecodeFeaturesWithInfo:(id)arg1 activationMaps:(id)arg2 imageSize:(CGSize)arg3 error:(id*)arg4 ;
-(void)lmDecodeFeaturesWithInfo:(id)arg1 activationMaps:(id)arg2 imageSize:(CGSize)arg3 error:(id*)arg4 ;
@end

