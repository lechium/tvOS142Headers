/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFSyncSnapshot : NSObject <NSSecureCoding> {

	NSString* _anchor;
	NSString* _validity;
	long long _count;
	NSString* _key;

}

@property (nonatomic,copy) NSString * anchor;                //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,copy) NSString * validity;              //@synthesize validity=_validity - In the implementation block
@property (assign,nonatomic) long long count;                //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSString * key;                   //@synthesize key=_key - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)key;
-(void)setCount:(long long)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)anchor;
-(NSString *)validity;
-(void)setValidity:(NSString *)arg1 ;
-(void)setAnchor:(NSString *)arg1 ;
@end

