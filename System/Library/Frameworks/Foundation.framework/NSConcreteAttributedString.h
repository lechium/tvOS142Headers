/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSAttributedString.h>

@class NSString, NSRLEArray;

@interface NSConcreteAttributedString : NSAttributedString {

	NSString* string;
	NSRLEArray* attributes;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)string;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithAttributedString:(id)arg1 ;
-(id)_runArrayHoldingAttributes;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
@end
