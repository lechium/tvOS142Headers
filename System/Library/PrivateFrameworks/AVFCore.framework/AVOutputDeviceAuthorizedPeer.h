/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVOutputDeviceAuthorizedPeerInternal, HAPPairingIdentity, NSString, NSData;

@interface AVOutputDeviceAuthorizedPeer : NSObject {

	AVOutputDeviceAuthorizedPeerInternal* _ivars;

}

@property (copy,readonly) HAPPairingIdentity * hmd_pairingIdentity; 
@property (nonatomic,readonly) NSString * peerID; 
@property (nonatomic,readonly) NSData * publicKey; 
@property (nonatomic,readonly) BOOL hasAdministratorPrivileges; 
-(HAPPairingIdentity *)hmd_pairingIdentity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(NSData *)publicKey;
-(NSString *)peerID;
-(id)initWithID:(id)arg1 publicKey:(id)arg2 hasAdministratorPrivileges:(BOOL)arg3 ;
-(BOOL)hasAdministratorPrivileges;
@end

