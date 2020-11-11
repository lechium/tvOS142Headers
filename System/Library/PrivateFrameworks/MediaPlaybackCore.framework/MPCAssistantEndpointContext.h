/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MPCAssistantContext.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class MPCAssistantDiscovery, NSObject;

@interface MPCAssistantEndpointContext : MPCAssistantContext {

	MPCAssistantDiscovery* _discoveryLogical;
	MPCAssistantDiscovery* _discoveryAudio;
	MPCAssistantDiscovery* _discoveryEndpoint;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_group> _modificationInProgress;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> modificationInProgress;              //@synthesize modificationInProgress=_modificationInProgress - In the implementation block
-(id)init;
-(void)_setOutputDevices:(id)arg1 onEndpoint:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_discoverLocalEndpointFromDeviceInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateDiscoverableDeviceList:(id)arg1 deviceInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldSearchForLogicalDevices;
-(void)modifySystemMusicContextForDestination:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_group>)modificationInProgress;
-(void)setModificationInProgress:(NSObject*<OS_dispatch_group>)arg1 ;
@end

