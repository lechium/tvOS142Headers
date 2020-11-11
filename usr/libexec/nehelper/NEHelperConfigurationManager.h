//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NEHelperDelegate-Protocol.h"

@class NEUserNotification, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface NEHelperConfigurationManager : NSObject <NEHelperDelegate>
{
    _Bool _entitled;	// 8 = 0x8
    _Bool _superEntitled;	// 9 = 0x9
    _Bool _isDevelopment;	// 10 = 0xa
    _Bool _hasProviderPermission;	// 11 = 0xb
    unsigned int _userUID;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *_applicationID;	// 24 = 0x18
    NSUUID *_userUUID;	// 32 = 0x20
    NSMutableDictionary *_filter;	// 40 = 0x28
    NSString *_clientName;	// 48 = 0x30
    NSString *_bundleID;	// 56 = 0x38
    NEUserNotification *_addNotification;	// 64 = 0x40
}

+ (void)handleUnsupportedConfiguration:(id)arg1;	// IMP=0x000000010001463c
+ (void)upgradeLegacyPluginConfigurationsForApps:(id)arg1 completionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100013f68
+ (id)copyUpgradeInfoForApp:(id)arg1 withPlugins:(id)arg2 legacyPluginType:(id)arg3;	// IMP=0x0000000100013be4
+ (id)createAppRulesFromMapping:(id)arg1 forConfiguration:(id)arg2;	// IMP=0x00000001000135bc
+ (void)checkAppForAppRules:(id)arg1 forConfiguration:(id)arg2;	// IMP=0x0000000100012e1c
- (void).cxx_destruct;	// IMP=0x0000000100014a80
@property(readonly) _Bool hasProviderPermission; // @synthesize hasProviderPermission=_hasProviderPermission;
@property(readonly) _Bool isDevelopment; // @synthesize isDevelopment=_isDevelopment;
@property(retain) NEUserNotification *addNotification; // @synthesize addNotification=_addNotification;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly) NSMutableDictionary *filter; // @synthesize filter=_filter;
@property(readonly) unsigned int userUID; // @synthesize userUID=_userUID;
@property(readonly) NSUUID *userUUID; // @synthesize userUUID=_userUUID;
@property(readonly) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) _Bool superEntitled; // @synthesize superEntitled=_superEntitled;
@property(readonly) _Bool entitled; // @synthesize entitled=_entitled;
- (id)copyUpgradeInfoForPluginType:(id)arg1;	// IMP=0x00000001000139c4
- (void)perAppDomainsForMessage:(id)arg1;	// IMP=0x0000000100012950
- (void)aggregatePathRulesForMessage:(id)arg1;	// IMP=0x000000010001211c
- (void)drainRepliesForIdentifier:(id)arg1 withResponse:(_Bool)arg2 error:(long long)arg3;	// IMP=0x0000000100011ee0
- (_Bool)enqueueMessage:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0000000100011cd4
- (id)displayNameForBundleID:(id)arg1 outTeamID:(id *)arg2 outLocalNetworkReasonString:(id *)arg3;	// IMP=0x0000000100011b2c
- (_Bool)shouldDisplayAlertForBundleID:(id)arg1;	// IMP=0x0000000100011b24
- (void)localNetworkDecisionMade:(_Bool)arg1 forIdentifier:(id)arg2 teamID:(id)arg3 bundleID:(id)arg4 query:(id)arg5 hasEntitlement:(_Bool)arg6;	// IMP=0x000000010001194c
- (void)handleMessage:(id)arg1;	// IMP=0x000000010000d990
- (void)saveConfigurationFromApp:(id)arg1 currentSignature:(id)arg2 saveMessage:(id)arg3;	// IMP=0x000000010000cc24
- (void)savePendingConfiguration:(id)arg1 currentSignature:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c984
- (void)openSettingsToTriggerLocalAuthenticationForConfiguration:(id)arg1;	// IMP=0x000000010000c838
- (_Bool)loadedConfigurationExists:(id)arg1 newConfiguration:(id)arg2 permissionType:(long long)arg3;	// IMP=0x000000010000c544
- (void)setApplicationCredential:(id)arg1;	// IMP=0x000000010000c3e0
@property(readonly, nonatomic) NSString *name;
- (id)initWithFirstMessage:(id)arg1;	// IMP=0x000000010000bd9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
