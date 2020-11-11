/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface TVTopShelfNamedAttribute : NSObject <NSSecureCoding> {

	NSString* _name;
	NSArray* _values;

}

@property (nonatomic,copy,readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * values;              //@synthesize values=_values - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)values;
-(id)initWithName:(id)arg1 values:(id)arg2 ;
@end

