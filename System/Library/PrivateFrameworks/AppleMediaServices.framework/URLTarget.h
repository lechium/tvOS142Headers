/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface URLTarget : NSObject {

	unsigned _applicationState;
	NSString* _bundleID;
	long long _defaultIndex;
	NSString* _normalScheme;
	NSString* _secureScheme;

}

@property (assign,nonatomic) unsigned applicationState;              //@synthesize applicationState=_applicationState - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) long long defaultIndex;                 //@synthesize defaultIndex=_defaultIndex - In the implementation block
@property (nonatomic,retain) NSString * normalScheme;                //@synthesize normalScheme=_normalScheme - In the implementation block
@property (nonatomic,retain) NSString * secureScheme;                //@synthesize secureScheme=_secureScheme - In the implementation block
+(id)targetWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned)applicationState;
-(void)setApplicationState:(unsigned)arg1 ;
-(long long)defaultIndex;
-(void)setDefaultIndex:(long long)arg1 ;
-(NSString *)secureScheme;
-(void)setSecureScheme:(NSString *)arg1 ;
-(id)initWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3 ;
-(NSString *)normalScheme;
-(void)setNormalScheme:(NSString *)arg1 ;
@end

