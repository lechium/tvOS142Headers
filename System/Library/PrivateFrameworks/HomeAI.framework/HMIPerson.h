/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSSet;

@interface HMIPerson : HMFObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSString* _name;
	NSSet* _personLinks;

}

@property (copy,readonly) NSUUID * UUID;                    //@synthesize UUID=_UUID - In the implementation block
@property (copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSSet * personLinks;              //@synthesize personLinks=_personLinks - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)personFromHomePerson:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(id)attributeDescriptions;
-(NSSet *)personLinks;
-(id)initWithUUID:(id)arg1 name:(id)arg2 ;
-(id)initWithUUID:(id)arg1 name:(id)arg2 personLinks:(id)arg3 ;
@end

