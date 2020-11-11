/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISIconDecorationInternal.h>
#import <libobjc.A.dylib/ISIconDecoration.h>

@protocol ISIconDecoration <NSObject,NSSecureCoding>
@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface ISIconDecoration : NSObject <ISIconDecorationInternal, ISIconDecoration, NSCopying> {

	long long _position;
	long long _mode;
	NSString* _identifier;
	unsigned long long _identifierKind;

}

@property (readonly) NSUUID * uuid; 
@property (readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long identifierKind;              //@synthesize identifierKind=_identifierKind - In the implementation block
@property (readonly) NSUUID * resourceFingerprint; 
@property (assign) long long position;                               //@synthesize position=_position - In the implementation block
@property (assign) long long mode;                                   //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setMode:(long long)arg1 ;
-(id)initWithType:(id)arg1 ;
-(long long)position;
-(void)setPosition:(long long)arg1 ;
-(long long)mode;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSUUID *)uuid;
-(id)imageForDescriptor:(id)arg1 ;
-(unsigned long long)identifierKind;
-(NSUUID *)resourceFingerprint;
-(void)prepareImagesForDescriptors:(id)arg1 ;
@end

