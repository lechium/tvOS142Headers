//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "RPMessageable-Protocol.h"
#import "RPSubDaemonable-Protocol.h"

@class CUBLEServer, CUBluetoothScalablePipe, CUBonjourAdvertiser, CUBonjourBrowser, CUHomeKitManager, CUNetLinkManager, CUSleepWakeMonitor, CUSystemMonitor, CUTCPServer, CUWiFiManager, NSData, NSMutableDictionary, NSMutableSet, NSString, NSUserDefaults, NSXPCInterface, NSXPCListener, RPCompanionLinkDevice, RPConnection, RPHIDDaemon, RPHomeKitManager, RPMediaControlDaemon, RPSiriDaemon, RPTextInputDaemon, SFClient, SFDeviceDiscovery, SFService;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface RPCompanionLinkDaemon : NSObject <NSXPCListenerDelegate, RPMessageable, RPSubDaemonable>
{
    _Bool _activateCalled;	// 8 = 0x8
    NSMutableDictionary *_activeDevices;	// 16 = 0x10
    int _airplayBuddyNotReachableState;	// 24 = 0x18
    int _airplayLeaderState;	// 28 = 0x1c
    NSMutableDictionary *_bleDevices;	// 32 = 0x20
    SFDeviceDiscovery *_bleActionDiscovery;	// 40 = 0x28
    unsigned int _bleActionDiscoveryID;	// 48 = 0x30
    NSMutableDictionary *_bleClientConnections;	// 56 = 0x38
    SFDeviceDiscovery *_bleDiscovery;	// 64 = 0x40
    unsigned long long _bleDiscoveryControlFlags;	// 72 = 0x48
    _Bool _bleDiscoveryForce;	// 80 = 0x50
    unsigned int _bleDiscoveryID;	// 84 = 0x54
    _Bool _bleDiscoveryScreenOff;	// 88 = 0x58
    SFService *_bleNeedsCLinkAdvertiser;	// 96 = 0x60
    NSMutableDictionary *_bleNeedsCLinkDevices;	// 104 = 0x68
    SFDeviceDiscovery *_bleNeedsCLinkScanner;	// 112 = 0x70
    unsigned int _bleNeedsCLinkScannerID;	// 120 = 0x78
    _Bool _bleProximityDetection;	// 124 = 0x7c
    CUBLEServer *_bleServer;	// 128 = 0x80
    NSMutableSet *_bleServerConnections;	// 136 = 0x88
    CUBonjourAdvertiser *_bonjourAdvertiser;	// 144 = 0x90
    CUBonjourAdvertiser *_bonjourAWDLAdvertiser;	// 152 = 0x98
    _Bool _bonjourAWDLAdvertiserForce;	// 160 = 0xa0
    NSMutableDictionary *_bonjourAWDLDevices;	// 168 = 0xa8
    CUBonjourBrowser *_bonjourBrowser;	// 176 = 0xb0
    CUBonjourBrowser *_bonjourBrowserAWDL;	// 184 = 0xb8
    _Bool _bonjourBrowserAWDLForce;	// 192 = 0xc0
    unsigned long long _bonjourReevaluateNextTicks;	// 200 = 0xc8
    NSObject<OS_dispatch_source> *_bonjourReevaluateTimer;	// 208 = 0xd0
    NSData *_btAdvAddrData;	// 216 = 0xd8
    NSString *_btAdvAddrStr;	// 224 = 0xe0
    CUSystemMonitor *_btAdvAddrMonitor;	// 232 = 0xe8
    _Bool _prefBTPipeEnabled;	// 240 = 0xf0
    CUBluetoothScalablePipe *_btPipe;	// 248 = 0xf8
    RPConnection *_btPipeConnection;	// 256 = 0x100
    unsigned int _cnxIDLast;	// 264 = 0x108
    NSString *_deviceAuthTagStr;	// 272 = 0x110
    NSData *_deviceAWDLRandomID;	// 280 = 0x118
    NSData *_discoveryNonceData;	// 288 = 0x120
    SFClient *_duetSyncClient;	// 296 = 0x128
    _Bool _disabled;	// 304 = 0x130
    NSMutableDictionary *_interestEvents;	// 312 = 0x138
    NSMutableDictionary *_interestPeers;	// 320 = 0x140
    _Bool _invalidateCalled;	// 328 = 0x148
    _Bool _invalidateDone;	// 329 = 0x149
    _Bool _fixedSoundBoardNameIssue;	// 330 = 0x14a
    NSData *_homeKitAuthTag;	// 336 = 0x150
    _Bool _homeKitForceGetIdentity;	// 344 = 0x158
    _Bool _homeKitGettingIdentity;	// 345 = 0x159
    NSData *_homeKitIRK;	// 352 = 0x160
    NSData *_homeKitLTPK;	// 360 = 0x168
    CUHomeKitManager *_homeKitManager;	// 368 = 0x170
    NSData *_homeKitRotatingID;	// 376 = 0x178
    _Bool _homeKitWaiting;	// 384 = 0x180
    CUNetLinkManager *_netLinkManager;	// 392 = 0x188
    _Bool _mediaRemoteIDGetting;	// 400 = 0x190
    _Bool _mediaRouteIDGetting;	// 401 = 0x191
    _Bool _miscStarted;	// 402 = 0x192
    NSObject<OS_os_transaction> *_osTransaction;	// 408 = 0x198
    RPConnection *_personalCnx;	// 416 = 0x1a0
    _Bool _receiveHomeKitPairingUpdated;	// 424 = 0x1a8
    NSMutableDictionary *_registeredEvents;	// 432 = 0x1b0
    NSMutableSet *_registeredProfileIDs;	// 440 = 0x1b8
    NSMutableDictionary *_registeredRequests;	// 448 = 0x1c0
    RPHomeKitManager *_rpHomeKitManager;	// 456 = 0x1c8
    unsigned int _sessionIDLast;	// 464 = 0x1d0
    _Bool _serverBonjourInfraPairing;	// 468 = 0x1d4
    CUSleepWakeMonitor *_sleepWakeMonitor;	// 472 = 0x1d8
    NSUserDefaults *_soundBoardPrefs;	// 480 = 0x1e0
    _Bool _soundBoardUserLeader;	// 488 = 0x1e8
    _Bool _soundBoardUserLeaderKVO;	// 489 = 0x1e9
    unsigned long long _startTicks;	// 496 = 0x1f0
    unsigned long long _startTicksFull;	// 504 = 0x1f8
    RPConnection *_stereoCnx;	// 512 = 0x200
    CUSystemMonitor *_systemMonitor;	// 520 = 0x208
    NSMutableDictionary *_tcpClientConnections;	// 528 = 0x210
    NSMutableSet *_tcpServerConnections;	// 536 = 0x218
    CUTCPServer *_tcpServer;	// 544 = 0x220
    NSMutableDictionary *_unauthDevices;	// 552 = 0x228
    NSData *_uniqueIDData;	// 560 = 0x230
    NSString *_uniqueIDStr;	// 568 = 0x238
    CUWiFiManager *_wifiManager;	// 576 = 0x240
    unsigned int _xidLast;	// 584 = 0x248
    NSMutableSet *_xpcConnections;	// 592 = 0x250
    NSXPCInterface *_xpcClientInterface;	// 600 = 0x258
    NSXPCInterface *_xpcServerInterface;	// 608 = 0x260
    NSXPCListener *_xpcListener;	// 616 = 0x268
    unsigned int _xpcLastID;	// 624 = 0x270
    NSMutableDictionary *_xpcMatchingMap;	// 632 = 0x278
    _Bool _prefAppSignIn;	// 640 = 0x280
    _Bool _prefBLEClient;	// 641 = 0x281
    _Bool _prefClientEnabled;	// 642 = 0x282
    _Bool _prefCommunal;	// 643 = 0x283
    _Bool _prefHomeKitConfigured;	// 644 = 0x284
    _Bool _prefHomeKitEnabled;	// 645 = 0x285
    _Bool _prefIPEnabled;	// 646 = 0x286
    unsigned int _prefMaxConnectionCount;	// 648 = 0x288
    _Bool _prefServerBonjourAlways;	// 652 = 0x28c
    _Bool _prefServerBonjourOpportunitistic;	// 653 = 0x28d
    _Bool _prefServerEnabled;	// 654 = 0x28e
    _Bool _prefServerShouldRun;	// 655 = 0x28f
    RPHIDDaemon *_hidDaemon;	// 656 = 0x290
    _Bool _prefHIDEnabled;	// 664 = 0x298
    RPMediaControlDaemon *_mediaControlDaemon;	// 672 = 0x2a0
    _Bool _prefMediaControlEnabled;	// 680 = 0x2a8
    RPSiriDaemon *_siriDaemon;	// 688 = 0x2b0
    _Bool _prefSiriEnabled;	// 696 = 0x2b8
    RPTextInputDaemon *_textInputDaemon;	// 704 = 0x2c0
    _Bool _prefTextInputEnabled;	// 712 = 0x2c8
    _Bool _prefTouchEnabled;	// 713 = 0x2c9
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 720 = 0x2d0
    RPCompanionLinkDevice *_localDeviceInfo;	// 728 = 0x2d8
    NSMutableSet *_activeServers;	// 736 = 0x2e0
    NSMutableDictionary *_activeSessions;	// 744 = 0x2e8
}

+ (id)sharedCompanionLinkDaemon;	// IMP=0x0000000100009204
- (void).cxx_destruct;	// IMP=0x00000001000276b0
@property(retain, nonatomic) NSMutableDictionary *activeSessions; // @synthesize activeSessions=_activeSessions;
@property(retain, nonatomic) NSMutableSet *activeServers; // @synthesize activeServers=_activeServers;
@property(readonly, nonatomic) RPCompanionLinkDevice *localDeviceInfo; // @synthesize localDeviceInfo=_localDeviceInfo;
- (void)setDispatchQueue:(id)arg1;	// IMP=0x0000000100027674
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x00000001000275f8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100027064
- (void)_sessionHandlePeerDisconnect:(id)arg1;	// IMP=0x0000000100026d40
- (void)_sessionHandleStopRequest:(id)arg1 options:(id)arg2 cnx:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010002687c
- (void)_sessionHandleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100025ccc
- (void)sessionStopSend:(id)arg1 session:(id)arg2 xpcID:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010002594c
- (void)sessionStartSend:(id)arg1 session:(id)arg2 xpcID:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100025360
- (_Bool)_allowMessageForRegistrationOptions:(id)arg1 cnx:(id)arg2;	// IMP=0x00000001000252c4
- (void)_receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 unauth:(_Bool)arg5 cnx:(id)arg6;	// IMP=0x0000000100024f14
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 xpcID:(unsigned int)arg4 options:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100024c34
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100024b84
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100024ae4
- (void)deregisterRequestID:(id)arg1;	// IMP=0x0000000100024a44
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002487c
- (void)_registerConnectionRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000246b4
- (void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 unauth:(_Bool)arg4 cnx:(id)arg5;	// IMP=0x0000000100024324
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100023a0c
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100023970
- (void)deregisterEventID:(id)arg1;	// IMP=0x00000001000238d0
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100023708
- (id)_filterHomeKitUserIdentifiers:(id)arg1;	// IMP=0x00000001000236f8
- (void)_homeKitUpdateUserIdentifiers;	// IMP=0x00000001000234f8
- (void)_homeKitUpdateInfo:(_Bool)arg1;	// IMP=0x0000000100022fe4
- (void)_homeKitSelfAccessoryUpdated;	// IMP=0x0000000100022b80
- (void)_homeKitSelfAccessoryMediaSystemUpdated:(int)arg1;	// IMP=0x000000010002203c
- (void)_homeKitSelfAccessoryMediaAccessUpdated;	// IMP=0x0000000100021d50
- (void)_homeKitIdentityUpdated:(id)arg1 error:(id)arg2;	// IMP=0x0000000100021900
- (void)_homeKitGetUserInfo:(id)arg1;	// IMP=0x00000001000217b8
- (id)_homeKitDecryptRotatingIDForBonjourDevice:(id)arg1;	// IMP=0x00000001000215c8
- (_Bool)_homeKitAuthMatchForBonjourDevice:(id)arg1;	// IMP=0x000000010002147c
- (void)_homeKitGetPairingIdentities;	// IMP=0x0000000100021340
- (void)_homeKitPairingUpdated:(id)arg1;	// IMP=0x000000010002126c
- (void)_homeKitEnsureStopped;	// IMP=0x0000000100021144
- (void)_homeKitEnsureStarted;	// IMP=0x0000000100020c70
- (id)_getAppleID;	// IMP=0x0000000100020c28
- (void)_textInputEnsureStopped;	// IMP=0x0000000100020b90
- (void)_textInputEnsureStarted;	// IMP=0x0000000100020a58
- (void)_stereoDeviceUpdate:(int)arg1;	// IMP=0x000000010001fd38
- (void)_siriEnsureStopped;	// IMP=0x000000010001fca0
- (void)_siriEnsureStarted;	// IMP=0x000000010001fb68
- (void)_reachabilityEnsureStopped;	// IMP=0x000000010001fadc
- (void)_reachabilityEnsureStarted;	// IMP=0x000000010001fa08
- (void)_personalDeviceUpdate;	// IMP=0x000000010001f6b0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010001f4d8
- (void)_miscHandleSpeakRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f2b4
- (void)_miscHandleLaunchAppRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ee5c
- (void)_miscEnsureStopped;	// IMP=0x000000010001eddc
- (void)_miscEnsureStarted;	// IMP=0x000000010001ea28
- (void)_mediaRouteIDGet;	// IMP=0x000000010001e724
- (void)_mediaRemoteIDGet;	// IMP=0x000000010001e404
- (void)_mediaControlEnsureStopped;	// IMP=0x000000010001e36c
- (void)_mediaControlEnsureStarted;	// IMP=0x000000010001e1a0
- (void)_localDeviceCleanup;	// IMP=0x000000010001e130
- (void)_localDeviceUpdate;	// IMP=0x000000010001cd54
- (void)_interestSendEventID:(id)arg1 event:(id)arg2;	// IMP=0x000000010001cbe4
- (void)_interestRemoveForCnx:(id)arg1;	// IMP=0x000000010001c8f8
- (void)_interestReceived:(id)arg1 cnx:(id)arg2;	// IMP=0x000000010001c3a0
- (void)interestDeregisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3;	// IMP=0x000000010001c16c
- (void)interestRegisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3;	// IMP=0x000000010001bee0
- (void)_hidEnsureStopped;	// IMP=0x000000010001be48
- (void)_hidEnsureStarted;	// IMP=0x000000010001bd10
- (void)_forEachMatchingDestinationID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001bba4
- (void)_forEachConnectionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001b780
- (id)findUnauthDeviceForIdentifier:(id)arg1;	// IMP=0x000000010001b584
- (id)_findDeviceWithDevice:(id)arg1 deviceMap:(id)arg2 matchedIdentifier:(id *)arg3;	// IMP=0x000000010001b420
- (id)_findConnectionByID:(id)arg1;	// IMP=0x000000010001b260
- (id)findConnectedDeviceForIdentifier:(id)arg1 controlFlags:(unsigned long long)arg2 cnx:(id *)arg3;	// IMP=0x000000010001af34
- (void)_duetSyncEnsureStopped;	// IMP=0x000000010001ae9c
- (void)_duetSyncEnsureStarted;	// IMP=0x000000010001add4
- (id)_discoveryNonceOrRotate:(_Bool)arg1;	// IMP=0x000000010001ad00
- (void)_disconnectUnpairedDevices;	// IMP=0x000000010001a9ec
- (void)_disconnectUnauthConnections;	// IMP=0x000000010001a858
- (void)_disconnectRemovedSharedHomeDevices;	// IMP=0x000000010001a544
- (_Bool)_destinationID:(id)arg1 matchesCnx:(id)arg2;	// IMP=0x000000010001a20c
- (void)_connectionStateChanged:(int)arg1 cnx:(id)arg2;	// IMP=0x0000000100019e48
- (void)_connectionConfigureCommon:(id)arg1;	// IMP=0x0000000100019b2c
- (int)_airPlayLeaderStateUncached;	// IMP=0x0000000100019880
- (void)_activeDeviceChanged:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x0000000100019734
- (void)_activeDeviceChangedForConnection:(id)arg1 bonjourDevice:(id)arg2;	// IMP=0x0000000100019570
- (void)_activeDeviceRemoved:(id)arg1 cnx:(id)arg2;	// IMP=0x000000010001913c
- (void)_activeDeviceAdded:(id)arg1 cnx:(id)arg2;	// IMP=0x0000000100018dec
- (void)_btPipeSyncKeysIfNeeded;	// IMP=0x0000000100018bac
- (void)_btPipeConnectionEnded:(id)arg1;	// IMP=0x0000000100018b64
- (void)_btPipeConnectionStart;	// IMP=0x0000000100018594
- (void)_btPipeHandleStateChanged;	// IMP=0x0000000100018494
- (void)_btPipeEnsureStopped;	// IMP=0x00000001000183e0
- (void)_btPipeEnsureStarted;	// IMP=0x0000000100018050
- (void)_bleServerHandleConnectionEnded:(id)arg1;	// IMP=0x0000000100017fd8
- (void)_bleServerHandleConnectionStarted:(id)arg1;	// IMP=0x0000000100017a44
- (void)_bleServerEnsureStopped;	// IMP=0x00000001000178a8
- (void)_bleServerEnsureStarted;	// IMP=0x0000000100017628
- (void)_serverTCPRemoveConnectionsWithIdentifier:(id)arg1 exceptConnection:(id)arg2;	// IMP=0x00000001000173c4
- (void)_serverTCPHandleConnectionEnded:(id)arg1;	// IMP=0x000000010001734c
- (void)_serverTCPHandleConnectionStarted:(id)arg1;	// IMP=0x0000000100016cc8
- (void)_serverTCPEnsureStopped;	// IMP=0x0000000100016b2c
- (void)_serverTCPEnsureStarted;	// IMP=0x00000001000168f8
- (void)_serverBTAddressChanged;	// IMP=0x0000000100016778
- (void)_serverBTAddressMonitorEnsureStopped;	// IMP=0x00000001000166e0
- (void)_serverBTAddressMonitorEnsureStarted;	// IMP=0x0000000100016594
- (void)_serverBonjourAWDLAdvertiserUpdateTXT;	// IMP=0x0000000100016364
- (void)_serverBonjourAWDLAdvertiserEnsureStopped;	// IMP=0x0000000100016290
- (void)_serverBonjourAWDLAdvertiserEnsureStarted;	// IMP=0x0000000100015fec
- (void)_serverBonjourUpdateTXT;	// IMP=0x0000000100015be4
- (id)_serverBonjourAuthTagStringWithData:(id)arg1;	// IMP=0x0000000100015a88
- (id)_serverBonjourAuthTagString;	// IMP=0x00000001000159c8
- (void)_serverBonjourEnsureStopped;	// IMP=0x0000000100015930
- (void)_serverBonjourEnsureStarted;	// IMP=0x0000000100015734
- (_Bool)_serverBonjourShouldRun;	// IMP=0x00000001000156cc
- (void)_serverBLENeedsCLinkScannerDeviceLost:(id)arg1;	// IMP=0x0000000100015550
- (void)_serverBLENeedsCLinkScannerDeviceFound:(id)arg1;	// IMP=0x00000001000152f0
- (_Bool)_serverBLENeedsCLinkScannerScreenOff;	// IMP=0x0000000100015244
- (void)_serverBLENeedsCLinkScannerEnsureStopped;	// IMP=0x000000010001517c
- (void)_serverBLENeedsCLinkScannerEnsureStarted;	// IMP=0x0000000100014d94
- (void)_serverEnsureStopped;	// IMP=0x0000000100014d30
- (void)_serverEnsureStarted;	// IMP=0x0000000100014c30
- (void)_clientReportChangedDevice:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x0000000100014af4
- (void)_clientReportLostDevice:(id)arg1;	// IMP=0x00000001000149c0
- (void)_clientReportFoundDevice:(id)arg1;	// IMP=0x000000010001488c
- (void)_clientOnDemandDiscoveryStart:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x0000000100014500
- (void)_clientConnectionEndedUnauth:(id)arg1 publicID:(id)arg2;	// IMP=0x0000000100014400
- (_Bool)_clientConnectionStartUnauth:(id)arg1 client:(id)arg2 publicID:(id)arg3 xpcCnx:(id)arg4 error:(id *)arg5;	// IMP=0x0000000100013a68
- (void)_clientConnectionEnded:(id)arg1 uniqueID:(id)arg2;	// IMP=0x0000000100013900
- (_Bool)_clientConnectionStartOnDemand:(id)arg1 xpcCnx:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100012a00
- (void)_clientConnectionStart:(id)arg1 controlFlags:(unsigned long long)arg2 uniqueID:(id)arg3 identity:(id)arg4;	// IMP=0x0000000100012228
- (void)_clientBonjourAWDLBrowserLostDevice:(id)arg1;	// IMP=0x000000010001211c
- (void)_clientBonjourAWDLBrowserFoundDevice:(id)arg1;	// IMP=0x0000000100011868
- (_Bool)_clientBonjourAWDLBrowserShouldRun;	// IMP=0x00000001000116d8
- (void)_clientBonjourAWDLBrowserEnsureStopped;	// IMP=0x0000000100011624
- (void)_clientBonjourAWDLBrowserEnsureStarted;	// IMP=0x00000001000113e0
- (void)_clientBonjourReevaluateUnauthDevices;	// IMP=0x00000001000111ac
- (void)_clientBonjourReevaluateAllDevices;	// IMP=0x0000000100010e28
- (void)_clientBonjourLostUnauthDevice:(id)arg1;	// IMP=0x0000000100010c1c
- (void)_clientBonjourFoundUnauthDevice:(id)arg1;	// IMP=0x00000001000108e8
- (void)_clientBonjourLostDevice:(id)arg1;	// IMP=0x0000000100010634
- (_Bool)_clientBonjourFoundDevice:(id)arg1 reevaluate:(_Bool)arg2;	// IMP=0x000000010000fc3c
- (void)_clientBonjourEnsureStopped;	// IMP=0x000000010000fb8c
- (void)_clientBonjourEnsureStarted;	// IMP=0x000000010000f8d4
- (_Bool)_clientBLENeedsCLinkAdvertiserShouldRun;	// IMP=0x000000010000f750
- (void)_clientBLENeedsCLinkAdvertiserEnsureStopped;	// IMP=0x000000010000f6b8
- (void)_clientBLENeedsCLinkAdvertiserEnsureStarted;	// IMP=0x000000010000f448
- (void)_clientBLEDiscoveryDeviceLost:(id)arg1 force:(_Bool)arg2;	// IMP=0x000000010000f114
- (void)_clientBLEDiscoveryDeviceFound:(id)arg1;	// IMP=0x000000010000ec20
- (void)_clientBLEDiscoveryEnsureStopped;	// IMP=0x000000010000eb58
- (void)_clientBLEDiscoveryEnsureStarted;	// IMP=0x000000010000e5a0
- (_Bool)_clientBLEActionDiscoveryShouldRun;	// IMP=0x000000010000e598
- (void)_clientBLEActionDiscoveryEnsureStopped;	// IMP=0x000000010000e4c8
- (void)_clientBLEActionDiscoveryEnsureStarted;	// IMP=0x000000010000dfec
- (void)_clientEnsureStopped;	// IMP=0x000000010000df38
- (void)_clientEnsureStarted;	// IMP=0x000000010000de30
- (void)_updateForXPCServerChange;	// IMP=0x000000010000dc04
- (void)_updateForXPCClientChange;	// IMP=0x000000010000d804
- (void)_updateAssertions;	// IMP=0x000000010000d53c
- (void)_update;	// IMP=0x000000010000d044
- (void)_reportXPCMatchingDiscoveryCLink;	// IMP=0x000000010000cdc8
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x000000010000cc50
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c918
- (void)prefsChanged;	// IMP=0x000000010000be18
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x000000010000b8f8
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x000000010000b6cc
- (void)_invalidated;	// IMP=0x000000010000b598
- (void)_invalidate;	// IMP=0x000000010000b280
- (void)invalidate;	// IMP=0x000000010000b218
- (void)_activate;	// IMP=0x000000010000afc0
- (void)activate;	// IMP=0x000000010000af40
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x00000001000092e4
- (id)init;	// IMP=0x0000000100009270

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
