/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNRectangleObservation.h>

@class NSArray, NSString;

@interface VNRecognizedTextObservation : VNRectangleObservation {

	BOOL _isTitle;
	NSArray* _textObjects;
	NSString* _text;

}

@property (nonatomic,copy) NSArray * textObjects;                 //@synthesize textObjects=_textObjects - In the implementation block
@property (assign,nonatomic) BOOL isTitle;                        //@synthesize isTitle=_isTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)topCandidates:(unsigned long long)arg1 ;
-(NSArray *)textObjects;
-(void)setTextObjects:(NSArray *)arg1 ;
-(BOOL)isTitle;
-(void)setIsTitle:(BOOL)arg1 ;
@end

