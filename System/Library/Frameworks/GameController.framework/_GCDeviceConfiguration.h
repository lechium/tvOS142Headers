/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class NSDictionary, NSSet;

@interface _GCDeviceConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	NSDictionary* _attributes;

}

@property (nonatomic,readonly) NSDictionary * attributes;                                               //@synthesize attributes=_attributes - In the implementation block
@property (copy,readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long priority; 
@property (getter=isTransient,readonly) BOOL transient; 
@property (copy,readonly) id<NSObject><NSCopying><NSSecureCoding> deviceIdentifier; 
@property (copy,readonly) NSSet * deviceDependencies; 
@property (copy,readonly) id<NSObject><NSCopying><NSSecureCoding> deviceBuilderIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)configurationWithIdentifier:(id)arg1 priority:(unsigned long long)arg2 deviceIdentifier:(id)arg3 deviceDependencies:(id)arg4 deviceBuilder:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(unsigned long long)priority;
-(NSDictionary *)attributes;
-(id)valueForAttribute:(id)arg1 ;
-(BOOL)isTransient;
-(id<NSObject><NSCopying><NSSecureCoding>)deviceIdentifier;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)deviceBuilderIdentifier;
-(NSSet *)deviceDependencies;
-(id)_initWithIdentifier:(id)arg1 attributes:(id)arg2 ;
@end
