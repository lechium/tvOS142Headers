/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, CBManager;

@interface CBPeer : NSObject <NSCopying> {

	BOOL _isLinkEncrypted;
	unsigned char _connectedTransport;
	NSUUID* _identifier;
	unsigned long long _mtuLength;
	long long _pairingState;
	long long _hostState;
	long long _role;
	CBManager* _manager;

}

@property (assign,nonatomic) unsigned long long mtuLength;                  //@synthesize mtuLength=_mtuLength - In the implementation block
@property (assign,nonatomic) long long pairingState;                        //@synthesize pairingState=_pairingState - In the implementation block
@property (assign,nonatomic) long long hostState;                           //@synthesize hostState=_hostState - In the implementation block
@property (assign,nonatomic) BOOL isLinkEncrypted;                          //@synthesize isLinkEncrypted=_isLinkEncrypted - In the implementation block
@property (assign,nonatomic) long long role;                                //@synthesize role=_role - In the implementation block
@property (assign,nonatomic,__weak) CBManager * manager;                    //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) unsigned char connectedTransport;              //@synthesize connectedTransport=_connectedTransport - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)identifier;
-(CBManager *)manager;
-(long long)role;
-(void)setRole:(long long)arg1 ;
-(void)setManager:(CBManager *)arg1 ;
-(id)initWithInfo:(id)arg1 manager:(id)arg2 ;
-(id)peerStateToString:(long long)arg1 ;
-(long long)pairingState;
-(void)handleMsg:(int)arg1 args:(id)arg2 ;
-(void)setIsLinkEncrypted:(BOOL)arg1 ;
-(void)setConnectedTransport:(unsigned char)arg1 ;
-(void)setHostState:(long long)arg1 ;
-(void)handleHostStateUpdated:(id)arg1 ;
-(void)setMtuLength:(unsigned long long)arg1 ;
-(unsigned long long)mtuLength;
-(void)handleMTUChanged:(id)arg1 ;
-(void)handleLinkEncryptionChanged:(id)arg1 ;
-(void)sendInternalMsg:(int)arg1 args:(id)arg2 ;
-(id)sendInternalSyncMsg:(int)arg1 args:(id)arg2 ;
-(void)tag:(id)arg1 ;
-(void)untag:(id)arg1 ;
-(BOOL)hasTag:(id)arg1 ;
-(void)setPairingState:(long long)arg1 ;
-(long long)hostState;
-(BOOL)isLinkEncrypted;
-(unsigned char)connectedTransport;
@end

