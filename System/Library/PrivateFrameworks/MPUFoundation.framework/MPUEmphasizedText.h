/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet, NSString, NSArray;

@interface MPUEmphasizedText : NSObject <NSCopying, NSSecureCoding> {

	NSMutableSet* _emphasisRangesSet;
	NSString* _string;

}

@property (nonatomic,copy,readonly) NSString * string; 
@property (nonatomic,copy,readonly) NSArray * emphasisRanges; 
+(BOOL)supportsSecureCoding;
+(void)_enumerateEmphasisRangesInString:(id)arg1 withEmphasisDelimiter:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(void)_enumerateEmphasisRangesInString:(id)arg1 withEmphasisSubstring:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
+(id)attributedStringWithString:(id)arg1 emphasisDelimiter:(id)arg2 regularTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4 ;
+(id)attributedStringWithString:(id)arg1 emphasisSubstring:(id)arg2 options:(unsigned long long)arg3 regularTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5 ;
+(id)emphasizedTextWithString:(id)arg1 ;
+(id)emphasizedTextUsingString:(id)arg1 emphasisDelimiter:(id)arg2 ;
+(id)emphasizedTextUsingString:(id)arg1 emphasisSubstring:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)string;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 emphasisRanges:(id)arg2 ;
-(NSArray *)emphasisRanges;
-(void)enumerateEmphasisRangesUsingBlock:(/*^block*/id)arg1 ;
-(id)newAttributedStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2 ;
-(id)newAttributedStringWithTextAttributes:(id)arg1 ;
@end

