/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NPWaldoDelegate, OS_dispatch_source, OS_dispatch_queue;
@class NSDictionary, NSArray, NSString, NSNumber, NSURL, NPLocation, NSDate, NSPNetworkAgent, NPKeyBag, NPWaldoLocationManager, NSMutableDictionary, NPTuscanyEdge, NSObject, NWNetworkAgentRegistration, NSUUID, NSData;

@interface NPWaldo : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _currentNetworkCharacteristics;
	NSArray* _edges;
	NSArray* _allOnRamps;
	BOOL _shouldSave;
	BOOL _reprocessPending;
	BOOL _daypassRefreshInProgress;
	BOOL _reprocessCancelled;
	unsigned _generation;
	NSString* _identifier;
	long long _source;
	NSNumber* _timestamp;
	NSNumber* _version;
	NSString* _dayPassHostname;
	NSNumber* _dayPassHostnamePrependLabel;
	NSNumber* _dayPassPort;
	NSNumber* _dayPassRequestTimeout;
	NSString* _dayPassLeafOID;
	NSNumber* _dayPassRevocationFailClosed;
	NSNumber* _dayPassExtendedValidation;
	NSNumber* _dayPassEnableSessionTicket;
	NSArray* _dayPassSoftExpiry;
	NSNumber* _enableLatencyDerivation;
	NSNumber* _latencyFactorA;
	NSNumber* _latencyFactorB;
	NSNumber* _latencyFactorX;
	NSNumber* _edgeFairnessFactor;
	NSNumber* _locationCheckInterval;
	NSNumber* _locationTTL;
	NSNumber* _locationToleranceDistance;
	NSNumber* _viewSize;
	NSNumber* _probePause;
	NSNumber* _probeTFO;
	NSNumber* _probeNoTFOCookie;
	NSNumber* _probeTimeout;
	NSNumber* _retryPause;
	NSNumber* _signatureLimit;
	NSNumber* _observedRTTSampleSize;
	NSNumber* _reprocessSamplingInterval;
	NSNumber* _reprocessSampleSize;
	NSNumber* _connectionIdleTimeoutMaximum;
	NSString* _tag;
	NSURL* _telemetryURL;
	NSString* _telemetryService;
	NSNumber* _useGeohashFromServer;
	NSNumber* _edgeSelectionEnabled;
	NSNumber* _edgeSelectionAlpha;
	NSNumber* _edgeSelectionWindowSize;
	NSNumber* _enableIPv6;
	NSNumber* _requireTFO;
	NSNumber* _TFOLeeway;
	NSNumber* _edgesGeneration;
	NSNumber* _usedEdgesGeneration;
	long long _currentEdgeIndex;
	NSString* _hostname;
	id<NPWaldoDelegate> _delegate;
	NPLocation* _cachedLocation;
	NSDate* _locationCheckTimestamp;
	NSDate* _locationExpiration;
	NPWaldo* _defaults;
	NSPNetworkAgent* _agent;
	NPKeyBag* _keybag;
	NPWaldoLocationManager* _locationManager;
	NSMutableDictionary* _networkInformation;
	NSArray* _currentEdges;
	NPTuscanyEdge* _nextEdge;
	NSObject*<OS_dispatch_source> _reprocessSamplingTimer;
	NWNetworkAgentRegistration* _agentRegistration;
	NSUUID* _configurationIdentifier;
	NSObject*<OS_dispatch_queue> _reprocessQueue;
	NSData* _updateHash;

}

@property (retain) NSMutableDictionary * networkInformation;                          //@synthesize networkInformation=_networkInformation - In the implementation block
@property (retain) NSArray * allOnRamps; 
@property (assign) BOOL daypassRefreshInProgress;                                     //@synthesize daypassRefreshInProgress=_daypassRefreshInProgress - In the implementation block
@property (readonly) NSArray * currentEdges;                                          //@synthesize currentEdges=_currentEdges - In the implementation block
@property (assign) long long currentEdgeIndex;                                        //@synthesize currentEdgeIndex=_currentEdgeIndex - In the implementation block
@property (readonly) NPTuscanyEdge * nextEdge;                                        //@synthesize nextEdge=_nextEdge - In the implementation block
@property (readonly) NSArray * currentEdgeList; 
@property (assign) BOOL reprocessCancelled;                                           //@synthesize reprocessCancelled=_reprocessCancelled - In the implementation block
@property (assign) unsigned generation;                                               //@synthesize generation=_generation - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> reprocessSamplingTimer;              //@synthesize reprocessSamplingTimer=_reprocessSamplingTimer - In the implementation block
@property (retain) NWNetworkAgentRegistration * agentRegistration;                    //@synthesize agentRegistration=_agentRegistration - In the implementation block
@property (retain) NSUUID * configurationIdentifier;                                  //@synthesize configurationIdentifier=_configurationIdentifier - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> reprocessQueue;                     //@synthesize reprocessQueue=_reprocessQueue - In the implementation block
@property (readonly) id latencyComparator; 
@property (retain) NSData * updateHash;                                               //@synthesize updateHash=_updateHash - In the implementation block
@property (assign) BOOL reResolve; 
@property (readonly) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (readonly) long long source;                                                //@synthesize source=_source - In the implementation block
@property (copy) NSNumber * timestamp;                                                //@synthesize timestamp=_timestamp - In the implementation block
@property (copy) NSNumber * version;                                                  //@synthesize version=_version - In the implementation block
@property (copy) NSString * dayPassHostname;                                          //@synthesize dayPassHostname=_dayPassHostname - In the implementation block
@property (copy) NSNumber * dayPassHostnamePrependLabel;                              //@synthesize dayPassHostnamePrependLabel=_dayPassHostnamePrependLabel - In the implementation block
@property (copy) NSNumber * dayPassPort;                                              //@synthesize dayPassPort=_dayPassPort - In the implementation block
@property (copy) NSNumber * dayPassRequestTimeout;                                    //@synthesize dayPassRequestTimeout=_dayPassRequestTimeout - In the implementation block
@property (copy) NSString * dayPassLeafOID;                                           //@synthesize dayPassLeafOID=_dayPassLeafOID - In the implementation block
@property (copy) NSNumber * dayPassRevocationFailClosed;                              //@synthesize dayPassRevocationFailClosed=_dayPassRevocationFailClosed - In the implementation block
@property (copy) NSNumber * dayPassExtendedValidation;                                //@synthesize dayPassExtendedValidation=_dayPassExtendedValidation - In the implementation block
@property (copy) NSNumber * dayPassEnableSessionTicket;                               //@synthesize dayPassEnableSessionTicket=_dayPassEnableSessionTicket - In the implementation block
@property (copy) NSArray * dayPassSoftExpiry;                                         //@synthesize dayPassSoftExpiry=_dayPassSoftExpiry - In the implementation block
@property (copy) NSNumber * enableLatencyDerivation;                                  //@synthesize enableLatencyDerivation=_enableLatencyDerivation - In the implementation block
@property (copy) NSNumber * latencyFactorA;                                           //@synthesize latencyFactorA=_latencyFactorA - In the implementation block
@property (copy) NSNumber * latencyFactorB;                                           //@synthesize latencyFactorB=_latencyFactorB - In the implementation block
@property (copy) NSNumber * latencyFactorX;                                           //@synthesize latencyFactorX=_latencyFactorX - In the implementation block
@property (copy) NSNumber * edgeFairnessFactor;                                       //@synthesize edgeFairnessFactor=_edgeFairnessFactor - In the implementation block
@property (copy) NSNumber * locationCheckInterval;                                    //@synthesize locationCheckInterval=_locationCheckInterval - In the implementation block
@property (copy) NSNumber * locationTTL;                                              //@synthesize locationTTL=_locationTTL - In the implementation block
@property (copy) NSNumber * locationToleranceDistance;                                //@synthesize locationToleranceDistance=_locationToleranceDistance - In the implementation block
@property (copy) NSNumber * viewSize;                                                 //@synthesize viewSize=_viewSize - In the implementation block
@property (copy) NSNumber * probePause;                                               //@synthesize probePause=_probePause - In the implementation block
@property (copy) NSNumber * probeTFO;                                                 //@synthesize probeTFO=_probeTFO - In the implementation block
@property (copy) NSNumber * probeNoTFOCookie;                                         //@synthesize probeNoTFOCookie=_probeNoTFOCookie - In the implementation block
@property (copy) NSNumber * probeTimeout;                                             //@synthesize probeTimeout=_probeTimeout - In the implementation block
@property (copy) NSNumber * retryPause;                                               //@synthesize retryPause=_retryPause - In the implementation block
@property (copy) NSNumber * signatureLimit;                                           //@synthesize signatureLimit=_signatureLimit - In the implementation block
@property (copy) NSNumber * observedRTTSampleSize;                                    //@synthesize observedRTTSampleSize=_observedRTTSampleSize - In the implementation block
@property (copy) NSNumber * reprocessSamplingInterval;                                //@synthesize reprocessSamplingInterval=_reprocessSamplingInterval - In the implementation block
@property (copy) NSNumber * reprocessSampleSize;                                      //@synthesize reprocessSampleSize=_reprocessSampleSize - In the implementation block
@property (copy) NSNumber * connectionIdleTimeoutMaximum;                             //@synthesize connectionIdleTimeoutMaximum=_connectionIdleTimeoutMaximum - In the implementation block
@property (copy) NSString * tag;                                                      //@synthesize tag=_tag - In the implementation block
@property (copy) NSURL * telemetryURL;                                                //@synthesize telemetryURL=_telemetryURL - In the implementation block
@property (copy) NSString * telemetryService;                                         //@synthesize telemetryService=_telemetryService - In the implementation block
@property (copy) NSNumber * useGeohashFromServer;                                     //@synthesize useGeohashFromServer=_useGeohashFromServer - In the implementation block
@property (copy) NSNumber * edgeSelectionEnabled;                                     //@synthesize edgeSelectionEnabled=_edgeSelectionEnabled - In the implementation block
@property (copy) NSNumber * edgeSelectionAlpha;                                       //@synthesize edgeSelectionAlpha=_edgeSelectionAlpha - In the implementation block
@property (copy) NSNumber * edgeSelectionWindowSize;                                  //@synthesize edgeSelectionWindowSize=_edgeSelectionWindowSize - In the implementation block
@property (copy) NSNumber * enableIPv6;                                               //@synthesize enableIPv6=_enableIPv6 - In the implementation block
@property (copy) NSArray * edges; 
@property (copy) NSNumber * requireTFO;                                               //@synthesize requireTFO=_requireTFO - In the implementation block
@property (copy) NSNumber * TFOLeeway;                                                //@synthesize TFOLeeway=_TFOLeeway - In the implementation block
@property (readonly) BOOL isIPv6Enabled; 
@property (copy) NSNumber * edgesGeneration;                                          //@synthesize edgesGeneration=_edgesGeneration - In the implementation block
@property (copy) NSNumber * usedEdgesGeneration;                                      //@synthesize usedEdgesGeneration=_usedEdgesGeneration - In the implementation block
@property (readonly) NPTuscanyEdge * currentEdge; 
@property (readonly) unsigned long long edgeCount; 
@property (readonly) BOOL hasEdges; 
@property (readonly) long long dayPassFetchCount; 
@property (readonly) NSDate * currentNetworkLastUsed; 
@property (nonatomic,retain) NSString * hostname;                                     //@synthesize hostname=_hostname - In the implementation block
@property (__weak) id<NPWaldoDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL shouldSave;                                                   //@synthesize shouldSave=_shouldSave - In the implementation block
@property (readonly) NSDate * expirationDate; 
@property (readonly) unsigned long long probeSize; 
@property (nonatomic,retain) NPLocation * cachedLocation;                             //@synthesize cachedLocation=_cachedLocation - In the implementation block
@property (nonatomic,retain) NSDate * locationCheckTimestamp;                         //@synthesize locationCheckTimestamp=_locationCheckTimestamp - In the implementation block
@property (nonatomic,retain) NSDate * locationExpiration;                             //@synthesize locationExpiration=_locationExpiration - In the implementation block
@property (nonatomic,retain) NPWaldo * defaults;                                      //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) NSPNetworkAgent * agent;                                 //@synthesize agent=_agent - In the implementation block
@property (nonatomic,retain) NPKeyBag * keybag;                                       //@synthesize keybag=_keybag - In the implementation block
@property (nonatomic,retain) NPWaldoLocationManager * locationManager;                //@synthesize locationManager=_locationManager - In the implementation block
@property (assign) BOOL reprocessPending;                                             //@synthesize reprocessPending=_reprocessPending - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createEndpointFromHostList:(id)arg1 defaultPortString:(id)arg2 allowIPv6:(BOOL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NPWaldoDelegate>)delegate;
-(void)setDelegate:(id<NPWaldoDelegate>)arg1 ;
-(NSString *)identifier;
-(long long)source;
-(NSDate *)expirationDate;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)timestamp;
-(NSString *)tag;
-(NPWaldo *)defaults;
-(void)setDefaults:(NPWaldo *)arg1 ;
-(NSString *)hostname;
-(unsigned)generation;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(void)setHostname:(NSString *)arg1 ;
-(void)setTag:(NSString *)arg1 ;
-(NSArray *)edges;
-(void)setEdges:(NSArray *)arg1 ;
-(void)link;
-(void)setViewSize:(NSNumber *)arg1 ;
-(NSNumber *)viewSize;
-(NPKeyBag *)keybag;
-(NSPNetworkAgent *)agent;
-(void)setAgent:(NSPNetworkAgent *)arg1 ;
-(void)setGeneration:(unsigned)arg1 ;
-(NSUUID *)configurationIdentifier;
-(void)removeFromKeychain;
-(void)setConfigurationIdentifier:(NSUUID *)arg1 ;
-(id)initWithIdentifier:(id)arg1 timestamp:(id)arg2 fromDictionary:(id)arg3 source:(long long)arg4 ;
-(NSNumber *)requireTFO;
-(void)setRequireTFO:(NSNumber *)arg1 ;
-(NSNumber *)edgeSelectionAlpha;
-(NSNumber *)edgeSelectionWindowSize;
-(void)setShouldSave:(BOOL)arg1 ;
-(void)saveToKeychain;
-(NSArray *)currentEdgeList;
-(long long)currentEdgeIndex;
-(BOOL)reprocessPending;
-(NSNumber *)probePause;
-(void)logEdgeList:(id)arg1 debug:(BOOL)arg2 toStdout:(BOOL)arg3 ;
-(void)reprocessAdHocWithEdgeIndex:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateEdgeSelection:(unsigned long long)arg1 ;
-(id)copyEdgeSelectionTelemetry;
-(void)resolveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setKeybag:(NPKeyBag *)arg1 ;
-(NSNumber *)probeTFO;
-(NSNumber *)probeNoTFOCookie;
-(void)setProbeTFO:(NSNumber *)arg1 ;
-(void)setProbeNoTFOCookie:(NSNumber *)arg1 ;
-(NSData *)updateHash;
-(void)setUpdateHash:(NSData *)arg1 ;
-(void)teardownNetworkAgent;
-(NWNetworkAgentRegistration *)agentRegistration;
-(void)setAgentRegistration:(NWNetworkAgentRegistration *)arg1 ;
-(NSNumber *)dayPassRequestTimeout;
-(NSNumber *)dayPassEnableSessionTicket;
-(NSNumber *)dayPassExtendedValidation;
-(NSString *)dayPassLeafOID;
-(NSNumber *)dayPassRevocationFailClosed;
-(NSNumber *)dayPassHostnamePrependLabel;
-(NSString *)dayPassHostname;
-(NSNumber *)dayPassPort;
-(id)onRampForIndex:(id)arg1 ;
-(BOOL)reResolve;
-(void)setReResolve:(BOOL)arg1 ;
-(BOOL)isIPv6Enabled;
-(NSArray *)allOnRamps;
-(void)setAllOnRamps:(NSArray *)arg1 ;
-(id)currentNetworkInfo;
-(NSMutableDictionary *)networkInformation;
-(void)rebuildLatencyMapAllSignatures:(BOOL)arg1 ;
-(void)linkAllSignatures:(BOOL)arg1 ;
-(void)linkLatenciesAllSignatures:(BOOL)arg1 ;
-(long long)indexOfBestEdge;
-(void)setCurrentEdgeIndex:(long long)arg1 ;
-(NSNumber *)retryPause;
-(NSNumber *)probeTimeout;
-(NSArray *)dayPassSoftExpiry;
-(NSNumber *)enableLatencyDerivation;
-(NSNumber *)latencyFactorX;
-(NSNumber *)latencyFactorA;
-(NSNumber *)latencyFactorB;
-(NSNumber *)edgeFairnessFactor;
-(NSNumber *)observedRTTSampleSize;
-(NSNumber *)signatureLimit;
-(NSNumber *)reprocessSamplingInterval;
-(NSNumber *)reprocessSampleSize;
-(NSNumber *)connectionIdleTimeoutMaximum;
-(NSNumber *)locationCheckInterval;
-(NSNumber *)locationToleranceDistance;
-(NSNumber *)locationTTL;
-(NPLocation *)cachedLocation;
-(NSDate *)locationCheckTimestamp;
-(NSURL *)telemetryURL;
-(NSString *)telemetryService;
-(NSNumber *)useGeohashFromServer;
-(NSNumber *)edgeSelectionEnabled;
-(NSNumber *)enableIPv6;
-(NSNumber *)TFOLeeway;
-(NSNumber *)edgesGeneration;
-(NSNumber *)usedEdgesGeneration;
-(void)setRetryPause:(NSNumber *)arg1 ;
-(void)setProbePause:(NSNumber *)arg1 ;
-(void)setProbeTimeout:(NSNumber *)arg1 ;
-(void)setDayPassRequestTimeout:(NSNumber *)arg1 ;
-(void)setDayPassSoftExpiry:(NSArray *)arg1 ;
-(void)setEnableLatencyDerivation:(NSNumber *)arg1 ;
-(void)setLatencyFactorX:(NSNumber *)arg1 ;
-(void)setLatencyFactorA:(NSNumber *)arg1 ;
-(void)setLatencyFactorB:(NSNumber *)arg1 ;
-(void)setEdgeFairnessFactor:(NSNumber *)arg1 ;
-(void)setObservedRTTSampleSize:(NSNumber *)arg1 ;
-(void)setReprocessSamplingInterval:(NSNumber *)arg1 ;
-(void)setReprocessSampleSize:(NSNumber *)arg1 ;
-(void)setLocationCheckInterval:(NSNumber *)arg1 ;
-(void)setLocationToleranceDistance:(NSNumber *)arg1 ;
-(void)setLocationTTL:(NSNumber *)arg1 ;
-(void)setDayPassHostname:(NSString *)arg1 ;
-(void)setDayPassHostnamePrependLabel:(NSNumber *)arg1 ;
-(void)setDayPassExtendedValidation:(NSNumber *)arg1 ;
-(void)setDayPassEnableSessionTicket:(NSNumber *)arg1 ;
-(void)setDayPassLeafOID:(NSString *)arg1 ;
-(void)setDayPassRevocationFailClosed:(NSNumber *)arg1 ;
-(void)setTelemetryURL:(NSURL *)arg1 ;
-(void)setTelemetryService:(NSString *)arg1 ;
-(void)setUseGeohashFromServer:(NSNumber *)arg1 ;
-(void)setEdgeSelectionEnabled:(NSNumber *)arg1 ;
-(void)setEdgeSelectionAlpha:(NSNumber *)arg1 ;
-(void)setEdgeSelectionWindowSize:(NSNumber *)arg1 ;
-(void)setEnableIPv6:(NSNumber *)arg1 ;
-(void)setTFOLeeway:(NSNumber *)arg1 ;
-(void)setEdgesGeneration:(NSNumber *)arg1 ;
-(void)setUsedEdgesGeneration:(NSNumber *)arg1 ;
-(void)setSignatureLimit:(NSNumber *)arg1 ;
-(void)setConnectionIdleTimeoutMaximum:(NSNumber *)arg1 ;
-(unsigned long long)edgeCount;
-(id)edgeAtIndex:(long long)arg1 ;
-(BOOL)shouldSave;
-(void)ageOutLatencyMap;
-(NPWaldoLocationManager *)locationManager;
-(BOOL)isLatenciesCompleteForNetwork:(id)arg1 ;
-(void)refreshDayPassesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)pushKeybagToKernel;
-(void)reprocessWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)pushKeybagToKernelCanReuse:(BOOL)arg1 ;
-(long long)dayPassFetchCount;
-(void)updateNetworkAgentWithKeybag:(id)arg1 networkInfo:(id)arg2 ;
-(BOOL)isEndpointProbed:(id)arg1 parameters:(networkParameters*)arg2 latencies:(id)arg3 checkSampleSize:(BOOL)arg4 incompleteLatency:(id*)arg5 ;
-(void)cleanupStaleKeys;
-(BOOL)reprocessWithNewRTT:(unsigned long long)arg1 reProbe:(BOOL*)arg2 ;
-(BOOL)shouldPerformDayPassRefresh;
-(void)updateMetaDataNeedProbe:(BOOL)arg1 refresh:(BOOL)arg2 push:(BOOL)arg3 minRTT:(unsigned long long)arg4 ;
-(void)setNetworkInformation:(NSMutableDictionary *)arg1 ;
-(void)cancelProbes;
-(void)timestampNetworkSignature:(id)arg1 ;
-(void)setReprocessCancelled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)reprocessSamplingTimer;
-(void)setReprocessSamplingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)mergeEdgeList:(id)arg1 forNetworkSignature:(id)arg2 ;
-(void)loadObservedRTTSamples:(id)arg1 ;
-(void)reprocessEdgeAtIndex:(unsigned long long)arg1 networkSignature:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)latencyComparator;
-(NSObject*<OS_dispatch_queue>)reprocessQueue;
-(id)createEdgeLatenciesToProbeWithEdgeIndex:(unsigned long long)arg1 startSampleCount:(unsigned long long*)arg2 ;
-(void)setReprocessPending:(BOOL)arg1 ;
-(void)reprocessLatencies:(id)arg1 sampleCount:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)probeSize;
-(BOOL)reprocessCancelled;
-(long long)getFallbackReasonForLatencies:(id)arg1 ;
-(void)startProbingEdges:(id)arg1 atIndex:(unsigned long long)arg2 doneCount:(unsigned long long)arg3 sampleCount:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)validateEdgeList:(id)arg1 ;
-(NPTuscanyEdge *)currentEdge;
-(void)resortEdgeListForCurrentNetworkSignature;
-(void)getDayPassRTT;
-(id)copyEdgeList:(id)arg1 ;
-(id)copyEdgeListRTTAverage:(id)arg1 observed:(BOOL)arg2 shortDescription:(BOOL)arg3 ;
-(void)merge:(id)arg1 missingSettingsOnly:(BOOL)arg2 ;
-(id)initFromKeychainWithIdentifier:(id)arg1 ;
-(void)establishTrustWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)pushKeybagToKernelUpdateGeneration:(BOOL)arg1 ;
-(void)removeDayPassesFromKernel;
-(void)handleUsageReport:(id)arg1 ;
-(void)setCurrentNetworkCharacteristics:(id)arg1 ;
-(long long)getCurrentNetworkInterfaceType;
-(void)initializeEdgeSelection;
-(BOOL)shouldFetchWaldo;
-(BOOL)hasEdges;
-(void)logLatencyInfoToStdout:(BOOL)arg1 logAll:(BOOL)arg2 logEdgeSelection:(BOOL)arg3 ;
-(id)copyLatencyInfoDictionary:(BOOL)arg1 copyAll:(BOOL)arg2 ;
-(NSDate *)currentNetworkLastUsed;
-(id)edgeContainingOnRamp:(id)arg1 ;
-(id)copyStateIncludeDistance:(BOOL)arg1 ;
-(void)incrementSessionCounters;
-(void)setDayPassPort:(NSNumber *)arg1 ;
-(void)setCachedLocation:(NPLocation *)arg1 ;
-(void)setLocationCheckTimestamp:(NSDate *)arg1 ;
-(NSDate *)locationExpiration;
-(void)setLocationExpiration:(NSDate *)arg1 ;
-(void)setLocationManager:(NPWaldoLocationManager *)arg1 ;
-(BOOL)daypassRefreshInProgress;
-(void)setDaypassRefreshInProgress:(BOOL)arg1 ;
-(NSArray *)currentEdges;
-(NPTuscanyEdge *)nextEdge;
@end

