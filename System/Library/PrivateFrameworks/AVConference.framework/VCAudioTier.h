/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VCAudioPayloadConfig;

@interface VCAudioTier : NSObject {

	unsigned networkBitrate;
	unsigned audioCodecBitrate;
	unsigned packetsPerBundle;
	unsigned redNumPayloads;
	unsigned redMaxDelay20ms;
	VCAudioPayloadConfig* payloadConfig;
	int _operatingMode;
	BOOL _bundlingAppliedByCodec;

}

@property (readonly) unsigned networkBitrate; 
@property (readonly) unsigned audioCodecBitrate; 
@property (readonly) unsigned packetsPerBundle; 
@property (readonly) unsigned redNumPayloads; 
@property (readonly) unsigned redMaxDelay20ms; 
@property (readonly) VCAudioPayloadConfig * payloadConfig; 
+(id)newAudioTierForPayloadConfig:(id)arg1 operatingMode:(int)arg2 audioCodecBitrate:(unsigned)arg3 packetsPerBundle:(unsigned)arg4 redNumPayloads:(unsigned)arg5 headerSize:(unsigned)arg6 ;
+(BOOL)bundlingAppliedByCodecForPayload:(int)arg1 operatingMode:(int)arg2 ;
-(id)description;
-(BOOL)isEqualTo:(id)arg1 ;
-(unsigned)redNumPayloads;
-(unsigned)redMaxDelay20ms;
-(unsigned)packetsPerBundle;
-(unsigned)networkBitrate;
-(unsigned)audioCodecBitrate;
-(VCAudioPayloadConfig *)payloadConfig;
-(id)initWithNetworkBitrate:(unsigned)arg1 operatingMode:(int)arg2 audioCodecBitrate:(unsigned)arg3 packetsPerBundle:(unsigned)arg4 redNumPayloads:(unsigned)arg5 payloadConfig:(id)arg6 ;
@end

