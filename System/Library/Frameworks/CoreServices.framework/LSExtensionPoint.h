/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSQueryResult.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class LSExtensionPointRecord, NSString, NSNumber, NSDictionary;

@interface LSExtensionPoint : _LSQueryResult <NSCopying, NSSecureCoding> {

	LSExtensionPointRecord* _record;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) NSNumber * platform; 
@property (nonatomic,readonly) NSDictionary * sdkEntry; 
+(BOOL)supportsSecureCoding;
+(id)extensionPointForIdentifier:(id)arg1 platform:(id)arg2 ;
+(id)identifierForCurrentProcess;
+(id)extensionPointForIdentifier:(id)arg1 ;
+(id)_synthesizedExtensionPointWithIdentifier:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)platform;
-(NSDictionary *)sdkEntry;
-(id)_initWithRecord:(id)arg1 resolveAndDetach:(BOOL)arg2 ;
@end

