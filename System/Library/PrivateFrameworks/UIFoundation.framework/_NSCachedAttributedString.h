/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@class NSAttributeDictionary;

@interface _NSCachedAttributedString : NSMutableAttributedString {

	id _contents;
	NSAttributeDictionary* _baseAttributes;
	long long _length;
	unsigned long long _hashValue;
	SCD_Struct_NS38* _runs;
	long long _numRuns;
	long long _allocedRunsSize;
	long long _numHits;

}
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(unsigned long long)length;
-(id)string;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithAttributedString:(id)arg1 ;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(void)cache;
-(BOOL)_isStringDrawingTextStorage;
-(BOOL)_baselineMode;
-(BOOL)hasColorGlyphsInRange:(NSRange)arg1 ;
-(id)copyCachedInstance;
@end

