/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSArray;

@interface NSException : NSObject <NSCopying, NSSecureCoding> {

	NSString* name;
	NSString* reason;
	NSDictionary* userInfo;
	id reserved;

}

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * reason; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (copy,readonly) NSArray * callStackReturnAddresses; 
@property (copy,readonly) NSArray * callStackSymbols; 
+(BOOL)supportsSecureCoding;
+(id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(void)raise:(id)arg1 format:(id)arg2 arguments:(char*)arg3 ;
+(void)raise:(id)arg1 format:(id)arg2 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)redactedDescription;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSArray *)callStackSymbols;
-(id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
-(NSArray *)callStackReturnAddresses;
-(BOOL)_isUnarchived;
-(void)_markAsUnarchived;
-(BOOL)_installStackTraceKeyIfNeeded;
-(void)raise;
@end

