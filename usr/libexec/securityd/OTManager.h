//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "OTControlProtocol-Protocol.h"

@class CKContainer, CKKSAccountStateTracker, CKKSLockStateTracker, CKKSViewManager, NSMutableDictionary, NSString, NSXPCListener, OTRamp;
@protocol NSXPCProxyCreating, OS_dispatch_queue, OTAuthKitAdapter, OTDeviceInformationAdapter, OTSOSAdapter, OctagonFollowUpControllerProtocol;

__attribute__((visibility("hidden")))
@interface OTManager : NSObject <NSXPCListenerDelegate, OTControlProtocol>
{
    _Bool _sosEnabledForPlatform;	// 8 = 0x8
    id <NSXPCProxyCreating> _cuttlefishXPCConnection;	// 16 = 0x10
    id <OTSOSAdapter> _sosAdapter;	// 24 = 0x18
    id <OTAuthKitAdapter> _authKitAdapter;	// 32 = 0x20
    id <OTDeviceInformationAdapter> _deviceInformationAdapter;	// 40 = 0x28
    CKKSLockStateTracker *_lockStateTracker;	// 48 = 0x30
    CKKSAccountStateTracker *_accountStateTracker;	// 56 = 0x38
    CKContainer *_cloudKitContainer;	// 64 = 0x40
    CKKSViewManager *_viewManager;	// 72 = 0x48
    NSXPCListener *_listener;	// 80 = 0x50
    OTRamp *_gbmidRamp;	// 88 = 0x58
    OTRamp *_gbserialRamp;	// 96 = 0x60
    OTRamp *_gbAgeRamp;	// 104 = 0x68
    id <OctagonFollowUpControllerProtocol> _cdpd;	// 112 = 0x70
    NSMutableDictionary *_contexts;	// 120 = 0x78
    NSMutableDictionary *_clients;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_queue;	// 136 = 0x88
    Class _apsConnectionClass;	// 144 = 0x90
    Class _escrowRequestClass;	// 152 = 0x98
    Class _loggerClass;	// 160 = 0xa0
}

+ (id)resetManager:(_Bool)arg1 to:(id)arg2;	// IMP=0x0000000100050224
+ (id)manager;	// IMP=0x0000000100050100
- (void).cxx_destruct;	// IMP=0x000000010004cc44
@property(nonatomic) _Bool sosEnabledForPlatform; // @synthesize sosEnabledForPlatform=_sosEnabledForPlatform;
@property(readonly) Class loggerClass; // @synthesize loggerClass=_loggerClass;
@property(readonly) Class escrowRequestClass; // @synthesize escrowRequestClass=_escrowRequestClass;
@property(readonly) Class apsConnectionClass; // @synthesize apsConnectionClass=_apsConnectionClass;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *clients; // @synthesize clients=_clients;
@property(retain) NSMutableDictionary *contexts; // @synthesize contexts=_contexts;
@property(retain, nonatomic) id <OctagonFollowUpControllerProtocol> cdpd; // @synthesize cdpd=_cdpd;
@property(retain, nonatomic) OTRamp *gbAgeRamp; // @synthesize gbAgeRamp=_gbAgeRamp;
@property(retain, nonatomic) OTRamp *gbserialRamp; // @synthesize gbserialRamp=_gbserialRamp;
@property(retain, nonatomic) OTRamp *gbmidRamp; // @synthesize gbmidRamp=_gbmidRamp;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) CKKSViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(readonly) CKContainer *cloudKitContainer; // @synthesize cloudKitContainer=_cloudKitContainer;
@property(retain) CKKSAccountStateTracker *accountStateTracker; // @synthesize accountStateTracker=_accountStateTracker;
@property(retain, nonatomic) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(readonly) id <OTDeviceInformationAdapter> deviceInformationAdapter; // @synthesize deviceInformationAdapter=_deviceInformationAdapter;
@property(readonly) id <OTAuthKitAdapter> authKitAdapter; // @synthesize authKitAdapter=_authKitAdapter;
@property(readonly) id <OTSOSAdapter> sosAdapter; // @synthesize sosAdapter=_sosAdapter;
- (void)fetchUserControllableViewsSyncStatus:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010004c984
- (void)setUserControllableViewsSyncStatus:(id)arg1 contextID:(id)arg2 enabled:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010004c7fc
- (void)invalidateEscrowCache:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010004c60c
- (void)fetchEscrowRecords:(id)arg1 contextID:(id)arg2 forceFetch:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010004c410
- (void)setCDPEnabled:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010004c23c
- (void)getCDPStatus:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010004c05c
- (void)refetchCKKSPolicy:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010004be6c
- (void)tapToRadar:(id)arg1 description:(id)arg2 radar:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010004bd98
- (void)postCDPFollowupResult:(_Bool)arg1 type:(id)arg2 error:(id)arg3 containerName:(id)arg4 contextName:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000010004bb78
- (unsigned char)cliqueCDPTypeToFollowupContextType:(id)arg1;	// IMP=0x000000010004ba64
- (void)waitForOctagonUpgrade:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010004b900
- (_Bool)allContextsPause:(unsigned long long)arg1;	// IMP=0x000000010004b6f0
- (void)allContextsDisablePendingFlags;	// IMP=0x000000010004b584
- (void)allContextsHalt;	// IMP=0x000000010004b400
- (void)setSOSEnabledForPlatformFlag:(_Bool)arg1;	// IMP=0x000000010004b3f4
- (void)healthCheck:(id)arg1 context:(id)arg2 skipRateLimitingCheck:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010004b284
- (void)xpc24HrNotification;	// IMP=0x000000010004b1e0
- (void)joinWithRecoveryKey:(id)arg1 contextID:(id)arg2 recoveryKey:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010004ae10
- (void)createRecoveryKey:(id)arg1 contextID:(id)arg2 recoveryKey:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010004a978
- (id)cdpContextTypes;	// IMP=0x000000010004a938
- (void)setupAnalytics;	// IMP=0x000000010004a790
- (_Bool)ghostbustByAgeEnabled;	// IMP=0x000000010004a72c
- (_Bool)ghostbustBySerialEnabled;	// IMP=0x000000010004a6c8
- (_Bool)ghostbustByMidEnabled;	// IMP=0x000000010004a664
- (void)restore:(id)arg1 contextID:(id)arg2 bottleSalt:(id)arg3 entropy:(id)arg4 bottleID:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000010004a3ec
- (void)rpcVoucherWithConfiguration:(id)arg1 peerID:(id)arg2 permanentInfo:(id)arg3 permanentInfoSig:(id)arg4 stableInfo:(id)arg5 stableInfoSig:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x000000010004a154
- (void)rpcEpochWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049f4c
- (void)rpcJoinWithConfiguration:(id)arg1 vouchData:(id)arg2 vouchSig:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100049db8
- (void)rpcPrepareIdentityAsApplicantWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049c48
- (void)fetchEscrowContents:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100049ad8
- (void)fetchAllViableBottles:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100049968
- (void)peerDeviceNamesByPeerID:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000498b8
- (void)removeFriendsInClique:(id)arg1 context:(id)arg2 peerIDs:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100049714
- (void)leaveClique:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100049594
- (void)establish:(id)arg1 context:(id)arg2 altDSID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000493f0
- (void)resetAndEstablish:(id)arg1 context:(id)arg2 altDSID:(id)arg3 resetReason:(long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100049260
- (void)startOctagonStateMachine:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100049108
- (void)status:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100048e48
- (void)fetchCliqueStatus:(id)arg1 context:(id)arg2 configuration:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100048b94
- (void)fetchTrustStatus:(id)arg1 context:(id)arg2 configuration:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000489c0
- (void)fetchEgoPeerID:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100048808
- (void)clearAllContexts;	// IMP=0x0000000100048768
- (id)contextForContainerName:(id)arg1 contextID:(id)arg2 sosAdapter:(id)arg3 authKitAdapter:(id)arg4 lockStateTracker:(id)arg5 accountStateTracker:(id)arg6 deviceInformationAdapter:(id)arg7;	// IMP=0x00000001000484e4
- (id)contextForContainerName:(id)arg1 contextID:(id)arg2;	// IMP=0x0000000100048388
- (void)removeContextForContainerName:(id)arg1 contextID:(id)arg2;	// IMP=0x00000001000482a8
- (void)removeClientContextForContainerName:(id)arg1 clientName:(id)arg2;	// IMP=0x00000001000481a8
- (id)clientStateMachineForContainerName:(id)arg1 contextID:(id)arg2 clientName:(id)arg3;	// IMP=0x0000000100047ff4
@property(retain) id <NSXPCProxyCreating> cuttlefishXPCConnection; // @synthesize cuttlefishXPCConnection=_cuttlefishXPCConnection;
- (void)octagonSigningPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x000000010004739c
- (void)octagonEncryptionPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x0000000100047304
- (void)listOfEligibleBottledPeerRecords:(CDUnknownBlockType)arg1;	// IMP=0x0000000100047268
- (void)reset:(CDUnknownBlockType)arg1;	// IMP=0x00000001000471d0
- (void)scrubBottledPeer:(id)arg1 bottleID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010004713c
- (void)restore:(id)arg1 dsid:(id)arg2 secret:(id)arg3 escrowRecordID:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100047060
- (void)launchBottledPeer:(id)arg1 bottleID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100046f8c
- (void)preflightBottledPeer:(id)arg1 dsid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100046e30
- (void)handleIdentityChangeForSigningKey:(id)arg1 ForEncryptionKey:(id)arg2 ForPeerID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100046d00
- (void)notifyIDMSTrustLevelChangeForContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100046b74
- (void)signOut:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100046904
- (void)signIn:(id)arg1 container:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000466d0
- (void)ensureRampsInitialized;	// IMP=0x0000000100046360
- (void)registerForCircleChangedNotifications;	// IMP=0x0000000100046270
- (void)moveToCheckTrustedStateForContainer:(id)arg1 context:(id)arg2;	// IMP=0x00000001000461ec
- (_Bool)waitForReady:(id)arg1 context:(id)arg2 wait:(long long)arg3;	// IMP=0x0000000100046164
- (void)initializeOctagon;	// IMP=0x0000000100046014
- (id)initWithSOSAdapter:(id)arg1 lockStateTracker:(id)arg2 cloudKitClassDependencies:(id)arg3;	// IMP=0x0000000100045e98
- (id)initWithSOSAdapter:(id)arg1 authKitAdapter:(id)arg2 deviceInformationAdapter:(id)arg3 apsConnectionClass:(Class)arg4 escrowRequestClass:(Class)arg5 loggerClass:(Class)arg6 lockStateTracker:(id)arg7 cloudKitClassDependencies:(id)arg8 cuttlefishXPCConnection:(id)arg9 cdpd:(id)arg10;	// IMP=0x0000000100045b28
- (id)init;	// IMP=0x00000001000459cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

