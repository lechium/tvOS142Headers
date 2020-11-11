//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSUUID;

@interface NESMPolicySession : NSObject
{
    int _sessionType;	// 8 = 0x8
    NSUUID *_configUUID;	// 16 = 0x10
    long long _grade;	// 24 = 0x18
    long long _tunnelType;	// 32 = 0x20
    long long _tunnelKind;	// 40 = 0x28
    NSMutableArray *_policyIDs;	// 48 = 0x30
    NSMutableArray *_policyIDsLow;	// 56 = 0x38
    NSMutableArray *_controlPolicyIDs;	// 64 = 0x40
    NSMutableArray *_tunnelPolicyIDs;	// 72 = 0x48
    NSMutableArray *_onDemandPolicyIDs;	// 80 = 0x50
    NSMutableArray *_dropControlPolicyIDs;	// 88 = 0x58
    NSMutableArray *_skipPolicyIDs;	// 96 = 0x60
    NSMutableArray *_NexusPolicyIDs;	// 104 = 0x68
    NSMutableArray *_dnsPolicyIDs;	// 112 = 0x70
    NSMutableDictionary *_interfaceDropControlPolicyIDs;	// 120 = 0x78
    NSMutableDictionary *_interfaceControlPolicyIDs;	// 128 = 0x80
    NSMutableDictionary *_interfaceTunnelPolicyIDs;	// 136 = 0x88
    NSMutableDictionary *_pathRuleDenyMulticastPolicyIDs;	// 144 = 0x90
    NSMutableDictionary *_applicationExceptionPolicyIDs;	// 152 = 0x98
}

+ (id)defaultTrafficClassCondition;	// IMP=0x000000010002c448
+ (id)pausedTrafficClassCondition;	// IMP=0x000000010002c42c
+ (id)bestEffortTrafficClassCondition;	// IMP=0x000000010002c410
- (void).cxx_destruct;	// IMP=0x0000000100045190
@property(retain) NSMutableDictionary *applicationExceptionPolicyIDs; // @synthesize applicationExceptionPolicyIDs=_applicationExceptionPolicyIDs;
@property(retain) NSMutableDictionary *pathRuleDenyMulticastPolicyIDs; // @synthesize pathRuleDenyMulticastPolicyIDs=_pathRuleDenyMulticastPolicyIDs;
@property(retain) NSMutableDictionary *interfaceTunnelPolicyIDs; // @synthesize interfaceTunnelPolicyIDs=_interfaceTunnelPolicyIDs;
@property(retain) NSMutableDictionary *interfaceControlPolicyIDs; // @synthesize interfaceControlPolicyIDs=_interfaceControlPolicyIDs;
@property(retain) NSMutableDictionary *interfaceDropControlPolicyIDs; // @synthesize interfaceDropControlPolicyIDs=_interfaceDropControlPolicyIDs;
@property(retain) NSMutableArray *dnsPolicyIDs; // @synthesize dnsPolicyIDs=_dnsPolicyIDs;
@property(retain) NSMutableArray *NexusPolicyIDs; // @synthesize NexusPolicyIDs=_NexusPolicyIDs;
@property(retain) NSMutableArray *skipPolicyIDs; // @synthesize skipPolicyIDs=_skipPolicyIDs;
@property(retain) NSMutableArray *dropControlPolicyIDs; // @synthesize dropControlPolicyIDs=_dropControlPolicyIDs;
@property(retain) NSMutableArray *onDemandPolicyIDs; // @synthesize onDemandPolicyIDs=_onDemandPolicyIDs;
@property(retain) NSMutableArray *tunnelPolicyIDs; // @synthesize tunnelPolicyIDs=_tunnelPolicyIDs;
@property(retain) NSMutableArray *controlPolicyIDs; // @synthesize controlPolicyIDs=_controlPolicyIDs;
@property(retain) NSMutableArray *policyIDsLow; // @synthesize policyIDsLow=_policyIDsLow;
@property(retain) NSMutableArray *policyIDs; // @synthesize policyIDs=_policyIDs;
@property long long tunnelKind; // @synthesize tunnelKind=_tunnelKind;
@property long long tunnelType; // @synthesize tunnelType=_tunnelType;
@property long long grade; // @synthesize grade=_grade;
@property int sessionType; // @synthesize sessionType=_sessionType;
@property(retain) NSUUID *configUUID; // @synthesize configUUID=_configUUID;
- (_Bool)setSkipPoliciesForInterface:(id)arg1 matchDomains:(id)arg2 isPrimary:(_Bool)arg3;	// IMP=0x0000000100044ab4
- (_Bool)setPoliciesForDNSSettingsWithAgentUUID:(id)arg1 matchDomains:(id)arg2 exceptionDomains:(id)arg3 captiveNetworkPluginBundleIDs:(id)arg4;	// IMP=0x0000000100043d34
- (_Bool)setPoliciesForDNSProxyProviderUUIDs:(id)arg1 withFlowDivertControlUnit:(unsigned int)arg2 captiveNetworkPluginBundleIDs:(id)arg3;	// IMP=0x0000000100042fe4
- (_Bool)setApplicationExceptionTunnelDataPolicies:(id)arg1 applicationExceptions:(id)arg2;	// IMP=0x0000000100042eec
- (_Bool)setApplicationExceptionTunnelDataPolicies:(id)arg1 applicationExceptions:(id)arg2 masterSession:(id)arg3;	// IMP=0x0000000100042c28
- (_Bool)setAOVPNTunnelDataPoliciesForInterfaceName:(id)arg1 delegateInterfaceName:(id)arg2 isSecondaryConnection:(_Bool)arg3 hasDNS:(_Bool)arg4 hasProxy:(_Bool)arg5 cellularServicesExceptionAction:(long long)arg6 applicationExceptions:(id)arg7;	// IMP=0x0000000100041d08
- (_Bool)setAOVPNTunnelControlPoliciesForPluginPID:(int)arg1 pluginUUIDs:(id)arg2 delegateInterfaceName:(id)arg3 allowSecuritydTraffic:(_Bool)arg4;	// IMP=0x0000000100041108
- (_Bool)setTunnelPoliciesforNexusInterface:(id)arg1;	// IMP=0x0000000100040d5c
- (_Bool)setAOVPNTunnelDropControlPolicies:(id)arg1 pluginUUIDs:(id)arg2;	// IMP=0x00000001000407c8
- (_Bool)setDropPoliciesForPluginUUIDs:(id)arg1;	// IMP=0x00000001000403a0
- (_Bool)setAOVPNTunnelControlPoliciesAllowSecuritydForAgentPID:(id)arg1 neagentPid:(int)arg2 neagentUUIDs:(id)arg3 result:(id)arg4 controlPolicyIDs:(id)arg5 order:(unsigned int *)arg6;	// IMP=0x000000010003f490
- (_Bool)setFlowDivertPoliciesForNetworkRules:(id)arg1 excludeRules:(id)arg2 flowDivertControlUnit:(unsigned int)arg3 hasDNS:(_Bool)arg4 hasProxy:(_Bool)arg5 skipUUIDs:(id)arg6 skipPID:(int)arg7 uid:(unsigned int)arg8 isFullyTransparent:(_Bool)arg9;	// IMP=0x000000010003e9e8
- (void)addPoliciesForNetworkRule:(id)arg1 masterSession:(id)arg2 result:(id)arg3 order:(unsigned int)arg4;	// IMP=0x000000010003e168
- (void)generateConditionsForAppRules:(id)arg1 includeNoSplit:(_Bool)arg2 providerUUIDs:(id)arg3 excludedDomains:(id)arg4 handler:(CDUnknownBlockType)arg5 skipHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000010003cf18
- (_Bool)setPoliciesForFlowDivertRules:(id)arg1 flowDivertControlUnit:(unsigned int)arg2 hasDNS:(_Bool)arg3 hasProxy:(_Bool)arg4 providerUUIDs:(id)arg5 excludedDomains:(id)arg6;	// IMP=0x000000010003c7a0
- (_Bool)setPoliciesForPathRules:(id)arg1 pathRouteRules:(id)arg2 fallbackBundleIDs:(id)arg3 fallbackExceptionBundleIDs:(id)arg4 fallbackBackgroundTraffic:(_Bool)arg5 netagentUUID:(id)arg6 uid:(unsigned int)arg7;	// IMP=0x000000010003a6e4
- (void)applyDenyMulticastPathRule:(id)arg1 masterSession:(id)arg2 uid:(unsigned int)arg3 policyIDs:(id)arg4 hasAddedDenyMulticastRules:(_Bool *)arg5;	// IMP=0x0000000100039254
- (_Bool)setPoliciesForAppRules:(id)arg1 interfaceName:(id)arg2 agentPIDs:(id)arg3 hasDNS:(_Bool)arg4 hasProxy:(_Bool)arg5 criticalDomains:(id)arg6 excludedDomains:(id)arg7;	// IMP=0x000000010003827c
- (id)configAgentUUIDForFlowDivertUnit:(unsigned int)arg1 type:(id)arg2;	// IMP=0x0000000100038184
- (id)configAgentUUIDForInterface:(id)arg1 type:(id)arg2;	// IMP=0x0000000100038078
- (_Bool)setFallbackPoliciesForExceptionAppRules:(id)arg1 interfaceName:(id)arg2 uid:(unsigned int)arg3;	// IMP=0x00000001000373b8
- (_Bool)setPoliciesForExceptionAppRules:(id)arg1 interfaceName:(id)arg2 uid:(unsigned int)arg3;	// IMP=0x0000000100036788
- (void)updateAppRuleUUIDs:(id)arg1 uid:(unsigned int)arg2;	// IMP=0x0000000100036534
- (id)copyUUIDsForAppRule:(id)arg1 allowSynthesis:(_Bool)arg2 uid:(unsigned int)arg3;	// IMP=0x000000010003632c
- (_Bool)setPolicyForContentFilterControlUnit:(unsigned int)arg1 agentPID:(int)arg2 uid:(unsigned int)arg3 settings:(id)arg4 limitToPID:(int)arg5;	// IMP=0x0000000100035154
- (_Bool)setPassPoliciesForContentFilter:(id)arg1 order:(unsigned int *)arg2;	// IMP=0x00000001000349b8
- (_Bool)setTunnelRouteEnforecementPoliciesForInterfaceName:(id)arg1 outgoingInterfaceName:(id)arg2 agentPIDs:(id)arg3 includeIPv4Routes:(id)arg4 includeIPv6Routes:(id)arg5 excludeIPv4Routes:(id)arg6 excludeIPv6Routes:(id)arg7 hasExcludeLocalNetworks:(_Bool)arg8;	// IMP=0x0000000100033008
- (_Bool)setFallbackTunnelDataPoliciesForInterfaceName:(id)arg1 outgoingInterfaceName:(id)arg2 isPrimary:(_Bool)arg3 includeRoutes:(id)arg4 excludeRoutes:(id)arg5 domains:(id)arg6;	// IMP=0x000000010003209c
- (_Bool)setTunnelDataPoliciesForInterfaceName:(id)arg1 outgoingInterfaceName:(id)arg2 hasDNS:(_Bool)arg3 hasProxy:(_Bool)arg4 hasExcludeLocalNetworks:(_Bool)arg5;	// IMP=0x00000001000316dc
- (_Bool)setVPNDNSPoliciesForAgentUUID:(id)arg1 interfaceName:(id)arg2 matchDomains:(id)arg3 isPrimary:(_Bool)arg4;	// IMP=0x0000000100031158
- (_Bool)setControlPassPolicyForVPNAgentWithPID:(int)arg1 outgoingInterfaceName:(id)arg2 hasDNS:(_Bool)arg3 hasProxy:(_Bool)arg4;	// IMP=0x000000010003054c
- (_Bool)setPolicyForVPNAgentWithPIDs:(id)arg1 outgoingInterfaceName:(id)arg2 hasDNS:(_Bool)arg3 hasProxy:(_Bool)arg4;	// IMP=0x000000010002fdec
- (_Bool)setOnDemandPoliciesForRule:(id)arg1 appRules:(id)arg2 netagentUUID:(id)arg3 criticalDomains:(id)arg4 excludedDomains:(id)arg5;	// IMP=0x000000010002f5a4
- (_Bool)setFallbackOnDemandPoliciesForRule:(id)arg1 netagentUUID:(id)arg2 uid:(unsigned int)arg3 pauseLevel:(long long)arg4 primaryInterfaceName:(id)arg5 criticalDomains:(id)arg6;	// IMP=0x000000010002dca4
- (_Bool)setOnDemandPoliciesForRule:(id)arg1 netagentUUID:(id)arg2 uid:(unsigned int)arg3 pauseLevel:(long long)arg4 primaryInterfaceName:(id)arg5 criticalDomains:(id)arg6;	// IMP=0x000000010002c464
- (_Bool)removePathControllerPolicies;	// IMP=0x000000010002c0dc
- (_Bool)removeDNSPolicies;	// IMP=0x000000010002bf5c
- (_Bool)removeSkipPolicies;	// IMP=0x000000010002bddc
- (_Bool)removeTunnelPoliciesforNexusInterface;	// IMP=0x000000010002bc98
- (_Bool)removeOnDemandPolicies;	// IMP=0x000000010002baa4
- (_Bool)removeApplicationExceptionPoliciesForDelegateInterface:(id)arg1;	// IMP=0x000000010002b9e8
- (_Bool)removeApplicationExceptionPoliciesForDelegateInterface:(id)arg1 masterSession:(id)arg2;	// IMP=0x000000010002b870
- (_Bool)removePoliciesForDelegateInterface:(id)arg1;	// IMP=0x000000010002b668
- (_Bool)removeContentFilterPolicies;	// IMP=0x000000010002b398
- (_Bool)removePolicies;	// IMP=0x000000010002b1a4
- (_Bool)removeDropControlPolicies;	// IMP=0x000000010002b018
- (_Bool)removeControlPoliciesForDelegateInterface:(id)arg1;	// IMP=0x000000010002ae10
- (_Bool)removeDropControlPoliciesForDelegateInterface:(id)arg1;	// IMP=0x000000010002ac08
- (_Bool)removeTunnelDataPolicies;	// IMP=0x000000010002aa14
- (_Bool)removeControlPolicies;	// IMP=0x000000010002a820
- (_Bool)unregisterSession;	// IMP=0x000000010002a740
- (_Bool)registerSession;	// IMP=0x000000010002a660
- (unsigned int)skipDenyMulticastOrder;	// IMP=0x000000010002a658
- (unsigned int)denyMulticastOrder;	// IMP=0x000000010002a650
- (unsigned int)preFilterOrder;	// IMP=0x000000010002a648
- (unsigned int)dropAgentOrder;	// IMP=0x000000010002a640
- (unsigned int)fallbackOrder;	// IMP=0x000000010002a638
- (unsigned int)postDNSSettingsOrder;	// IMP=0x000000010002a630
- (unsigned int)preDNSSettingsOrder;	// IMP=0x000000010002a628
- (unsigned int)order;	// IMP=0x000000010002a4a0
- (void)dealloc;	// IMP=0x000000010002a29c
- (id)initWithConfigurationID:(id)arg1 sessionType:(int)arg2 grade:(long long)arg3 tunnelType:(long long)arg4;	// IMP=0x000000010002a28c
- (id)initWithConfigurationID:(id)arg1 sessionType:(int)arg2 grade:(long long)arg3 tunnelType:(long long)arg4 tunnelKind:(long long)arg5;	// IMP=0x000000010002a0a8
- (id)init;	// IMP=0x000000010002a080

@end
