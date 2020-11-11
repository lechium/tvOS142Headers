/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSUUID, UITraitCollection, BSMachPortSendRight;

@interface _UIViewServiceViewControllerOperatorCreateOptions : NSObject <NSSecureCoding> {

	NSString* _viewControllerClassName;
	NSArray* _serializedAppearanceRepresentations;
	NSUUID* _contextToken;
	NSArray* _displayConfigurations;
	UITraitCollection* _traitCollection;
	BSMachPortSendRight* _hostAccessibilityServerPort;
	long long _availableTextServices;
	long long _initialInterfaceOrientation;

}

@property (nonatomic,copy) NSString * viewControllerClassName;                               //@synthesize viewControllerClassName=_viewControllerClassName - In the implementation block
@property (nonatomic,copy) NSArray * serializedAppearanceRepresentations;                    //@synthesize serializedAppearanceRepresentations=_serializedAppearanceRepresentations - In the implementation block
@property (nonatomic,retain) NSUUID * contextToken;                                          //@synthesize contextToken=_contextToken - In the implementation block
@property (nonatomic,copy) NSArray * displayConfigurations;                                  //@synthesize displayConfigurations=_displayConfigurations - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                            //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) BSMachPortSendRight * hostAccessibilityServerPort;              //@synthesize hostAccessibilityServerPort=_hostAccessibilityServerPort - In the implementation block
@property (assign,nonatomic) long long availableTextServices;                                //@synthesize availableTextServices=_availableTextServices - In the implementation block
@property (assign,nonatomic) long long initialInterfaceOrientation;                          //@synthesize initialInterfaceOrientation=_initialInterfaceOrientation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)viewControllerClassName;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setViewControllerClassName:(NSString *)arg1 ;
-(long long)availableTextServices;
-(NSUUID *)contextToken;
-(void)setContextToken:(NSUUID *)arg1 ;
-(void)setDisplayConfigurations:(NSArray *)arg1 ;
-(void)setSerializedAppearanceRepresentations:(NSArray *)arg1 ;
-(void)setInitialInterfaceOrientation:(long long)arg1 ;
-(void)setHostAccessibilityServerPort:(BSMachPortSendRight *)arg1 ;
-(void)setAvailableTextServices:(long long)arg1 ;
-(NSArray *)serializedAppearanceRepresentations;
-(NSArray *)displayConfigurations;
-(BSMachPortSendRight *)hostAccessibilityServerPort;
-(long long)initialInterfaceOrientation;
@end

