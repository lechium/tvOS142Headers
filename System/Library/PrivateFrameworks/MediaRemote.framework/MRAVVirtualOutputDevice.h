/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRAVOutputDevice.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSData, NSDictionary, NSArray, NSXPCListenerEndpoint;

@interface MRAVVirtualOutputDevice : MRAVOutputDevice {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	NSString* _uid;
	NSString* _modelID;
	NSString* _firmwareVersion;
	NSString* _logicalDeviceID;
	NSString* _groupID;
	NSData* _MACAddress;
	NSDictionary* _modelSpecificInfo;
	NSString* _playingPairedDeviceName;
	NSString* _name;
	BOOL _canAccessRemoteAssets;
	BOOL _canAccessAppleMusic;
	BOOL _canAccessiCloudMusicLibrary;
	BOOL _canPlayEncryptedProgressiveDownloadAssets;
	BOOL _canFetchMediaDataFromSender;
	BOOL _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
	BOOL _isRemoteControllable;
	BOOL _canRelayCommunicationChannel;
	BOOL _supportsBufferedAirPlay;
	BOOL _supportsRapport;
	BOOL _isAddedToHomeKit;
	BOOL _isGroupLeader;
	BOOL _groupContainsGroupLeader;
	BOOL _airPlayReceiver;
	NSString* _parentGroupIdentifier;
	BOOL _isGroupable;
	BOOL _supportsBluetoothSharing;
	BOOL _isProxyGroupPlayer;
	BOOL _isPickedOnPairedDevice;
	float _batteryLevel;
	BOOL _hasBatteryLevel;
	BOOL _isLocalDevice;
	BOOL _supportsExternalScreen;
	unsigned _deviceType;
	unsigned _deviceSubType;
	BOOL _requiresAuthorization;
	BOOL _isVolumeControlAvailable;
	float _volume;
	NSString* _bluetoothID;
	BOOL _isUsingJSONProtocol;
	NSString* _currentBluetoothListeningMode;
	NSArray* _availableBluetoothListeningModes;
	NSXPCListenerEndpoint* _pipeEndpoint;
	NSData* _jsonDeviceDefinition;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * pipeEndpoint;              //@synthesize pipeEndpoint=_pipeEndpoint - In the implementation block
@property (nonatomic,readonly) NSData * jsonDeviceDefinition;                     //@synthesize jsonDeviceDefinition=_jsonDeviceDefinition - In the implementation block
-(id)name;
-(unsigned)deviceType;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)sourceInfo;
-(id)uid;
-(id)groupID;
-(void)setGroupID:(id)arg1 ;
-(id)parentGroupIdentifier;
-(float)batteryLevel;
-(unsigned)deviceSubtype;
-(BOOL)isRemoteControllable;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)isProxyGroupPlayer;
-(BOOL)groupContainsGroupLeader;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)isVolumeControlAvailable;
-(id)modelID;
-(id)firmwareVersion;
-(id)logicalDeviceID;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)isGroupLeader;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(BOOL)isGroupable;
-(BOOL)isDeviceGroupable;
-(BOOL)hasBatteryLevel;
-(BOOL)isLocalDevice;
-(BOOL)supportsExternalScreen;
-(BOOL)requiresAuthorization;
-(BOOL)isAddedToHomeKit;
-(id)bluetoothID;
-(id)MACAddress;
-(id)modelSpecificInfo;
-(BOOL)isUsingJSONProtocol;
-(BOOL)supportsBluetoothSharing;
-(id)playingPairedDeviceName;
-(BOOL)isPickedOnPairedDevice;
-(BOOL)supportsRapport;
-(id)currentBluetoothListeningMode;
-(id)availableBluetoothListeningModes;
-(id)initWithJSONData:(id)arg1 pipeEndpoint:(id)arg2 ;
-(NSXPCListenerEndpoint *)pipeEndpoint;
-(NSData *)jsonDeviceDefinition;
@end

