/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CHDrawing, NSArray, NSDictionary;

@interface CHStrokeGroupRecognitionResult : NSObject <NSCopying, NSSecureCoding> {

	CHDrawing* _inputDrawing;
	NSArray* _inputDrawingCutPoints;
	NSDictionary* _languageFitnessByLocale;
	NSArray* _inputStrokeIdentifiers;
	NSDictionary* _recognitionResultsByLocale;
	NSDictionary* _errorsByLocale;

}

@property (nonatomic,retain,readonly) CHDrawing * inputDrawing; 
@property (nonatomic,copy,readonly) NSArray * inputDrawingCutPoints; 
@property (nonatomic,copy,readonly) NSDictionary * languageFitnessByLocale; 
@property (nonatomic,copy,readonly) NSArray * inputStrokeIdentifiers;                       //@synthesize inputStrokeIdentifiers=_inputStrokeIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * recognitionResultsByLocale;              //@synthesize recognitionResultsByLocale=_recognitionResultsByLocale - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * errorsByLocale;                          //@synthesize errorsByLocale=_errorsByLocale - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sortedLocales:(id)arg1 usingLanguageFitness:(id)arg2 ;
+(id)filteredResultsByLocale:(id)arg1 usingLanguageFitness:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)inputStrokeIdentifiers;
-(NSDictionary *)recognitionResultsByLocale;
-(NSDictionary *)errorsByLocale;
-(id)localesSortedByLanguageFitness:(id)arg1 ;
-(CHDrawing *)inputDrawing;
-(NSArray *)inputDrawingCutPoints;
-(id)highConfidenceTextForSessionResult:(id)arg1 rejectionRate:(double*)arg2 doesContainUnfilteredMultiLocaleResults:(BOOL*)arg3 ;
-(double)languageFitnessForLocale:(id)arg1 ;
-(id)initWithResultsByLocale:(id)arg1 errorsByLocale:(id)arg2 languageFitnessByLocale:(id)arg3 inputStrokeIdentifiers:(id)arg4 inputDrawing:(id)arg5 inputDrawingCutPoints:(id)arg6 ;
-(NSDictionary *)languageFitnessByLocale;
-(id)initWithResultsByLocale:(id)arg1 errorsByLocale:(id)arg2 languageFitnessByLocale:(id)arg3 inputStrokeIdentifiers:(id)arg4 ;
-(BOOL)isEqualToStrokeGroupRecognitionResult:(id)arg1 ;
@end

