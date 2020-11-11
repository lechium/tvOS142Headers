/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSAttributedString, NSDictionary;

@interface __NSCFLocalizedAttributedString : NSString <NSSecureCoding> {

	NSAttributedString* _original;
	NSDictionary* _formatConfiguration;

}
+(const CFStringRef)copyStringWithMarkup:(CFStringRef)arg1 formatConfiguration:(CFDictionaryRef)arg2 ;
+(const CFStringRef)createStringRequiringInflectionWithFormat:(CFStringRef)arg1 formatOptions:(CFDictionaryRef)arg2 arguments:(char*)arg3 ;
+(id)whitelistedStringWithAttributedString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(const unsigned short*)_fastCharacterContents;
-(unsigned long long)fastestEncoding;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(id)substringToIndex:(unsigned long long)arg1 ;
-(id)__baseAttributedString;
-(id)initWithAttributedStringMarkup:(id)arg1 formatConfiguration:(id)arg2 ;
-(id)_initWithAttributedString:(id)arg1 ;
@end

