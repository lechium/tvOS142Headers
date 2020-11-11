/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CBClassicPeer, NSInputStream, NSOutputStream, CBUUID;

@interface CBRFCOMMChannel : NSObject {

	unsigned char _channelID;
	BOOL _isIncoming;
	unsigned short _mtu;
	int _socketFD;
	CBClassicPeer* _peer;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	CBUUID* _serviceUUID;

}

@property (nonatomic,readonly) int socketFD;                               //@synthesize socketFD=_socketFD - In the implementation block
@property (nonatomic,readonly) CBClassicPeer * peer;                       //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) NSInputStream * inputStream;                //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,readonly) CBUUID * serviceUUID;                       //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (nonatomic,readonly) unsigned char channelID;                    //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) unsigned short mtu;                         //@synthesize mtu=_mtu - In the implementation block
@property (nonatomic,readonly) BOOL isIncoming;                            //@synthesize isIncoming=_isIncoming - In the implementation block
-(id)description;
-(void)dealloc;
-(NSOutputStream *)outputStream;
-(BOOL)isIncoming;
-(NSInputStream *)inputStream;
-(id)initWithPeer:(id)arg1 info:(id)arg2 ;
-(unsigned char)channelID;
-(int)socketFD;
-(CBClassicPeer *)peer;
-(CBUUID *)serviceUUID;
-(unsigned short)mtu;
@end

