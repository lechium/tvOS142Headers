/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCBasebandCodecNotifications.h>

@protocol OS_dispatch_source;
@class VCAudioRelayIO, NSObject, NSString;

@interface VCAudioRelay : NSObject <VCBasebandCodecNotifications> {

	BOOL _isRelayRunning;
	OpaqueFigThreadRef _relayThread;
	opaque_pthread_mutex_t _wakeUpMutex;
	opaque_pthread_cond_t _wakeUpCondition;
	double _IOBufferDuration;
	OpaqueAudioConverterRef _clientToRemoteConverter;
	OpaqueAudioConverterRef _remoteToClientConverter;
	VCAudioRelayIO* _remoteIO;
	VCAudioRelayIO* _clientIO;
	opaque_pthread_mutex_t _relayLock;
	opaque_pthread_mutex_t _clientIOLock;
	opaque_pthread_mutex_t _remoteIOLock;
	NSObject*<OS_dispatch_source> _periodicHealthPrintDispatchSource;
	unsigned _blocksRelayedCount;
	float _clientUplinkPowerMovingAverage;
	float _clientDownlinkPowerMovingAverage;
	VCRemoteCodecInfo _remoteCodecInfo;

}

@property (readonly) NSObject*<OS_dispatch_source> periodicHealthPrintDispatchSource;              //@synthesize periodicHealthPrintDispatchSource=_periodicHealthPrintDispatchSource - In the implementation block
@property (readonly) unsigned blocksRelayedCount;                                                  //@synthesize blocksRelayedCount=_blocksRelayedCount - In the implementation block
@property (readonly) float clientUplinkPowerMovingAverage;                                         //@synthesize clientUplinkPowerMovingAverage=_clientUplinkPowerMovingAverage - In the implementation block
@property (readonly) float clientDownlinkPowerMovingAverage;                                       //@synthesize clientDownlinkPowerMovingAverage=_clientDownlinkPowerMovingAverage - In the implementation block
@property (readonly) OpaqueAudioConverterRef remoteToClientConverter;                              //@synthesize remoteToClientConverter=_remoteToClientConverter - In the implementation block
@property (readonly) OpaqueAudioConverterRef clientToRemoteConverter;                              //@synthesize clientToRemoteConverter=_clientToRemoteConverter - In the implementation block
@property (nonatomic,copy) VCAudioRelayIO * remoteIO;                                              //@synthesize remoteIO=_remoteIO - In the implementation block
@property (nonatomic,copy) VCAudioRelayIO * clientIO;                                              //@synthesize clientIO=_clientIO - In the implementation block
@property (readonly) BOOL isRelayRunning;                                                          //@synthesize isRelayRunning=_isRelayRunning - In the implementation block
@property (readonly) double IOBufferDuration;                                                      //@synthesize IOBufferDuration=_IOBufferDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(double)IOBufferDuration;
-(BOOL)setIOBufferDuration:(double)arg1 withError:(id*)arg2 ;
-(BOOL)setClientIO:(id)arg1 withError:(id*)arg2 ;
-(BOOL)startClientIO;
-(void)stopClientIO;
-(void)didUpdateBasebandCodec:(const VCRemoteCodecInfo*)arg1 ;
-(void)printStreamFormats;
-(void)stopRemoteIO;
-(void)destroyAudioConverters;
-(BOOL)canSetPropertyWithError:(id*)arg1 ;
-(void)setRemoteIO:(VCAudioRelayIO *)arg1 ;
-(BOOL)createAudioConvertersWithError:(id*)arg1 ;
-(void)updateRemoteCodecInfo:(const VCRemoteCodecInfo*)arg1 ;
-(void)setClientIO:(VCAudioRelayIO *)arg1 ;
-(BOOL)startRelayThreadWithError:(id*)arg1 ;
-(void)startPeriodicHealthPrint;
-(BOOL)startRelayIO:(id)arg1 name:(id)arg2 recordingsName:(id)arg3 ;
-(void)stopRelayThread;
-(BOOL)stopRelayIO:(id)arg1 ;
-(OpaqueAudioConverterRef)newAudioConverterWithInputFormat:(AudioStreamBasicDescription*)arg1 outputFormat:(AudioStreamBasicDescription*)arg2 withError:(id*)arg3 ;
-(VCAudioRelayIO *)clientIO;
-(unsigned)blocksRelayedCount;
-(float)clientUplinkPowerMovingAverage;
-(float)clientDownlinkPowerMovingAverage;
-(void)forwardSamplesFromIO:(id)arg1 toIO:(id)arg2 withConverter:(OpaqueAudioConverterRef)arg3 ;
-(void)updateRealTimeStats;
-(void)relayProcessSamples;
-(void)sleepTillTime:(timespec*)arg1 ;
-(BOOL)setRemoteIO:(id)arg1 withError:(id*)arg2 ;
-(BOOL)startRemoteIO;
-(float)rmsPowerOfBuffer:(float*)arg1 numSamples:(unsigned)arg2 ;
-(void)relayCallback;
-(VCAudioRelayIO *)remoteIO;
-(BOOL)isRelayRunning;
-(OpaqueAudioConverterRef)remoteToClientConverter;
-(OpaqueAudioConverterRef)clientToRemoteConverter;
-(NSObject*<OS_dispatch_source>)periodicHealthPrintDispatchSource;
@end

