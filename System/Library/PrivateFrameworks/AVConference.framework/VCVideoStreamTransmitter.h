/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoTransmitterBase.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, VCMediaStreamStats, AVCStatisticsCollector;

@interface VCVideoStreamTransmitter : VCVideoTransmitterBase {

	tagHANDLE* _videoRTP;
	NSObject*<OS_dispatch_queue> _transmitterQueue;
	tagVCRealTimeThread* _encoderThread;
	BOOL _terminateEncoderThread;
	NSObject*<OS_dispatch_semaphore> _bufferQueueSemaphore;
	opaqueCMSampleBufferRef _savedSampleBuffer;
	opaqueCMBufferQueueRef _bufferQueue;
	char* _buffer;
	unsigned long long _bufferSize;
	int _maxPacketCount;
	int* _packetSizes;
	int* _packetFlags;
	unsigned long long _lastKeyFrameSampleBufferSize;
	int _iSMBCount;
	unsigned _keyFrameIntervalDuration;
	unsigned short _recommendedMTU;
	long long _videoCodecType;
	int _videoSource;
	unsigned _dwRefreshFrameCounter;
	opaque_pthread_mutex_t _xMBs;
	int _shouldGenerateKeyFrame;
	VCMediaStreamStats* _stats;
	double _reportingIntervalStartTime;
	double _reportingLastUpdateTime;
	unsigned char _lastCameraStatusBits;
	BOOL _enableCVO;
	unsigned long long _cvoExtensionID;
	opaqueRTCReportingRef _reportingAgent;
	int _reportingModuleID;
	SCD_Struct_VC74* _encoder;
	tagVCMemoryPool* _encodingArgPool;
	BOOL _forceDisableBitrateCap;
	AVCStatisticsCollector* _statisticsCollector;
	unsigned _totalPacketsSent;
	unsigned long long _totalBytesSent;
	unsigned _tilesPerFrame;
	unsigned _totalKeyFramesSent;
	CFAllocatorRef _videoPacketAllocator;

}
-(void)dealloc;
-(id)initWithConfig:(id)arg1 ;
-(void)setTargetBitrate:(unsigned)arg1 ;
-(void)generateKeyFrame;
-(void)initVideoCompressionWithWidth:(unsigned)arg1 height:(unsigned)arg2 bitrate:(unsigned)arg3 keyFrameIntervalDuration:(unsigned)arg4 ;
-(void)gatherRealtimeStats:(CFDictionaryRef)arg1 ;
-(unsigned)setTemporaryMaximumBitrate:(unsigned)arg1 ;
-(CFDictionaryRef)forceKeyFrameProperties;
-(BOOL)isKeyFrame:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)prependSPSPPS:(unsigned long long*)arg1 dataPointer:(char*)arg2 ;
-(int)transmitEncodedVideoFrame:(char*)arg1 size:(unsigned long long)arg2 timestamp:(unsigned)arg3 hostTime:(double)arg4 cameraStatusBits:(unsigned char)arg5 ;
-(void)reportingVideoStreamEvent:(unsigned short)arg1 ;
-(int)transmitFrameInGroups:(char*)arg1 numOfPackets:(int)arg2 timestamp:(unsigned)arg3 hostTime:(double)arg4 cameraStatusBits:(unsigned char)arg5 ;
-(int)transmitVideoPackets:(const char*)arg1 packetSizes:(int*)arg2 startPacket:(int)arg3 packetCount:(int)arg4 lastGroup:(int)arg5 timestamp:(unsigned)arg6 hostTime:(double)arg7 cameraStatusBits:(unsigned char)arg8 bytesSent:(int*)arg9 ;
-(void)updateSendStatisticsWithTimestamp:(unsigned)arg1 frameSize:(unsigned)arg2 packetsInFrame:(unsigned)arg3 ;
-(void)startVideo;
-(void)stopVideo;
-(BOOL)enqueueVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC63)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(void)setKeyFrameOnlyStreamID:(unsigned short)arg1 ;
-(void)setStreamIDs:(unsigned short*)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short*)arg3 numOfRepairedStreamIDs:(unsigned char)arg4 ;
-(void)setFECRatio:(double)arg1 ;
-(void)setFECRedundancyVector:(const SCD_Struct_VC50*)arg1 ;
-(void)setMediaSuggestion:(VCRateControlMediaSuggestion*)arg1 ;
-(BOOL)setEncodingMode:(int)arg1 ;
-(void)encodeVideoFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)transmitEncodedVideoFrame:(opaqueCMSampleBufferRef)arg1 cameraStatusBits:(unsigned char)arg2 ;
-(void)handleActiveConnectionChange:(id)arg1 ;
@end

