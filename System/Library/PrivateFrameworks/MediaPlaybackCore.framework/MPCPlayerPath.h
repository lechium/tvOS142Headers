/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MPAVRoute;

@interface MPCPlayerPath : NSObject <NSCopying, NSSecureCoding> {

	int _pid;
	BOOL _resolved;
	NSString* _bundleID;
	NSString* _playerID;
	void* _mediaRemotePlayerPath;
	NSString* _deviceUID;
	MPAVRoute* _route;

}

@property (nonatomic,readonly) void* mediaRemotePlayerPath;                                //@synthesize mediaRemotePlayerPath=_mediaRemotePlayerPath - In the implementation block
@property (nonatomic,readonly) NSString * deviceUID;                                       //@synthesize deviceUID=_deviceUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * representedBundleDisplayName; 
@property (nonatomic,copy,readonly) NSString * representedBundleID; 
@property (nonatomic,readonly) MPAVRoute * route;                                          //@synthesize route=_route - In the implementation block
@property (getter=isSystemMusicPath,nonatomic,readonly) BOOL systemMusicPath; 
@property (getter=isResolved,nonatomic,readonly) BOOL resolved;                            //@synthesize resolved=_resolved - In the implementation block
@property (getter=isFullyResolved,nonatomic,readonly) BOOL fullyResolved; 
@property (nonatomic,readonly) void* origin; 
@property (nonatomic,copy,readonly) NSString * bundleID;                                   //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerID;                                   //@synthesize playerID=_playerID - In the implementation block
@property (getter=isInProcess,nonatomic,readonly) BOOL inProcess; 
+(BOOL)supportsSecureCoding;
+(id)deviceActivePlayerPath;
+(id)pathWithRoute:(id)arg1 mediaRemotePlayerPath:(void*)arg2 isResolved:(BOOL)arg3 ;
+(id)pathWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3 ;
+(id)systemMusicPathWithRoute:(id)arg1 playerID:(id)arg2 ;
+(id)pathWithDeviceUIDs:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4 ;
+(id)pathWithDeviceUID:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4 ;
+(id)pathWithCustomOrigin:(void*)arg1 bundleID:(id)arg2 playerID:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(BOOL)isResolved;
-(void*)origin;
-(MPAVRoute *)route;
-(NSString *)deviceUID;
-(NSString *)representedBundleID;
-(NSString *)playerID;
-(BOOL)isInProcess;
-(void)resolveWithRouteResolvedHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)pathByAppendingPlayerIDSuffix:(id)arg1 ;
-(id)initWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3 ;
-(id)initWithDeviceUID:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4 ;
-(id)initWithRoute:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4 ;
-(BOOL)isFullyResolved;
-(BOOL)isSystemMusicPath;
-(NSString *)representedBundleDisplayName;
-(void)resolveWithCompletion:(/*^block*/id)arg1 ;
-(void*)mediaRemotePlayerPath;
@end

