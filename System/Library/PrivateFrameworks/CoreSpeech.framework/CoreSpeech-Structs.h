/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct OpaqueExtAudioFile* OpaqueExtAudioFileRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct BTSessionImpl* BTSessionImplRef;

typedef struct BTLocalDeviceImpl* BTLocalDeviceImplRef;

typedef struct BTDeviceImpl* BTDeviceImplRef;

typedef struct OpaqueAudioConverter* OpaqueAudioConverterRef;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFString* CFStringRef;

typedef struct pair<unsigned long long, float> {
	unsigned long long first;
	float second;
} pair<unsigned long long, float>;

typedef struct vDSP_biquadm_SetupStruct* vDSP_biquadm_SetupStructRef;

typedef struct _compressed_pair<double *, std::__1::allocator<double> > {
	double __value_;
} compressed_pair<double *, std::__1::allocator<double> >;

typedef struct vector<double, std::__1::allocator<double> > {
	double __begin_;
	double __end_;
	compressed_pair<double *, std::__1::allocator<double> > __end_cap_;
} vector<double, std::__1::allocator<double> >;

typedef struct _compressed_pair<corespeech::CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float> > *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float> > > > {
	CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float> > __value_;
} compressed_pair<corespeech::CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float> > *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float> > > >;

typedef struct unique_ptr<corespeech::CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float> >, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float> > > > {
	compressed_pair<corespeech::CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float> > *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float> > > > __ptr_;
} unique_ptr<corespeech::CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float> >, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float> > > >;

typedef struct OpaqueFFTSetup* OpaqueFFTSetupRef;

typedef struct _compressed_pair<SmartSiriVolume *, std::__1::default_delete<SmartSiriVolume> > {
	SmartSiriVolume __value_;
} compressed_pair<SmartSiriVolume *, std::__1::default_delete<SmartSiriVolume> >;

typedef struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume> > {
	compressed_pair<SmartSiriVolume *, std::__1::default_delete<SmartSiriVolume> > __ptr_;
} unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume> >;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct _compressed_pair<BatchBeepCanceller *, std::__1::default_delete<BatchBeepCanceller> > {
	BatchBeepCanceller __value_;
} compressed_pair<BatchBeepCanceller *, std::__1::default_delete<BatchBeepCanceller> >;

typedef struct unique_ptr<BatchBeepCanceller, std::__1::default_delete<BatchBeepCanceller> > {
	compressed_pair<BatchBeepCanceller *, std::__1::default_delete<BatchBeepCanceller> > __ptr_;
} unique_ptr<BatchBeepCanceller, std::__1::default_delete<BatchBeepCanceller> >;

typedef struct _compressed_pair<short *, std::__1::allocator<short> > {
	short __value_;
} compressed_pair<short *, std::__1::allocator<short> >;

typedef struct vector<short, std::__1::allocator<short> > {
	short __begin_;
	short __end_;
	compressed_pair<short *, std::__1::allocator<short> > __end_cap_;
} vector<short, std::__1::allocator<short> >;

typedef struct _compressed_pair<CSAudioZeroFilterImpl<float> *, std::__1::default_delete<CSAudioZeroFilterImpl<float> > > {
	CSAudioZeroFilterImpl<float> __value_;
} compressed_pair<CSAudioZeroFilterImpl<float> *, std::__1::default_delete<CSAudioZeroFilterImpl<float> > >;

typedef struct unique_ptr<CSAudioZeroFilterImpl<float>, std::__1::default_delete<CSAudioZeroFilterImpl<float> > > {
	compressed_pair<CSAudioZeroFilterImpl<float> *, std::__1::default_delete<CSAudioZeroFilterImpl<float> > > __ptr_;
} unique_ptr<CSAudioZeroFilterImpl<float>, std::__1::default_delete<CSAudioZeroFilterImpl<float> > >;

typedef struct _compressed_pair<corespeech::CSAudioCircularBufferImpl<float> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<float> > > {
	CSAudioCircularBufferImpl<float> __value_;
} compressed_pair<corespeech::CSAudioCircularBufferImpl<float> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<float> > >;

typedef struct unique_ptr<corespeech::CSAudioCircularBufferImpl<float>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<float> > > {
	compressed_pair<corespeech::CSAudioCircularBufferImpl<float> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<float> > > __ptr_;
} unique_ptr<corespeech::CSAudioCircularBufferImpl<float>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<float> > >;

typedef struct _compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned char> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char> > > {
	CSAudioCircularBufferImpl<unsigned char> __value_;
} compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned char> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char> > >;

typedef struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned char>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char> > > {
	compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned char> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char> > > __ptr_;
} unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned char>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char> > >;

typedef struct AudioBuffer {
	unsigned mNumberChannels;
	unsigned mDataByteSize;
	void mData;
} AudioBuffer;

typedef struct AudioBufferList {
	unsigned mNumberBuffers;
	AudioBuffer mBuffers[1];
} AudioBufferList;
