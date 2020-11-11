/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHTextInputTargetContentInfo.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CHTextInputTarget, NSIndexSet;

@interface CHMutableTextInputTargetContentInfo : CHTextInputTargetContentInfo <NSCopying>

@property (nonatomic,retain) CHTextInputTarget * textInputTarget; 
@property (assign,nonatomic) long long textContentLength; 
@property (assign,nonatomic) NSRange strokeCoveredTextRange; 
@property (assign,nonatomic) NSRange selectedTextRange; 
@property (assign,nonatomic) BOOL isCursorStrong; 
@property (assign,nonatomic) BOOL containsCommittedStrokes; 
@property (assign,nonatomic) NSRange activePreviewRange; 
@property (assign,nonatomic) int contentType; 
@property (assign,nonatomic) int autoCapitalizationMode; 
@property (assign,nonatomic) BOOL isSingleLine; 
@property (assign,nonatomic) BOOL supportsAutoLineBreaks; 
@property (assign,nonatomic) long long lastCharacterLevelPosition; 
@property (nonatomic,copy) NSIndexSet * protectedCharacterIndexes; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentType:(int)arg1 ;
-(void)setSelectedTextRange:(NSRange)arg1 ;
-(void)setAutoCapitalizationMode:(int)arg1 ;
-(NSRange)referenceSubstringRange;
-(CGRect*)characterRectsInReferenceSubstring;
-(id)referenceSubstring;
-(void)setReferenceSubstring:(id)arg1 range:(NSRange)arg2 characterRects:(CGRect*)arg3 ;
-(void)setTextInputTarget:(CHTextInputTarget *)arg1 ;
-(void)setTextContentLength:(long long)arg1 ;
-(void)setStrokeCoveredTextRange:(NSRange)arg1 ;
-(void)setIsCursorStrong:(BOOL)arg1 ;
-(void)setContainsCommittedStrokes:(BOOL)arg1 ;
-(void)setActivePreviewRange:(NSRange)arg1 ;
-(void)setIsSingleLine:(BOOL)arg1 ;
-(void)setSupportsAutoLineBreaks:(BOOL)arg1 ;
-(void)setLastCharacterLevelPosition:(long long)arg1 ;
-(void)setProtectedCharacterIndexes:(NSIndexSet *)arg1 ;
@end

