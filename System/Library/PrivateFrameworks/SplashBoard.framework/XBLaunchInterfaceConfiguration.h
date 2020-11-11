/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface XBLaunchInterfaceConfiguration : NSObject <BSXPCCoding, NSSecureCoding> {

	BOOL _imageRespectsSafeAreaInsets;
	NSString* _colorName;
	NSString* _imageName;
	NSArray* _bars;
	NSString* _navigationBarImageName;
	NSString* _toolbarImageName;
	NSString* _tabBarImageName;

}

@property (nonatomic,copy,readonly) NSString * colorName;                           //@synthesize colorName=_colorName - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageName;                           //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,readonly) BOOL imageRespectsSafeAreaInsets;                    //@synthesize imageRespectsSafeAreaInsets=_imageRespectsSafeAreaInsets - In the implementation block
@property (nonatomic,readonly) NSArray * bars;                                      //@synthesize bars=_bars - In the implementation block
@property (nonatomic,copy,readonly) NSString * navigationBarImageName;              //@synthesize navigationBarImageName=_navigationBarImageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * toolbarImageName;                    //@synthesize toolbarImageName=_toolbarImageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * tabBarImageName;                     //@synthesize tabBarImageName=_tabBarImageName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)bars;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)imageName;
-(id)initWithConfigurationDictionary:(id)arg1 ;
-(NSString *)colorName;
-(BOOL)imageRespectsSafeAreaInsets;
-(NSString *)navigationBarImageName;
-(NSString *)toolbarImageName;
-(NSString *)tabBarImageName;
@end
