/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSObject;

@interface _PASTuple2 : NSObject <NSCopying> {

	NSObject* _first;
	NSObject* _second;

}

@property (nonatomic,readonly) NSObject * first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) NSObject * second;              //@synthesize second=_second - In the implementation block
+(id)tupleWithFirst:(id)arg1 second:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSObject *)second;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(NSObject *)first;
-(BOOL)isEqualToTuple2:(id)arg1 ;
@end

