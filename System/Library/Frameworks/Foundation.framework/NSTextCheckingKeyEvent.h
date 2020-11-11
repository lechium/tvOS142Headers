/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSTextCheckingKeyEvent : NSObject <NSCopying, NSSecureCoding> {

	long long _layoutType;
	unsigned long long _keyboardType;
	NSString* _identifier;
	NSString* _primaryLanguage;
	unsigned long long _flags;
	double _time;
	NSString* _keys;
	NSString* _ukeys;

}

@property (readonly) long long keyboardLayoutType; 
@property (readonly) unsigned long long keyboardType; 
@property (copy,readonly) NSString * keyboardLayoutIdentifier; 
@property (copy,readonly) NSString * primaryLanguage; 
@property (readonly) unsigned long long flags; 
@property (readonly) double timestamp; 
@property (copy,readonly) NSString * characters; 
@property (copy,readonly) NSString * charactersIgnoringModifiers; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)characters;
-(double)timestamp;
-(NSString *)keyboardLayoutIdentifier;
-(NSString *)primaryLanguage;
-(NSString *)charactersIgnoringModifiers;
-(long long)keyboardLayoutType;
-(unsigned long long)keyboardType;
-(id)initWithKeyboardLayoutType:(long long)arg1 keyboardType:(unsigned long long)arg2 identifier:(id)arg3 primaryLanguage:(id)arg4 flags:(unsigned long long)arg5 timestamp:(double)arg6 characters:(id)arg7 charactersIgnoringModifiers:(id)arg8 ;
@end

