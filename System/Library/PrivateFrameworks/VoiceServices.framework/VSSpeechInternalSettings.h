/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults, NSString;

@interface VSSpeechInternalSettings : NSObject {

	BOOL _internalBuild;
	BOOL _isInternalBuild;
	NSUserDefaults* _internalDefaults;

}

@property (assign,nonatomic) BOOL isInternalBuild;                           //@synthesize isInternalBuild=_isInternalBuild - In the implementation block
@property (nonatomic,retain) NSUserDefaults * internalDefaults;              //@synthesize internalDefaults=_internalDefaults - In the implementation block
@property (nonatomic,readonly) BOOL internalBuild;                           //@synthesize internalBuild=_internalBuild - In the implementation block
@property (assign,nonatomic) BOOL enableAudioDump; 
@property (assign,nonatomic) BOOL logSensitiveText; 
@property (assign,nonatomic) BOOL disableCache; 
@property (assign,nonatomic) BOOL disableAssetCleaning; 
@property (assign,nonatomic) BOOL enableLocalVoices; 
@property (assign,nonatomic) float defaultVolume; 
@property (assign,nonatomic) BOOL whisper; 
@property (assign,nonatomic) float serverTTSTimeout; 
@property (assign,nonatomic) BOOL disableDeviceRacing; 
@property (assign,nonatomic) BOOL forceServerTTS; 
@property (assign,nonatomic) BOOL disableServerTTS; 
@property (assign,nonatomic) BOOL disableOsprey; 
@property (assign,nonatomic) BOOL forceOsprey; 
@property (assign,nonatomic) BOOL disableOspreyStreaming; 
@property (assign,nonatomic) float streamBufferDuration; 
@property (assign,nonatomic) BOOL useBetaVoice; 
@property (nonatomic,copy) NSString * ospreyEndpointURL; 
@property (assign,nonatomic) BOOL simulateNetworkStall; 
@property (assign,nonatomic) BOOL disableDeviceNeuralTTS; 
@property (nonatomic,readonly) BOOL useSSMLInput; 
@property (nonatomic,readonly) BOOL disableMobileAssetURLReset; 
@property (assign,nonatomic) BOOL ignorePowerAndThermalState; 
+(id)standardInstance;
-(id)init;
-(BOOL)internalBuild;
-(BOOL)isInternalBuild;
-(BOOL)disableAssetCleaning;
-(BOOL)enableLocalVoices;
-(BOOL)useBetaVoice;
-(BOOL)disableDeviceNeuralTTS;
-(BOOL)enableAudioDump;
-(void)setEnableAudioDump:(BOOL)arg1 ;
-(BOOL)logSensitiveText;
-(void)setLogSensitiveText:(BOOL)arg1 ;
-(BOOL)disableCache;
-(void)setDisableCache:(BOOL)arg1 ;
-(void)setDisableAssetCleaning:(BOOL)arg1 ;
-(void)setEnableLocalVoices:(BOOL)arg1 ;
-(BOOL)whisper;
-(void)setWhisper:(BOOL)arg1 ;
-(float)serverTTSTimeout;
-(void)setServerTTSTimeout:(float)arg1 ;
-(float)defaultVolume;
-(void)setDefaultVolume:(float)arg1 ;
-(BOOL)forceServerTTS;
-(void)setForceServerTTS:(BOOL)arg1 ;
-(BOOL)disableServerTTS;
-(void)setDisableServerTTS:(BOOL)arg1 ;
-(BOOL)disableDeviceRacing;
-(void)setDisableDeviceRacing:(BOOL)arg1 ;
-(BOOL)disableOsprey;
-(void)setDisableOsprey:(BOOL)arg1 ;
-(BOOL)forceOsprey;
-(void)setForceOsprey:(BOOL)arg1 ;
-(BOOL)disableOspreyStreaming;
-(void)setDisableOspreyStreaming:(BOOL)arg1 ;
-(float)streamBufferDuration;
-(void)setStreamBufferDuration:(float)arg1 ;
-(void)setUseBetaVoice:(BOOL)arg1 ;
-(NSString *)ospreyEndpointURL;
-(void)setOspreyEndpointURL:(NSString *)arg1 ;
-(BOOL)simulateNetworkStall;
-(void)setSimulateNetworkStall:(BOOL)arg1 ;
-(void)setDisableDeviceNeuralTTS:(BOOL)arg1 ;
-(BOOL)useSSMLInput;
-(BOOL)disableMobileAssetURLReset;
-(BOOL)ignorePowerAndThermalState;
-(void)setIgnorePowerAndThermalState:(BOOL)arg1 ;
-(void)setIsInternalBuild:(BOOL)arg1 ;
-(NSUserDefaults *)internalDefaults;
-(void)setInternalDefaults:(NSUserDefaults *)arg1 ;
@end

