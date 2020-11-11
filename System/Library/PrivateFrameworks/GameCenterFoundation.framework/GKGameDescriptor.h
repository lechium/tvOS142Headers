/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSNumber;

@interface GKGameDescriptor : GKInternalRepresentation {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSNumber* _adamID;
	NSNumber* _externalVersion;
	NSString* _shortBundleVersion;
	long long _platform;

}

@property (nonatomic,retain) NSNumber * adamID;                        //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,retain) NSNumber * externalVersion;               //@synthesize externalVersion=_externalVersion - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                   //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * shortBundleVersion;              //@synthesize shortBundleVersion=_shortBundleVersion - In the implementation block
@property (assign,nonatomic) long long platform;                       //@synthesize platform=_platform - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)currentPlatform;
+(id)secureCodedPropertyKeys;
+(long long)gamePlatformFromServerGameDescriptorString:(id)arg1 ;
+(long long)gamePlatformFromServerPushString:(id)arg1 ;
+(id)platformStringForServerRequest:(long long)arg1 ;
+(id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 shortBundleVersion:(id)arg3 adamID:(id)arg4 ;
+(id)currentPlatformServerString;
-(id)description;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(long long)platform;
-(void)setPlatform:(long long)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setAdamID:(NSNumber *)arg1 ;
-(NSNumber *)adamID;
-(void)setShortBundleVersion:(NSString *)arg1 ;
-(NSString *)shortBundleVersion;
-(NSNumber *)externalVersion;
-(id)initWithPushDictionary:(id)arg1 ;
-(id)dictionaryForRequest;
-(void)setExternalVersion:(NSNumber *)arg1 ;
@end

