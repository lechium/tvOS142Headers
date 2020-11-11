/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDNetworkRouterFirewallRule.h>

@class HMDNetworkRouterFirewallRuleWANSubject, NSArray;

@interface HMDNetworkRouterFirewallRuleWAN : HMDNetworkRouterFirewallRule {

	unsigned char _transportProtocol;
	unsigned short _portStart;
	unsigned short _portEnd;
	unsigned long long _purpose;
	HMDNetworkRouterFirewallRuleWANSubject* _subject;
	NSArray* _icmpTypes;

}

@property (nonatomic,readonly) unsigned long long purpose;                                    //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,readonly) unsigned char transportProtocol;                               //@synthesize transportProtocol=_transportProtocol - In the implementation block
@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleWANSubject * subject;              //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) unsigned short portStart;                                      //@synthesize portStart=_portStart - In the implementation block
@property (nonatomic,readonly) unsigned short portEnd;                                        //@synthesize portEnd=_portEnd - In the implementation block
@property (nonatomic,readonly) NSArray * icmpTypes;                                           //@synthesize icmpTypes=_icmpTypes - In the implementation block
+(id)ipAddressAny;
+(id)createWithJSONDictionary:(id)arg1 error:(id*)arg2 ;
+(BOOL)__decodeAddresses:(id)arg1 subject:(id*)arg2 ;
+(id)ipAddressAnyIPv4;
+(id)ipAddressAnyIPv6;
+(id)__nonWildcardAddressFrom:(id)arg1 key:(id)arg2 ;
+(BOOL)__decodeHostnames:(id)arg1 subject:(id*)arg2 ;
+(BOOL)__decodeAddress:(id)arg1 subject:(id*)arg2 ;
+(BOOL)__decodeAddressRange:(id)arg1 endValue:(id)arg2 subject:(id*)arg3 ;
+(BOOL)__decodeType:(id)arg1 transportProtocol:(unsigned char*)arg2 error:(id*)arg3 ;
+(BOOL)__decodeFlags:(id)arg1 critical:(BOOL*)arg2 ;
+(BOOL)__decodePurpose:(id)arg1 purpose:(unsigned long long*)arg2 ;
+(BOOL)__decodeSubject:(id)arg1 subject:(id*)arg2 ;
+(BOOL)__decodePorts:(id)arg1 portStart:(unsigned short*)arg2 portEnd:(unsigned short*)arg3 ;
-(HMDNetworkRouterFirewallRuleWANSubject *)subject;
-(unsigned char)transportProtocol;
-(unsigned long long)purpose;
-(id)attributeDescriptions;
-(id)prettyJSONDictionary;
-(NSArray *)icmpTypes;
-(unsigned short)portStart;
-(unsigned short)portEnd;
-(id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(unsigned long long)arg4 transportProtocol:(unsigned char)arg5 subject:(id)arg6 portStart:(unsigned short)arg7 portEnd:(unsigned short)arg8 icmpTypes:(id)arg9 ;
@end

