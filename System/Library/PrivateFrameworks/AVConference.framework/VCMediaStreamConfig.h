/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VCNetworkAddress, NSString, NSData, NSMutableDictionary, VCMediaStreamMultiwayConfig, VCMediaStreamRateControlConfig, NSDictionary;

@interface VCMediaStreamConfig : NSObject {

	long long _direction;
	VCNetworkAddress* _localAddress;
	NSString* _cName;
	unsigned _localSSRC;
	VCNetworkAddress* _remoteAddress;
	unsigned _remoteSSRC;
	unsigned long long _recommendedMTU;
	NSData* _sendMasterKey;
	NSMutableDictionary* _txPayloadMap;
	NSData* _receiveMasterKey;
	NSMutableDictionary* _rxPayloadMap;
	BOOL _latencySensitiveModeEnabled;
	long long _SRTPCipherSuite;
	BOOL _rtpTimeOutEnabled;
	double _rtpTimeOutInterval;
	BOOL _decryptionTimeOutEnabled;
	double _decryptionTimeOutInterval;
	unsigned _cellularUniqueTag;
	BOOL _rtcpEnabled;
	double _rtcpSendInterval;
	long long _SRTCPCipherSuite;
	BOOL _rtcpTimeOutEnabled;
	double _rtcpTimeOutInterval;
	BOOL _rtcpReceiveCallbackEnabled;
	unsigned short _rtcpRemotePort;
	BOOL _rateAdaptationEnabled;
	VCMediaStreamMultiwayConfig* _multiwayConfig;
	VCMediaStreamRateControlConfig* _rateControlConfig;

}

@property (assign,nonatomic) long long direction;                                                                //@synthesize direction=_direction - In the implementation block
@property (nonatomic,retain) VCNetworkAddress * localAddress;                                                    //@synthesize localAddress=_localAddress - In the implementation block
@property (nonatomic,copy) NSString * cName;                                                                     //@synthesize cName=_cName - In the implementation block
@property (nonatomic,retain) VCNetworkAddress * remoteAddress;                                                   //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (assign,nonatomic) unsigned remoteSSRC;                                                                //@synthesize remoteSSRC=_remoteSSRC - In the implementation block
@property (assign,nonatomic) unsigned localSSRC;                                                                 //@synthesize localSSRC=_localSSRC - In the implementation block
@property (assign,nonatomic) unsigned long long recommendedMTU;                                                  //@synthesize recommendedMTU=_recommendedMTU - In the implementation block
@property (nonatomic,retain) NSData * sendMasterKey;                                                             //@synthesize sendMasterKey=_sendMasterKey - In the implementation block
@property (nonatomic,retain) NSData * receiveMasterKey;                                                          //@synthesize receiveMasterKey=_receiveMasterKey - In the implementation block
@property (nonatomic,readonly) NSDictionary * txPayloadMap;                                                      //@synthesize txPayloadMap=_txPayloadMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * rxPayloadMap;                                                      //@synthesize rxPayloadMap=_rxPayloadMap - In the implementation block
@property (assign,setter=RTPCipherSuite,nonatomic) long long SRTPCipherSuite;                                    //@synthesize SRTPCipherSuite=_SRTPCipherSuite - In the implementation block
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) BOOL rtpTimeOutEnabled;                                  //@synthesize rtpTimeOutEnabled=_rtpTimeOutEnabled - In the implementation block
@property (assign,nonatomic) double rtpTimeOutInterval;                                                          //@synthesize rtpTimeOutInterval=_rtpTimeOutInterval - In the implementation block
@property (assign,getter=isDecryptionTimeOutEnabled,nonatomic) BOOL decryptionTimeOutEnabled;                    //@synthesize decryptionTimeOutEnabled=_decryptionTimeOutEnabled - In the implementation block
@property (assign,nonatomic) double decryptionTimeOutInterval;                                                   //@synthesize decryptionTimeOutInterval=_decryptionTimeOutInterval - In the implementation block
@property (assign,nonatomic) unsigned cellularUniqueTag;                                                         //@synthesize cellularUniqueTag=_cellularUniqueTag - In the implementation block
@property (assign,setter=RTCPCipherSuite,nonatomic) long long SRTCPCipherSuite;                                  //@synthesize SRTCPCipherSuite=_SRTCPCipherSuite - In the implementation block
@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled;                                              //@synthesize rtcpEnabled=_rtcpEnabled - In the implementation block
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) BOOL rtcpTimeOutEnabled;                                //@synthesize rtcpTimeOutEnabled=_rtcpTimeOutEnabled - In the implementation block
@property (assign,nonatomic) double rtcpTimeOutInterval;                                                         //@synthesize rtcpTimeOutInterval=_rtcpTimeOutInterval - In the implementation block
@property (assign,nonatomic) double rtcpSendInterval;                                                            //@synthesize rtcpSendInterval=_rtcpSendInterval - In the implementation block
@property (assign,getter=isRTCPReceiveCallbackEnabled,nonatomic) BOOL rtcpReceiveCallbackEnabled;                //@synthesize rtcpReceiveCallbackEnabled=_rtcpReceiveCallbackEnabled - In the implementation block
@property (assign,nonatomic) unsigned short rtcpRemotePort;                                                      //@synthesize rtcpRemotePort=_rtcpRemotePort - In the implementation block
@property (nonatomic,readonly) long long primaryTxCodecType; 
@property (assign,getter=isRateAdaptationEnabled,nonatomic) BOOL rateAdaptationEnabled;                          //@synthesize rateAdaptationEnabled=_rateAdaptationEnabled - In the implementation block
@property (nonatomic,retain) VCMediaStreamMultiwayConfig * multiwayConfig;                                       //@synthesize multiwayConfig=_multiwayConfig - In the implementation block
@property (assign,getter=isLatencySensitiveModeEnabled,nonatomic) BOOL latencySensitiveModeEnabled;              //@synthesize latencySensitiveModeEnabled=_latencySensitiveModeEnabled - In the implementation block
@property (nonatomic,retain) VCMediaStreamRateControlConfig * rateControlConfig;                                 //@synthesize rateControlConfig=_rateControlConfig - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(VCNetworkAddress *)localAddress;
-(VCNetworkAddress *)remoteAddress;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(void)setLocalAddress:(VCNetworkAddress *)arg1 ;
-(void)setRemoteAddress:(VCNetworkAddress *)arg1 ;
-(id)initWithClientDictionary:(id)arg1 ;
-(NSDictionary *)rxPayloadMap;
-(unsigned long long)recommendedMTU;
-(VCMediaStreamMultiwayConfig *)multiwayConfig;
-(unsigned)remoteSSRC;
-(VCMediaStreamRateControlConfig *)rateControlConfig;
-(BOOL)isLatencySensitiveModeEnabled;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(void)setRtpTimeOutInterval:(double)arg1 ;
-(void)setRtcpTimeOutInterval:(double)arg1 ;
-(void)setRtcpSendInterval:(double)arg1 ;
-(void)setRemoteSSRC:(unsigned)arg1 ;
-(void)setMultiwayConfig:(VCMediaStreamMultiwayConfig *)arg1 ;
-(void)setRateControlConfig:(VCMediaStreamRateControlConfig *)arg1 ;
-(void)setCellularUniqueTag:(unsigned)arg1 ;
-(unsigned)localSSRC;
-(void)addRxPayloadType:(int)arg1 networkPayload:(unsigned)arg2 ;
-(void)addTxPayloadType:(int)arg1 networkPayload:(unsigned)arg2 ;
-(NSDictionary *)txPayloadMap;
-(void)setRecommendedMTU:(unsigned long long)arg1 ;
-(unsigned short)rtcpRemotePort;
-(double)rtcpSendInterval;
-(BOOL)isRTCPEnabled;
-(void)setDecryptionTimeOutEnabled:(BOOL)arg1 ;
-(void)setDecryptionTimeOutInterval:(double)arg1 ;
-(void)setLatencySensitiveModeEnabled:(BOOL)arg1 ;
-(long long)SRTPCipherSuite;
-(long long)SRTCPCipherSuite;
-(NSData *)sendMasterKey;
-(NSData *)receiveMasterKey;
-(BOOL)isRTCPReceiveCallbackEnabled;
-(NSString *)cName;
-(unsigned)cellularUniqueTag;
-(void)setSRTPCipherSuite:(long long)arg1 ;
-(void)setSRTCPCipherSuite:(long long)arg1 ;
-(BOOL)isRTPTimeOutEnabled;
-(double)rtpTimeOutInterval;
-(BOOL)isRTCPTimeOutEnabled;
-(double)rtcpTimeOutInterval;
-(BOOL)isDecryptionTimeOutEnabled;
-(double)decryptionTimeOutInterval;
-(void)setLocalSSRC:(unsigned)arg1 ;
-(void)setRateAdaptationEnabled:(BOOL)arg1 ;
-(long long)primaryTxCodecType;
-(BOOL)isRateAdaptationEnabled;
-(void)setRtcpReceiveCallbackEnabled:(BOOL)arg1 ;
-(void)setupMediaStreamConfig;
-(void)applyMediaStreamClientDictionary:(id)arg1 ;
-(void)addRxPayloadType:(int)arg1 ;
-(void)addTxPayloadType:(int)arg1 ;
-(void)setCName:(NSString *)arg1 ;
-(void)setRtcpRemotePort:(unsigned short)arg1 ;
-(void)setSendMasterKey:(NSData *)arg1 ;
-(void)setReceiveMasterKey:(NSData *)arg1 ;
@end

