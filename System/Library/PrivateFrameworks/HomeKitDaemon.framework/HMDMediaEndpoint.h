/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSSet, NSString, HMDMediaBrowser, NSObject, NSMutableArray, NSArray;

@interface HMDMediaEndpoint : HMFObject <HMFLogging> {

	id<HMFLocking> _lock;
	unsigned _connectionState;
	void* _retainedEndpoint;
	NSSet* _outputDeviceIdentifiers;
	NSString* _sessionIdentifier;
	NSString* _localizedName;
	NSString* _logID;
	HMDMediaBrowser* _browser;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _pendingBlocks;

}

@property (readonly) void* retainedEndpoint;                                        //@synthesize retainedEndpoint=_retainedEndpoint - In the implementation block
@property (nonatomic,readonly) void* externalDevice; 
@property (nonatomic,readonly) NSString * localizedName;                            //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSSet * outputDeviceIdentifiers;                       //@synthesize outputDeviceIdentifiers=_outputDeviceIdentifiers - In the implementation block
@property (assign,nonatomic) unsigned connectionState;                              //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingBlocks;                        //@synthesize pendingBlocks=_pendingBlocks - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                    //@synthesize logID=_logID - In the implementation block
@property (__weak) HMDMediaBrowser * browser;                                       //@synthesize browser=_browser - In the implementation block
@property (nonatomic,readonly) NSString * sessionIdentifier;                        //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * advertisements; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)localizedName;
-(id)initWithEndpoint:(void*)arg1 ;
-(BOOL)isConnected;
-(NSString *)sessionIdentifier;
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isEqualToEndpoint:(void*)arg1 ;
-(void*)externalDevice;
-(unsigned)connectionState;
-(void)setConnectionState:(unsigned)arg1 ;
-(NSMutableArray *)pendingBlocks;
-(NSString *)logID;
-(id)logIdentifier;
-(void)setPlaybackState:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMDMediaBrowser *)browser;
-(void)setBrowser:(HMDMediaBrowser *)arg1 ;
-(void)updateWithEndpoint:(id)arg1 ;
-(NSArray *)advertisements;
-(void)updateOutputDevicesAndConnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void*)retainedEndpoint;
-(void)setOutputDeviceIdentifiers:(NSSet *)arg1 ;
-(void)setRetainedEndpoint:(void*)arg1 ;
-(void)_updateOutputDevicesAndConnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_notifyPendingBlocksOfError:(id)arg1 ;
-(void)_updateOutputDeviceIdentifiers;
-(void)_connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSSet *)outputDeviceIdentifiers;
-(void*)copyOrigin;
-(void)_getPlaybackStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setPlaybackState:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)disconnectFromEndpoint:(void*)arg1 ;
-(void)registerForNowPlayingUpdates:(BOOL)arg1 ;
-(BOOL)doesContainAnyAccessory:(id)arg1 ;
-(void)evaluateIfMediaPlaybackStateChanged:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getPlaybackStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPendingBlocks:(NSMutableArray *)arg1 ;
@end

