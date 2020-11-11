/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaStreamTransport.h>
#import <libobjc.A.dylib/WRMClientDelegate.h>

@class WRMClient;

@interface VCAudioStreamTransport : VCMediaStreamTransport <WRMClientDelegate> {

	WRMClient* _wrmClient;
	VCAudioStreamTransportRealtimeContext* _realtimeContext;

}

@property (nonatomic,readonly) void* realtimeContext; 
-(void)dealloc;
-(void*)realtimeContext;
-(void)setWRMCallId:(unsigned)arg1 ;
-(id)initWithDelegate:(id)arg1 handle:(tagHANDLE*)arg2 callId:(unsigned)arg3 localSSRC:(unsigned)arg4 enableNetworkMonitor:(BOOL)arg5 ;
-(int)onStart;
-(void)onStop;
-(void)setPreWarmState:(BOOL)arg1 ;
-(void)setWRMMetricConfig:(SCD_Struct_VC108*)arg1 ;
-(void)setWRMNotification:(SCD_Struct_VC109*)arg1 ;
-(void)setWRMCoexMetrics:(id)arg1 ;
-(void)reportWRMMetrics:(const SCD_Struct_VC126*)arg1 ;
-(void)onRTCPPacket:(tagRTCPPACKET*)arg1 arrivalNTPTime:(tagNTP)arg2 ;
-(void)startWRM;
-(void)stopWRM;
-(id)initWithDelegate:(id)arg1 handle:(tagHANDLE*)arg2 callId:(unsigned)arg3 localSSRC:(unsigned)arg4 ;
@end
