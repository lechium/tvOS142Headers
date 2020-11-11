/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PDS.framework/PDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PDSRegistration : NSObject <NSSecureCoding> {

	char _pushEnvironment;
	NSString* _topicString;
	NSString* _qualifierString;

}

@property (nonatomic,readonly) NSString * topicString;                  //@synthesize topicString=_topicString - In the implementation block
@property (nonatomic,readonly) NSString * qualifierString;              //@synthesize qualifierString=_qualifierString - In the implementation block
@property (nonatomic,readonly) char pushEnvironment;                    //@synthesize pushEnvironment=_pushEnvironment - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)pushEnvironment;
-(id)initWithTopic:(id)arg1 qualifier:(id)arg2 pushEnvironment:(char)arg3 ;
-(BOOL)isEqualToRegistration:(id)arg1 ;
-(NSString *)topicString;
-(NSString *)qualifierString;
@end

