/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class CHRecognitionInsightRequest, NSLocale, NSCharacterSet, NSDictionary, CHDrawing, NSArray, CHTokenizedTextResult, NSError, NSString;

@interface CHRecognitionInsight : NSObject {

	int _recognizerRecognitionMode;
	int _recognizerContentType;
	int _autoCapitalizationMode;
	CHRecognitionInsightRequest* _insightRequest;
	NSLocale* _recognizerLocale;
	NSCharacterSet* _recognizerActiveCharacterSet;
	NSDictionary* _recognizerOptions;
	unsigned long long _recognizerMaxRecognitionResultCount;
	CHDrawing* _inputDrawing;
	NSArray* _inputDrawingCutPoints;
	NSArray* _spaceProbabilities;
	NSArray* _charBoundaryProbabilities;
	NSArray* _delayedStrokeProbabilities;
	CHTokenizedTextResult* _textResult;
	NSError* _recognitionError;
	CGSize _recognizerMinimumDrawingSize;

}

@property (nonatomic,retain) CHRecognitionInsightRequest * insightRequest;                        //@synthesize insightRequest=_insightRequest - In the implementation block
@property (nonatomic,copy) NSLocale * recognizerLocale;                                           //@synthesize recognizerLocale=_recognizerLocale - In the implementation block
@property (assign,nonatomic) int recognizerRecognitionMode;                                       //@synthesize recognizerRecognitionMode=_recognizerRecognitionMode - In the implementation block
@property (assign,nonatomic) int recognizerContentType;                                           //@synthesize recognizerContentType=_recognizerContentType - In the implementation block
@property (assign,nonatomic) int autoCapitalizationMode;                                          //@synthesize autoCapitalizationMode=_autoCapitalizationMode - In the implementation block
@property (nonatomic,copy) NSCharacterSet * recognizerActiveCharacterSet;                         //@synthesize recognizerActiveCharacterSet=_recognizerActiveCharacterSet - In the implementation block
@property (nonatomic,copy) NSDictionary * recognizerOptions;                                      //@synthesize recognizerOptions=_recognizerOptions - In the implementation block
@property (assign,nonatomic) unsigned long long recognizerMaxRecognitionResultCount;              //@synthesize recognizerMaxRecognitionResultCount=_recognizerMaxRecognitionResultCount - In the implementation block
@property (assign,nonatomic) CGSize recognizerMinimumDrawingSize;                                 //@synthesize recognizerMinimumDrawingSize=_recognizerMinimumDrawingSize - In the implementation block
@property (nonatomic,copy) CHDrawing * inputDrawing;                                              //@synthesize inputDrawing=_inputDrawing - In the implementation block
@property (nonatomic,copy) NSArray * inputDrawingCutPoints;                                       //@synthesize inputDrawingCutPoints=_inputDrawingCutPoints - In the implementation block
@property (nonatomic,copy) NSArray * spaceProbabilities;                                          //@synthesize spaceProbabilities=_spaceProbabilities - In the implementation block
@property (nonatomic,copy) NSArray * charBoundaryProbabilities;                                   //@synthesize charBoundaryProbabilities=_charBoundaryProbabilities - In the implementation block
@property (nonatomic,copy) NSArray * delayedStrokeProbabilities;                                  //@synthesize delayedStrokeProbabilities=_delayedStrokeProbabilities - In the implementation block
@property (nonatomic,copy) CHTokenizedTextResult * textResult;                                    //@synthesize textResult=_textResult - In the implementation block
@property (nonatomic,copy) NSError * recognitionError;                                            //@synthesize recognitionError=_recognitionError - In the implementation block
@property (nonatomic,readonly) NSString * recognizerRecognitionModeDescription; 
@property (nonatomic,readonly) NSString * recognizerContentTypeDescription; 
@property (nonatomic,readonly) NSString * autoCapitalizationModeDescription; 
-(id)description;
-(void)dealloc;
-(void)recordSpaceProbabilities:(const vector<double, std::__1::allocator<double> >*)arg1 ;
-(void)recordCharBoundaryProbabilities:(const vector<double, std::__1::allocator<double> >*)arg1 ;
-(void)recordDelayedStrokeProbabilities:(const vector<double, std::__1::allocator<double> >*)arg1 ;
-(void)recordConfigurationForRecognizer:(id)arg1 options:(id)arg2 ;
-(void)recordTextResult:(id)arg1 recognitionError:(id)arg2 ;
-(int)autoCapitalizationMode;
-(void)recordInsightRequest:(id)arg1 ;
-(void)setAutoCapitalizationMode:(int)arg1 ;
-(CHRecognitionInsightRequest *)insightRequest;
-(NSCharacterSet *)recognizerActiveCharacterSet;
-(NSLocale *)recognizerLocale;
-(NSString *)recognizerRecognitionModeDescription;
-(NSString *)recognizerContentTypeDescription;
-(NSString *)autoCapitalizationModeDescription;
-(unsigned long long)recognizerMaxRecognitionResultCount;
-(CGSize)recognizerMinimumDrawingSize;
-(NSDictionary *)recognizerOptions;
-(CHDrawing *)inputDrawing;
-(NSArray *)inputDrawingCutPoints;
-(NSArray *)spaceProbabilities;
-(NSArray *)delayedStrokeProbabilities;
-(NSArray *)charBoundaryProbabilities;
-(CHTokenizedTextResult *)textResult;
-(int)recognizerRecognitionMode;
-(int)recognizerContentType;
-(void)setInsightRequest:(CHRecognitionInsightRequest *)arg1 ;
-(void)setRecognizerLocale:(NSLocale *)arg1 ;
-(void)setRecognizerRecognitionMode:(int)arg1 ;
-(void)setRecognizerContentType:(int)arg1 ;
-(void)setRecognizerActiveCharacterSet:(NSCharacterSet *)arg1 ;
-(void)setRecognizerOptions:(NSDictionary *)arg1 ;
-(void)setRecognizerMaxRecognitionResultCount:(unsigned long long)arg1 ;
-(void)setRecognizerMinimumDrawingSize:(CGSize)arg1 ;
-(void)setInputDrawing:(CHDrawing *)arg1 ;
-(void)setInputDrawingCutPoints:(NSArray *)arg1 ;
-(void)setSpaceProbabilities:(NSArray *)arg1 ;
-(void)setCharBoundaryProbabilities:(NSArray *)arg1 ;
-(void)setDelayedStrokeProbabilities:(NSArray *)arg1 ;
-(void)setTextResult:(CHTokenizedTextResult *)arg1 ;
-(NSError *)recognitionError;
-(void)setRecognitionError:(NSError *)arg1 ;
-(void)recordInputDrawing:(id)arg1 ;
-(void)recordInputDrawingCutPoints:(id)arg1 ;
@end

