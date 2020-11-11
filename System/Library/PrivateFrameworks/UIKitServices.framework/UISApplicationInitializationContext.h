/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitServices/UIKitServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class UISDisplayContext, UISDeviceContext, NSSet, FBSSceneIdentityToken, NSString;

@interface UISApplicationInitializationContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, BSXPCSecureCoding> {

	UISDisplayContext* _displayContext;
	UISDeviceContext* _deviceContext;
	NSSet* _persistedSceneIdentifiers;
	FBSSceneIdentityToken* _defaultSceneToken;

}

@property (nonatomic,readonly) UISDisplayContext * displayContext;                     //@synthesize displayContext=_displayContext - In the implementation block
@property (nonatomic,readonly) UISDeviceContext * deviceContext;                       //@synthesize deviceContext=_deviceContext - In the implementation block
@property (nonatomic,readonly) NSSet * persistedSceneIdentifiers;                      //@synthesize persistedSceneIdentifiers=_persistedSceneIdentifiers - In the implementation block
@property (nonatomic,readonly) FBSSceneIdentityToken * defaultSceneToken;              //@synthesize defaultSceneToken=_defaultSceneToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)defaultContext;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(UISDisplayContext *)displayContext;
-(UISDeviceContext *)deviceContext;
-(FBSSceneIdentityToken *)defaultSceneToken;
-(NSSet *)persistedSceneIdentifiers;
-(id)initWithDisplayContext:(id)arg1 deviceContext:(id)arg2 persistedSceneIdentifiers:(id)arg3 ;
-(id)initWithUISApplicationInitializationContext:(id)arg1 ;
@end

