/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface UIProxyObject : NSObject <NSCoding> {

	NSString* proxiedObjectIdentifier;

}
+(void)addMappingFromIdentifier:(id)arg1 toObject:(id)arg2 forCoder:(id)arg3 ;
+(void)addMappings:(id)arg1 forCoder:(id)arg2 ;
+(void)removeMappingsForCoder:(id)arg1 ;
+(CFDictionaryRef)proxyDecodingMap;
+(id)mappedObjectForCoder:(id)arg1 withIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)proxiedObjectIdentifier;
-(void)setProxiedObjectIdentifier:(id)arg1 ;
@end

