/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVXClientServiceConnectionDelegate.h>
#import <libobjc.A.dylib/SVXClientServiceProviding.h>

@protocol SVXPerforming, SVXClientActivationServicing, SVXClientSessionStateServicing, SVXClientSessionServicing, SVXClientAudioPowerServicing, SVXClientSpeechSynthesisServicing, SVXClientDeviceServicing, SVXClientAudioSystemServicing;
@class SVXClientServiceConnection, NSString;

@interface SVXClientServiceManager : NSObject <SVXClientServiceConnectionDelegate, SVXClientServiceProviding> {

	id<SVXPerforming> _performer;
	SVXClientServiceConnection* _connection;
	id<SVXClientActivationServicing> _activationService;
	id<SVXClientSessionStateServicing> _sessionStateService;
	id<SVXClientSessionServicing> _sessionService;
	id<SVXClientAudioPowerServicing> _inputAudioPowerService;
	id<SVXClientAudioPowerServicing> _outputAudioPowerService;
	id<SVXClientSpeechSynthesisServicing> _speechSynthesisService;
	id<SVXClientDeviceServicing> _deviceService;
	id<SVXClientAudioSystemServicing> _audioSystemService;

}

@property (nonatomic,readonly) id<SVXClientActivationServicing> activationService;                        //@synthesize activationService=_activationService - In the implementation block
@property (nonatomic,readonly) id<SVXClientSessionStateServicing> sessionStateService;                    //@synthesize sessionStateService=_sessionStateService - In the implementation block
@property (nonatomic,readonly) id<SVXClientSessionServicing> sessionService;                              //@synthesize sessionService=_sessionService - In the implementation block
@property (nonatomic,readonly) id<SVXClientAudioPowerServicing> inputAudioPowerService;                   //@synthesize inputAudioPowerService=_inputAudioPowerService - In the implementation block
@property (nonatomic,readonly) id<SVXClientAudioPowerServicing> outputAudioPowerService;                  //@synthesize outputAudioPowerService=_outputAudioPowerService - In the implementation block
@property (nonatomic,readonly) id<SVXClientSpeechSynthesisServicing> speechSynthesisService;              //@synthesize speechSynthesisService=_speechSynthesisService - In the implementation block
@property (nonatomic,readonly) id<SVXClientDeviceServicing> deviceService;                                //@synthesize deviceService=_deviceService - In the implementation block
@property (nonatomic,readonly) id<SVXClientAudioSystemServicing> audioSystemService;                      //@synthesize audioSystemService=_audioSystemService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(id)_connection;
-(void)_connect;
-(void)clientServiceConnectionDidInvalidate:(id)arg1 ;
-(id)clientServiceConnection:(id)arg1 performerForComponent:(long long)arg2 ;
-(id<SVXClientActivationServicing>)activationService;
-(id<SVXClientSpeechSynthesisServicing>)speechSynthesisService;
-(id<SVXClientSessionServicing>)sessionService;
-(id<SVXClientDeviceServicing>)deviceService;
-(void)getClientServiceUsingBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id<SVXClientSessionStateServicing>)sessionStateService;
-(id<SVXClientAudioPowerServicing>)inputAudioPowerService;
-(id<SVXClientAudioPowerServicing>)outputAudioPowerService;
-(id<SVXClientAudioSystemServicing>)audioSystemService;
@end

