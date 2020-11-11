/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>
#import <libobjc.A.dylib/HMDDiagnosticReportLogging.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString, NSDictionary;

@interface HMDRemoteMessageLogEvent : HMDLogEvent <HMDAWDLogEvent, HMDDiagnosticReportLogging, HMDCoreAnalyticsLogging> {

	BOOL _sending;
	BOOL _secure;
	int _transportType;
	NSString* _msgIdentifier;
	NSString* _transactionIdentifier;
	NSDictionary* _msgPayload;
	NSString* _msgName;
	long long _msgType;
	NSString* _peerInformation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * diagnosticReportEventType; 
@property (copy,readonly) NSString * diagnosticReportEventSubType; 
@property (nonatomic,readonly) int transportType;                                  //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL sending;                                       //@synthesize sending=_sending - In the implementation block
@property (nonatomic,copy,readonly) NSString * msgIdentifier;                      //@synthesize msgIdentifier=_msgIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * msgPayload;                     //@synthesize msgPayload=_msgPayload - In the implementation block
@property (nonatomic,readonly) BOOL secure;                                        //@synthesize secure=_secure - In the implementation block
@property (nonatomic,readonly) NSString * msgName;                                 //@synthesize msgName=_msgName - In the implementation block
@property (nonatomic,readonly) long long msgType;                                  //@synthesize msgType=_msgType - In the implementation block
@property (nonatomic,readonly) NSString * peerInformation;                         //@synthesize peerInformation=_peerInformation - In the implementation block
+(id)uuid;
+(id)receivedRemoteMessage:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(BOOL)arg6 transportType:(int)arg7 ;
+(id)sendingRemoteMessage:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(BOOL)arg6 transportType:(int)arg7 ;
+(id)receivedRemoteMessage:(id)arg1 transportType:(int)arg2 ;
+(id)sendingRemoteMessage:(id)arg1 transportType:(int)arg2 ;
+(int)awdMessageTypeFromHMDMessageType:(long long)arg1 ;
-(BOOL)secure;
-(int)transportType;
-(id)eventName;
-(NSString *)transactionIdentifier;
-(id)initWithRemoteMessage:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(BOOL)arg6 transportType:(int)arg7 sending:(BOOL)arg8 ;
-(id)serializedEventForDiagnostics:(BOOL)arg1 ;
-(NSString *)msgName;
-(NSString *)msgIdentifier;
-(NSDictionary *)msgPayload;
-(long long)msgType;
-(BOOL)sending;
-(id)serializedEvent;
-(BOOL)shouldSubmitEvent;
-(id)asCommaSeparateValues;
-(NSString *)peerInformation;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(int)toAWDType:(int)arg1 ;
-(void)updateDiagnosticReportSignature:(id)arg1 ;
@end

