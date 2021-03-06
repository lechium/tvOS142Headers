//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class CUSystemMonitor, IDSService, NSMutableArray, NSMutableDictionary, NSString, RPCompanionLinkClient, SDActivityAdvertiser, SDActivityScanner;

__attribute__((visibility("hidden")))
@interface SDActivityPayloadManager : NSObject <IDSServiceDelegate>
{
    IDSService *_activityService;	// 8 = 0x8
    IDSService *_encryptionService;	// 16 = 0x10
    RPCompanionLinkClient *_rapportDiscoveryClient;	// 24 = 0x18
    _Bool _restrictionsDisabled;	// 32 = 0x20
    SDActivityAdvertiser *_advertiser;	// 40 = 0x28
    SDActivityScanner *_scanner;	// 48 = 0x30
    CUSystemMonitor *_systemMonitor;	// 56 = 0x38
    _Bool _hsa2Enabled;	// 64 = 0x40
    NSMutableDictionary *_uniqueIDToKeyReplyDate;	// 72 = 0x48
    NSMutableDictionary *_messageIdentifierToKeyRequestRecords;	// 80 = 0x50
    NSMutableDictionary *_messageIdentifierToReplyRecords;	// 88 = 0x58
    NSMutableDictionary *_messageIdentifierToRequestRecords;	// 96 = 0x60
    int _systemPreferenceChangedToken;	// 104 = 0x68
    NSMutableArray *_cachedActivityPayloadsForDemo;	// 112 = 0x70
}

+ (id)sharedPayloadManager;	// IMP=0x00000001000f5d54
- (void).cxx_destruct;	// IMP=0x00000001000ff1b0
- (void)handleNewAdvertisementWithpayloadRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000fedf4
- (void)sendActivityPayloadWithAdvertisementData:(id)arg1 forAdvertisementPayload:(id)arg2 activityIdentifier:(id)arg3 activityPayload:(id)arg4;	// IMP=0x00000001000fe6bc
- (void)setUpHandoffPreferenceMonitor;	// IMP=0x00000001000fe6b8
- (id)createRapportClientWithDestinationDevice:(id)arg1;	// IMP=0x00000001000fe554
- (void)logDashboardHandoffRequestViaTransportLinkType:(int)arg1 type:(id)arg2 success:(_Bool)arg3 rtt:(double)arg4;	// IMP=0x00000001000fe334
- (void)setDecryptionKeyDataRepresentation:(id)arg1 forDeviceIdentifier:(id)arg2;	// IMP=0x00000001000fe0d0
- (id)protobufDataFromRequest:(id)arg1;	// IMP=0x00000001000fdfd8
- (id)requestFromProtobufData:(id)arg1;	// IMP=0x00000001000fdf30
- (id)dataFromUUID:(id)arg1;	// IMP=0x00000001000fdeb4
- (void)messageWithIdentifier:(id)arg1 didSendWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000001000fdb5c
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000001000fdabc
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;	// IMP=0x00000001000fda5c
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000fd9fc
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000fd978
- (void)handlePayloadReply:(id)arg1 forRequestRecord:(id)arg2 fromDevice:(id)arg3 transportLinkType:(int)arg4;	// IMP=0x00000001000fd400
- (void)handlePayloadReplyProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000fd18c
- (void)handlePayloadReplyRapport:(id)arg1 options:(id)arg2 forRequestRecord:(id)arg3 fromDevice:(id)arg4;	// IMP=0x00000001000fce90
- (void)activityPayloadReplySuccess:(id)arg1;	// IMP=0x00000001000fcd24
- (void)sendIDSActivityPayloadReply:(id)arg1 withReplyRecord:(id)arg2;	// IMP=0x00000001000fc788
- (void)handlePayloadRequest:(id)arg1 fromIDSDevice:(id)arg2 withRequestIdentifier:(id)arg3 transportType:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000fbf3c
- (void)handlePayloadRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000fbd3c
- (void)handlePayloadRequestRapport:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000fb7d8
- (void)handleEncryptionKeyReply:(id)arg1 forRequestRecord:(id)arg2 fromDevice:(id)arg3 transportLinkType:(int)arg4;	// IMP=0x00000001000fb500
- (void)handleEncryptionKeyReplyRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000fb290
- (void)handleEncryptionKeyReplyRapport:(id)arg1 options:(id)arg2 forRequestRecord:(id)arg3 fromDevice:(id)arg4;	// IMP=0x00000001000faf94
- (void)handleEncryptionKeyRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000facdc
- (void)handleEncryptionKeyRequestRapport:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000fa894
- (void)handleEncyptionKeyRequest:(id)arg1 fromIDSDevice:(id)arg2 withRequestIdentifier:(id)arg3 transportType:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000fa5f0
- (void)sendIDSActivityPayloadRequest:(id)arg1 withRequestRecord:(id)arg2 desiredTimeout:(double)arg3;	// IMP=0x00000001000f9df8
- (void)sendRapportActivityPayloadRequest:(id)arg1 withRequestRecord:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000f94b8
- (void)sendActivityPayloadRequestToDeviceIdentifier:(id)arg1 withAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000f8d28
- (void)sendEncryptionKeyReplyRequestToDevice:(id)arg1 reply:(id)arg2 requestIdentifier:(id)arg3;	// IMP=0x00000001000f88d8
- (void)sendIDSEncryptionKeyRequest:(id)arg1 withRequestRecord:(id)arg2 desiredTimeout:(double)arg3;	// IMP=0x00000001000f8128
- (void)sendRapportEncryptionKeyRequest:(id)arg1 withRequestRecord:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000f76c4
- (void)sendEncryptionKeyRequestToDeviceIdentifier:(id)arg1 previousKeyIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000f6f78
- (void)clearPersistedKeyRequests;	// IMP=0x00000001000f6f28
@property(readonly) NSString *state;
- (void)requestTimedOut:(id)arg1;	// IMP=0x00000001000f6738
- (id)idsDeviceWithUniqueID:(id)arg1 onService:(id)arg2;	// IMP=0x00000001000f65a0
- (void)setUpIDSServices;	// IMP=0x00000001000f6454
- (void)setUpRapport;	// IMP=0x00000001000f6148
- (void)setUpHSA2Monitor;	// IMP=0x00000001000f5fac
- (id)init;	// IMP=0x00000001000f5e10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

