/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class XBLaunchInterface, NSArray, NSString;

@interface XBApplicationLaunchCompatibilityInfo : NSObject <BSXPCCoding, NSSecureCoding> {

	XBLaunchInterface* _defaultInterface;
	BOOL _launchesOpaque;
	BOOL _hasKnownBadLaunchImage;
	NSArray* _launchInterfaces;
	NSString* _bundleIdentifier;
	NSString* _bundlePath;
	NSString* _sandboxPath;
	NSString* _bundleContainerPath;
	NSString* _defaultGroupIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                                            //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy) NSString * sandboxPath;                                           //@synthesize sandboxPath=_sandboxPath - In the implementation block
@property (nonatomic,copy) NSString * bundleContainerPath;                                   //@synthesize bundleContainerPath=_bundleContainerPath - In the implementation block
@property (nonatomic,copy) NSString * defaultGroupIdentifier;                                //@synthesize defaultGroupIdentifier=_defaultGroupIdentifier - In the implementation block
@property (assign,nonatomic) BOOL launchesOpaque;                                            //@synthesize launchesOpaque=_launchesOpaque - In the implementation block
@property (nonatomic,copy,readonly) XBLaunchInterface * defaultLaunchInterface; 
@property (nonatomic,copy,readonly) NSArray * launchInterfaces;                              //@synthesize launchInterfaces=_launchInterfaces - In the implementation block
@property (nonatomic,readonly) BOOL allowsSavingLaunchImages; 
@property (assign,nonatomic) BOOL hasKnownBadLaunchImage;                                    //@synthesize hasKnownBadLaunchImage=_hasKnownBadLaunchImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)compatibilityInfoForAppInfo:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)bundlePath;
-(id)initWithBundle:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setSandboxPath:(NSString *)arg1 ;
-(void)setBundleContainerPath:(NSString *)arg1 ;
-(void)setDefaultGroupIdentifier:(NSString *)arg1 ;
-(id)launchInterfaceWithIdentifier:(id)arg1 ;
-(XBLaunchInterface *)defaultLaunchInterface;
-(void)_setLaunchInterfaces:(id)arg1 ;
-(BOOL)allowsSavingLaunchImages;
-(id)launchInterfaceIdentifierForRequest:(id)arg1 ;
-(NSArray *)launchInterfaces;
-(NSString *)sandboxPath;
-(BOOL)launchesOpaque;
-(void)setLaunchesOpaque:(BOOL)arg1 ;
-(BOOL)hasKnownBadLaunchImage;
-(void)setHasKnownBadLaunchImage:(BOOL)arg1 ;
-(NSString *)bundleContainerPath;
-(NSString *)defaultGroupIdentifier;
@end

