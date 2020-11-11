/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NEDNSSettings, NEProxySettings;

@interface NETunnelNetworkSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	NSString* _tunnelRemoteAddress;
	NEDNSSettings* _DNSSettings;
	NEProxySettings* _proxySettings;

}

@property (readonly) NSString * tunnelRemoteAddress;              //@synthesize tunnelRemoteAddress=_tunnelRemoteAddress - In the implementation block
@property (copy) NEDNSSettings * DNSSettings;                     //@synthesize DNSSettings=_DNSSettings - In the implementation block
@property (copy) NEProxySettings * proxySettings;                 //@synthesize proxySettings=_proxySettings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setDNSSettings:(NEDNSSettings *)arg1 ;
-(void)setProxySettings:(NEProxySettings *)arg1 ;
-(NEProxySettings *)proxySettings;
-(id)initWithTunnelRemoteAddress:(id)arg1 ;
-(NSString *)tunnelRemoteAddress;
-(NEDNSSettings *)DNSSettings;
@end

