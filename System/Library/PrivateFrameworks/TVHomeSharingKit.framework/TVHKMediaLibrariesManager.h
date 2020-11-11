/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaServerManagerDelegate.h>

@protocol OS_dispatch_queue;
@class TVHKMediaServerDiscoveryConfiguration, NSObject, NSOperationQueue, TVHKMediaServerManager, NSMutableSet, NSSet, NSString;

@interface TVHKMediaLibrariesManager : NSObject <TVHKMediaServerManagerDelegate> {

	BOOL _started;
	BOOL _allowsCaching;
	TVHKMediaServerDiscoveryConfiguration* _discoveryConfiguration;
	NSObject*<OS_dispatch_queue> _completionDispatchQueue;
	NSObject*<OS_dispatch_queue> _notificationDispatchQueue;
	unsigned long long _accessMode;
	NSOperationQueue* _serialProcessingOperationQueue;
	NSOperationQueue* _verifyMediaServerAvailableOperationQueue;
	TVHKMediaServerManager* _mediaServerManager;
	NSMutableSet* _mutableMediaLibraries;

}

@property (assign,nonatomic) BOOL started;                                                                //@synthesize started=_started - In the implementation block
@property (nonatomic,retain) TVHKMediaServerDiscoveryConfiguration * discoveryConfiguration;              //@synthesize discoveryConfiguration=_discoveryConfiguration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialProcessingOperationQueue;                           //@synthesize serialProcessingOperationQueue=_serialProcessingOperationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * verifyMediaServerAvailableOperationQueue;                 //@synthesize verifyMediaServerAvailableOperationQueue=_verifyMediaServerAvailableOperationQueue - In the implementation block
@property (nonatomic,retain) TVHKMediaServerManager * mediaServerManager;                                 //@synthesize mediaServerManager=_mediaServerManager - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableMediaLibraries;                                        //@synthesize mutableMediaLibraries=_mutableMediaLibraries - In the implementation block
@property (nonatomic,readonly) unsigned long long accessMode;                                             //@synthesize accessMode=_accessMode - In the implementation block
@property (nonatomic,copy,readonly) NSSet * mediaLibraries; 
@property (nonatomic,copy,readonly) NSSet * connectableMediaLibraries; 
@property (nonatomic,copy,readonly) NSSet * connectedMediaLibraries; 
@property (assign,nonatomic) BOOL allowsCaching;                                                          //@synthesize allowsCaching=_allowsCaching - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionDispatchQueue;                        //@synthesize completionDispatchQueue=_completionDispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationDispatchQueue;                      //@synthesize notificationDispatchQueue=_notificationDispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)automaticallyNotifiesObserversOfDiscoveryConfiguration;
+(BOOL)automaticallyNotifiesObserversOfStarted;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_start;
-(BOOL)started;
-(void)setStarted:(BOOL)arg1 ;
-(NSSet *)mediaLibraries;
-(void)_handleNetworkReachabilityDidChangeNotification:(id)arg1 ;
-(void)mediaServerManager:(id)arg1 verifyMediaServerIsAvailable:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)accessMode;
-(NSObject*<OS_dispatch_queue>)completionDispatchQueue;
-(void)setCompletionDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_enqueueAsyncProcessingBlock:(/*^block*/id)arg1 ;
-(id)_operationWithBlock:(/*^block*/id)arg1 ;
-(void)_enqueueSyncProcessingBlock:(/*^block*/id)arg1 ;
-(BOOL)allowsCaching;
-(void)_postNotificationWithNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)notificationDispatchQueue;
-(void)setNotificationDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAllowsCaching:(BOOL)arg1 ;
-(void)_startObservingMediaServerDiscoverySettings:(id)arg1 ;
-(void)_stopObservingMediaServerDiscoverySettings:(id)arg1 ;
-(void)_stopAndNotify:(BOOL)arg1 ;
-(NSMutableSet *)mutableMediaLibraries;
-(NSSet *)connectedMediaLibraries;
-(void)_handleUpdatedMediaServerDiscoveryConfiguration:(id)arg1 ;
-(void)_addMediaLibrariesWithMediaServers:(id)arg1 ;
-(void)_removeMediaLibrariesWithMediaServers:(id)arg1 ;
-(id)mediaLibraryForMediaServerIdentifier:(id)arg1 ;
-(NSOperationQueue *)verifyMediaServerAvailableOperationQueue;
-(void)_disconnectAllMediaLibraries;
-(TVHKMediaServerDiscoveryConfiguration *)discoveryConfiguration;
-(void)_startObservingDeviceSleepNotifications;
-(void)_startObservingNetworkReachabilityCenter;
-(void)_startMediaServerManagerWithDiscoveryConfiguration:(id)arg1 ;
-(NSOperationQueue *)serialProcessingOperationQueue;
-(void)_stopMediaServerManagerAndNotify:(BOOL)arg1 ;
-(void)_stopObservingDeviceSleepNotifications;
-(void)_stopObservingNetworkReachabilityCenter;
-(void)_startObservingMediaServerManager:(id)arg1 ;
-(void)setMediaServerManager:(TVHKMediaServerManager *)arg1 ;
-(TVHKMediaServerManager *)mediaServerManager;
-(void)_stopObservingMediaServerManager:(id)arg1 ;
-(void)_removeAllMediaLibrariesAndNotify:(BOOL)arg1 ;
-(void)_disconnectMediaLibraries:(id)arg1 ;
-(void)_removeMediaLibraries:(id)arg1 andNotify:(BOOL)arg2 ;
-(void)setDiscoveryConfiguration:(TVHKMediaServerDiscoveryConfiguration *)arg1 ;
-(void)_addMediaLibraries:(id)arg1 ;
-(id)initWithAccessMode:(unsigned long long)arg1 ;
-(NSSet *)connectableMediaLibraries;
-(void)restartIfNotConnectedToAnyMediaLibraries;
-(void)_logDiscoveredMediaServers;
-(void)setSerialProcessingOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setVerifyMediaServerAvailableOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setMutableMediaLibraries:(NSMutableSet *)arg1 ;
@end

