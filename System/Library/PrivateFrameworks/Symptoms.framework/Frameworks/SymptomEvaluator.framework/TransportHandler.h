/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class ReporterFilter;

@interface TransportHandler : NSObject {

	transport_connection_sRef _connection;
	unsigned long long _connectionId;
	/*function pointer*/void* _writeFn;
	unsigned _ackId;
	BOOL _readOutstanding;
	BOOL _filterUpdateOutstanding;
	BOOL _disabled;
	BOOL _sendEventOnClose;
	unsigned _reporterId;
	const char* _reporterName;
	SCD_Struct_Ev10 _auditToken;
	unsigned long long _pid;
	const char* _processName;
	const char* _bundleId;
	ReporterFilter* _reporterFilter;
	BOOL _verifiedDelegateSymptom;
	int _reporterVersion;

}
+(void)initialize;
+(id)applicationStateMonitor;
+(void)requestExplicitDisconnectSymptom:(unsigned long long)arg1 ;
+(void)updateFilters:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)disconnect;
-(void)connect:(transport_connection_sRef)arg1 connId:(unsigned long long)arg2 writefn:(/*function pointer*/void*)arg3 auditToken:(SCD_Struct_Ev10)arg4 pid:(unsigned long long)arg5 name:(char*)arg6 verifiedDelegateSymptom:(BOOL)arg7 ;
-(void)receivePayload:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)startRead;
-(void)_sendFilterUpdate;
-(void)didReceiveEvent:(id)arg1 ;
-(void)generateLibnetcoreSymptomSignpost:(id)arg1 ;
-(void)_sendAck:(unsigned)arg1 ;
@end

