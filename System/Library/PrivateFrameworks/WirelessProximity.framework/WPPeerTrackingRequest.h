/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary;

@interface WPPeerTrackingRequest : NSObject <NSSecureCoding> {

	unsigned char _clientType;
	NSUUID* _peerUUID;
	NSDictionary* _peerTrackingDictionary;

}

@property (assign) unsigned char clientType;                           //@synthesize clientType=_clientType - In the implementation block
@property (retain) NSUUID * peerUUID;                                  //@synthesize peerUUID=_peerUUID - In the implementation block
@property (retain) NSDictionary * peerTrackingDictionary;              //@synthesize peerTrackingDictionary=_peerTrackingDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setClientType:(unsigned char)arg1 ;
-(unsigned char)clientType;
-(NSUUID *)peerUUID;
-(void)setPeerUUID:(NSUUID *)arg1 ;
-(NSDictionary *)peerTrackingDictionary;
-(void)setPeerTrackingDictionary:(NSDictionary *)arg1 ;
@end

