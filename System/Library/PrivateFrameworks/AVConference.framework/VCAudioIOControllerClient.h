/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@interface VCAudioIOControllerClient : NSObject {

	id _delegate;
	AudioStreamBasicDescription _format;
	int _deviceRole;
	BOOL _allowAudioRecording;
	int _operatingMode;
	BOOL _isRemoteCodecInfoValid;
	unsigned _remoteCodecType;
	double _remoteCodecSampleRate;
	BOOL _isRemoteVersionInfoValid;
	VoiceIOFarEndVersionInfo _farEndVersionInfo;
	int _clientPid;
	BOOL _isInputMeteringEnabled;
	BOOL _isOutputMeteringEnabled;
	unsigned char _direction;
	VCAudioIOControllerClientIO* _sinkIO;
	VCAudioIOControllerClientIO* _sourceIO;

}

@property (nonatomic,readonly) int clientPid;                                                       //@synthesize clientPid=_clientPid - In the implementation block
@property (nonatomic,readonly) id<VCAudioIOControllerDelegate> delegate; 
@property (nonatomic,readonly) AudioStreamBasicDescription format;                                  //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) int deviceRole;                                                        //@synthesize deviceRole=_deviceRole - In the implementation block
@property (assign,nonatomic) BOOL allowAudioRecording;                                              //@synthesize allowAudioRecording=_allowAudioRecording - In the implementation block
@property (assign,nonatomic) int operatingMode;                                                     //@synthesize operatingMode=_operatingMode - In the implementation block
@property (assign,nonatomic) unsigned char direction;                                               //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteCodecInfoValid;                                         //@synthesize isRemoteCodecInfoValid=_isRemoteCodecInfoValid - In the implementation block
@property (nonatomic,readonly) unsigned remoteCodecType;                                            //@synthesize remoteCodecType=_remoteCodecType - In the implementation block
@property (nonatomic,readonly) double remoteCodecSampleRate;                                        //@synthesize remoteCodecSampleRate=_remoteCodecSampleRate - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteVersionInfoValid;                                       //@synthesize isRemoteVersionInfoValid=_isRemoteVersionInfoValid - In the implementation block
@property (nonatomic,readonly) VoiceIOFarEndVersionInfo farEndVersionInfo;                          //@synthesize farEndVersionInfo=_farEndVersionInfo - In the implementation block
@property (assign,getter=isInputMeteringEnabled,nonatomic) BOOL inputMeteringEnabled;               //@synthesize isInputMeteringEnabled=_isInputMeteringEnabled - In the implementation block
@property (assign,getter=isOuputMeteringEnabled,nonatomic) BOOL outputMeteringEnabled;              //@synthesize isOutputMeteringEnabled=_isOutputMeteringEnabled - In the implementation block
@property (nonatomic,readonly) VCAudioIOControllerClientIO* sinkIO; 
@property (nonatomic,readonly) VCAudioIOControllerClientIO* sourceIO; 
-(id)description;
-(void)dealloc;
-(id<VCAudioIOControllerDelegate>)delegate;
-(AudioStreamBasicDescription)format;
-(unsigned char)direction;
-(void)setDirection:(unsigned char)arg1 ;
-(BOOL)isInputMeteringEnabled;
-(BOOL)isOuputMeteringEnabled;
-(void)setOperatingMode:(int)arg1 ;
-(VCAudioIOControllerClientIO*)sinkIO;
-(VCAudioIOControllerClientIO*)sourceIO;
-(int)operatingMode;
-(int)deviceRole;
-(BOOL)allowAudioRecording;
-(void)setAllowAudioRecording:(BOOL)arg1 ;
-(void)setDeviceRole:(int)arg1 ;
-(BOOL)isRemoteCodecInfoValid;
-(double)remoteCodecSampleRate;
-(unsigned)remoteCodecType;
-(BOOL)isRemoteVersionInfoValid;
-(VoiceIOFarEndVersionInfo)farEndVersionInfo;
-(void)setFarEndVersionInfo:(VoiceIOFarEndVersionInfo)arg1 ;
-(int)clientPid;
-(void)setOutputMeteringEnabled:(BOOL)arg1 ;
-(void)setInputMeteringEnabled:(BOOL)arg1 ;
-(void)setRemoteCodecType:(unsigned)arg1 sampleRate:(double)arg2 ;
-(void)setClientFormat:(AudioStreamBasicDescription)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceContext:(void*)arg2 sourceProcess:(/*function pointer*/void*)arg3 sinkContext:(void*)arg4 sinkProcess:(/*function pointer*/void*)arg5 clientPid:(int)arg6 ;
@end

