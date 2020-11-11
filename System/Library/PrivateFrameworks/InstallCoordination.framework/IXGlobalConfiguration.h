/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <InstallCoordination/InstallCoordination-Structs.h>
@class NSURL;

@interface IXGlobalConfiguration : NSObject {

	os_unfair_lock_s _dynamicPropertyLock;
	unsigned _daemonUID;
	unsigned _daemonGID;
	NSURL* _dataStorageHome;
	NSURL* _daemonUserHome;
	NSURL* _rootPath;

}

@property (nonatomic,readonly) NSURL * daemonUserHome;               //@synthesize daemonUserHome=_daemonUserHome - In the implementation block
@property (nonatomic,readonly) NSURL * rootPath;                     //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,readonly) NSURL * dataStorageHome;              //@synthesize dataStorageHome=_dataStorageHome - In the implementation block
@property (nonatomic,readonly) NSURL * frameworkURL; 
@property (nonatomic,readonly) NSURL * userVolumeURL; 
@property (nonatomic,readonly) unsigned daemonUID;                   //@synthesize daemonUID=_daemonUID - In the implementation block
@property (nonatomic,readonly) unsigned daemonGID;                   //@synthesize daemonGID=_daemonGID - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSURL *)rootPath;
-(void)createDirectories;
-(id)_dataStorageHomeURLWithError:(id*)arg1 ;
-(id)dataDirectoryWithError:(id*)arg1 ;
-(id)promiseStagingRootDirectoryWithError:(id*)arg1 ;
-(id)dataDirectoryAbortingOnError;
-(id)promiseStagingRootDirectoryAbortingOnError;
-(NSURL *)frameworkURL;
-(NSURL *)userVolumeURL;
-(NSURL *)dataStorageHome;
-(unsigned)daemonUID;
-(unsigned)daemonGID;
-(NSURL *)daemonUserHome;
@end
