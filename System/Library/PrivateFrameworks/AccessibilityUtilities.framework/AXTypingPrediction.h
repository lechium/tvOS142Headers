/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSString;

@interface AXTypingPrediction : NSObject {

	NSString* _fullWord;
	NSString* _textToInsert;
	NSString* _prefix;
	double _probability;
	NSRange _rangeToReplace;

}

@property (nonatomic,copy) NSString * fullWord;                   //@synthesize fullWord=_fullWord - In the implementation block
@property (nonatomic,copy) NSString * textToInsert;               //@synthesize textToInsert=_textToInsert - In the implementation block
@property (nonatomic,copy) NSString * prefix;                     //@synthesize prefix=_prefix - In the implementation block
@property (assign,nonatomic) NSRange rangeToReplace;              //@synthesize rangeToReplace=_rangeToReplace - In the implementation block
@property (assign,nonatomic) double probability;                  //@synthesize probability=_probability - In the implementation block
-(id)description;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)fullWord;
-(void)setFullWord:(NSString *)arg1 ;
-(NSString *)textToInsert;
-(void)setTextToInsert:(NSString *)arg1 ;
-(NSRange)rangeToReplace;
-(void)setRangeToReplace:(NSRange)arg1 ;
-(double)probability;
-(void)setProbability:(double)arg1 ;
@end

