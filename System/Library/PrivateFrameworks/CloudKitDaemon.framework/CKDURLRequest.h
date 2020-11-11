/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/C2RequestDelegate.h>
#import <libobjc.A.dylib/CKDZoneGatekeeperWaiter.h>
#import <libobjc.A.dylib/CKDFlowControllable.h>

@protocol CKDAccountInfoProvider, CKDContextInfoProvider, CKDAccountAccessInfoProvider, OS_os_activity, CKDURLRequestMetricsDelegate, CKDURLRequestAuthRetryDelegate, OS_dispatch_queue, OS_voucher;
@class CKDFlowControlManager, NSString, CKDResponseBodyParser, NSData, CKDProtobufStreamWriter, NSObject, NSDictionary, NSArray, CKDOperation, CKDProtocolTranslator, NSError, NSURLSessionDataTask, C2RequestOptions, NSURLRequest, NSHTTPURLResponse, NSURLSession, NSMutableSet, CKDTrafficLogger, NSDate, CKDOperationMetrics, CKDTapToRadarRequest, NSMutableDictionary, NSMutableArray, NSNumber, NSInputStream, NSURL;

@interface CKDURLRequest : NSObject <C2RequestDelegate, CKDZoneGatekeeperWaiter, CKDFlowControllable> {

	id<CKDAccountInfoProvider> _accountInfoProvider;
	id<CKDContextInfoProvider> _contextInfoProvider;
	id<CKDAccountAccessInfoProvider> _accountAccessInfoProvider;
	CKDFlowControlManager* _cachedFlowControlManager;
	long long _responseStatusCode;
	NSString* _requestUUID;
	BOOL _didSendRequest;
	BOOL _didFinishLoading;
	BOOL _finished;
	BOOL _didRetrySignature;
	CKDResponseBodyParser* _responseBodyParser;
	BOOL _allowAutomaticRedirects;
	/*^block*/id _requestProgressBlock;
	/*^block*/id _responseProgressBlock;
	/*^block*/id _completionBlock;
	NSData* _fakeResponseData;
	BOOL _haveParsedFakeResponseData;
	CKDProtobufStreamWriter* _streamWriter;
	NSObject*<OS_os_activity> _osActivity;
	NSObject*<OS_os_activity> _transmissionActivity;
	BOOL _needsAuthRetry;
	BOOL _isWaitingOnAuthRenew;
	BOOL _isHandlingAuthRetry;
	BOOL _didRetryAuth;
	BOOL _cancelled;
	BOOL _haveCachedServerType;
	BOOL _haveCachedPartitionType;
	BOOL _didReceiveResponseBodyData;
	BOOL _didFetchNilAuthToken;
	NSDictionary* _requestProperties;
	NSArray* _requestOperations;
	CKDOperation* _operation;
	id<CKDURLRequestMetricsDelegate> _metricsDelegate;
	id<CKDURLRequestAuthRetryDelegate> _authRetryDelegate;
	CKDProtocolTranslator* _translator;
	NSString* _automatedDeviceGroup;
	NSDictionary* _unitTestOverrides;
	NSDictionary* _clientProvidedAdditionalHeaderValues;
	NSDictionary* _fakeResponseOperationResultByItemID;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _lifecycleQueue;
	NSURLSessionDataTask* _urlSessionTask;
	C2RequestOptions* _c2RequestOptions;
	NSURLRequest* _request;
	NSHTTPURLResponse* _response;
	NSURLSession* _urlSession;
	NSMutableSet* _responseObjectUUIDs;
	CKDTrafficLogger* _trafficLogger;
	NSString* _deviceID;
	unsigned long long _numDownloadedElements;
	long long _cachedServerType;
	long long _cachedPartitionType;
	NSDate* _dateRequestWentOut;
	CKDOperationMetrics* _metrics;
	NSDictionary* _timingData;
	NSObject*<OS_voucher> _voucher;
	NSString* _cloudKitAuthToken;
	NSString* _iCloudAuthToken;
	NSString* _serverProvidedAutoBugCaptureReason;
	CKDTapToRadarRequest* _serverProvidedTapToRadarRequest;
	NSString* _serverProvidedAutoSysdiagnoseCollectionReason;
	NSMutableDictionary* _countsByRequestOperationType;
	NSMutableDictionary* _overriddenHeaders;
	NSMutableArray* _redirectHistory;

}

@property (assign,nonatomic,__weak) CKDOperation * operation;                                            //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lifecycleQueue;                                //@synthesize lifecycleQueue=_lifecycleQueue - In the implementation block
@property (retain) NSURLSessionDataTask * urlSessionTask;                                                //@synthesize urlSessionTask=_urlSessionTask - In the implementation block
@property (retain) C2RequestOptions * c2RequestOptions;                                                  //@synthesize c2RequestOptions=_c2RequestOptions - In the implementation block
@property (retain) NSURLRequest * request;                                                               //@synthesize request=_request - In the implementation block
@property (retain) NSHTTPURLResponse * response;                                                         //@synthesize response=_response - In the implementation block
@property (retain) NSError * error;                                                                      //@synthesize error=_error - In the implementation block
@property (retain) NSURLSession * urlSession;                                                            //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) NSMutableSet * responseObjectUUIDs;                                         //@synthesize responseObjectUUIDs=_responseObjectUUIDs - In the implementation block
@property (nonatomic,retain) CKDTrafficLogger * trafficLogger;                                           //@synthesize trafficLogger=_trafficLogger - In the implementation block
@property (nonatomic,copy) NSString * deviceID;                                                          //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) unsigned long long numDownloadedElements;                                   //@synthesize numDownloadedElements=_numDownloadedElements - In the implementation block
@property (assign,nonatomic) BOOL didRetryAuth;                                                          //@synthesize didRetryAuth=_didRetryAuth - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                                           //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL haveCachedServerType;                                                  //@synthesize haveCachedServerType=_haveCachedServerType - In the implementation block
@property (assign,nonatomic) BOOL haveCachedPartitionType;                                               //@synthesize haveCachedPartitionType=_haveCachedPartitionType - In the implementation block
@property (assign,nonatomic) long long cachedServerType;                                                 //@synthesize cachedServerType=_cachedServerType - In the implementation block
@property (assign,nonatomic) long long cachedPartitionType;                                              //@synthesize cachedPartitionType=_cachedPartitionType - In the implementation block
@property (nonatomic,retain) CKDProtocolTranslator * translator;                                         //@synthesize translator=_translator - In the implementation block
@property (retain) NSDate * dateRequestWentOut;                                                          //@synthesize dateRequestWentOut=_dateRequestWentOut - In the implementation block
@property (nonatomic,retain) CKDOperationMetrics * metrics;                                              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSDictionary * timingData;                                                  //@synthesize timingData=_timingData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_voucher> voucher;                                              //@synthesize voucher=_voucher - In the implementation block
@property (nonatomic,retain) NSString * cloudKitAuthToken;                                               //@synthesize cloudKitAuthToken=_cloudKitAuthToken - In the implementation block
@property (nonatomic,retain) NSString * iCloudAuthToken;                                                 //@synthesize iCloudAuthToken=_iCloudAuthToken - In the implementation block
@property (assign,nonatomic) BOOL didReceiveResponseBodyData;                                            //@synthesize didReceiveResponseBodyData=_didReceiveResponseBodyData - In the implementation block
@property (nonatomic,copy) NSString * serverProvidedAutoBugCaptureReason;                                //@synthesize serverProvidedAutoBugCaptureReason=_serverProvidedAutoBugCaptureReason - In the implementation block
@property (nonatomic,retain) CKDTapToRadarRequest * serverProvidedTapToRadarRequest;                     //@synthesize serverProvidedTapToRadarRequest=_serverProvidedTapToRadarRequest - In the implementation block
@property (nonatomic,retain) NSString * serverProvidedAutoSysdiagnoseCollectionReason;                   //@synthesize serverProvidedAutoSysdiagnoseCollectionReason=_serverProvidedAutoSysdiagnoseCollectionReason - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * countsByRequestOperationType;                         //@synthesize countsByRequestOperationType=_countsByRequestOperationType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * overriddenHeaders;                                    //@synthesize overriddenHeaders=_overriddenHeaders - In the implementation block
@property (nonatomic,retain) NSMutableArray * redirectHistory;                                           //@synthesize redirectHistory=_redirectHistory - In the implementation block
@property (nonatomic,readonly) BOOL allowsCellularAccess; 
@property (nonatomic,readonly) NSString * authPromptReason; 
@property (nonatomic,readonly) BOOL resolvedAutomaticallyRetryNetworkFailures; 
@property (nonatomic,readonly) unsigned long long resolvedDiscretionaryNetworkBehavior; 
@property (nonatomic,readonly) unsigned long long duetPreClearedMode; 
@property (nonatomic,readonly) BOOL preferAnonymousRequests; 
@property (nonatomic,readonly) BOOL allowsBackgroundNetworking; 
@property (nonatomic,readonly) NSString * operationIDForProtobuf; 
@property (nonatomic,readonly) NSString * operationGroupID; 
@property (nonatomic,readonly) NSString * operationGroupName; 
@property (nonatomic,readonly) NSNumber * operationGroupQuantity; 
@property (nonatomic,readonly) unsigned long long networkServiceType; 
@property (nonatomic,readonly) BOOL allowsPowerNapScheduling; 
@property (nonatomic,readonly) NSString * operationID; 
@property (assign,nonatomic) BOOL didFetchNilAuthToken;                                                  //@synthesize didFetchNilAuthToken=_didFetchNilAuthToken - In the implementation block
@property (nonatomic,retain) id<CKDAccountInfoProvider> accountInfoProvider;                             //@synthesize accountInfoProvider=_accountInfoProvider - In the implementation block
@property (nonatomic,retain) id<CKDContextInfoProvider> contextInfoProvider;                             //@synthesize contextInfoProvider=_contextInfoProvider - In the implementation block
@property (nonatomic,retain) id<CKDAccountAccessInfoProvider> accountAccessInfoProvider;                 //@synthesize accountAccessInfoProvider=_accountAccessInfoProvider - In the implementation block
@property (nonatomic,retain) CKDFlowControlManager * cachedFlowControlManager;                           //@synthesize cachedFlowControlManager=_cachedFlowControlManager - In the implementation block
@property (assign,nonatomic,__weak) id<CKDURLRequestMetricsDelegate> metricsDelegate;                    //@synthesize metricsDelegate=_metricsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CKDURLRequestAuthRetryDelegate> authRetryDelegate;                //@synthesize authRetryDelegate=_authRetryDelegate - In the implementation block
@property (assign,nonatomic) BOOL allowAutomaticRedirects;                                               //@synthesize allowAutomaticRedirects=_allowAutomaticRedirects - In the implementation block
@property (nonatomic,retain) NSDictionary * requestProperties;                                           //@synthesize requestProperties=_requestProperties - In the implementation block
@property (nonatomic,readonly) BOOL usesBackgroundSession; 
@property (nonatomic,readonly) BOOL sendRequestAnonymously; 
@property (nonatomic,retain) NSString * automatedDeviceGroup;                                            //@synthesize automatedDeviceGroup=_automatedDeviceGroup - In the implementation block
@property (nonatomic,readonly) long long databaseScope; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifierForContainerAccess; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifierForNetworkAttribution; 
@property (nonatomic,readonly) NSString * sourceApplicationSecondaryIdentifier; 
@property (nonatomic,retain) NSDictionary * unitTestOverrides;                                           //@synthesize unitTestOverrides=_unitTestOverrides - In the implementation block
@property (nonatomic,readonly) CKDProtobufStreamWriter * streamWriter;                                   //@synthesize streamWriter=_streamWriter - In the implementation block
@property (nonatomic,copy) id requestProgressBlock;                                                      //@synthesize requestProgressBlock=_requestProgressBlock - In the implementation block
@property (nonatomic,copy) id responseProgressBlock;                                                     //@synthesize responseProgressBlock=_responseProgressBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                           //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) CKDResponseBodyParser * responseBodyParser;                                 //@synthesize responseBodyParser=_responseBodyParser - In the implementation block
@property (nonatomic,readonly) NSString * httpMethod; 
@property (nonatomic,readonly) NSDictionary * additionalHeaderValues; 
@property (nonatomic,retain) NSDictionary * clientProvidedAdditionalHeaderValues;                        //@synthesize clientProvidedAdditionalHeaderValues=_clientProvidedAdditionalHeaderValues - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestBody; 
@property (nonatomic,readonly) BOOL expectsResponseBody; 
@property (nonatomic,readonly) NSInputStream * requestBodyStream; 
@property (nonatomic,readonly) NSArray * requestOperations;                                              //@synthesize requestOperations=_requestOperations - In the implementation block
@property (nonatomic,readonly) NSArray * requestOperationClasses; 
@property (nonatomic,readonly) int isolationLevel; 
@property (nonatomic,readonly) int operationType; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) long long serverType; 
@property (nonatomic,readonly) long long partitionType; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) BOOL shouldCompressBody; 
@property (nonatomic,readonly) NSString * acceptContentType; 
@property (nonatomic,readonly) NSString * requestContentType; 
@property (nonatomic,readonly) NSString * protobufOperationName; 
@property (nonatomic,readonly) BOOL requestGETPreAuth; 
@property (nonatomic,readonly) NSString * sectionID; 
@property (nonatomic,retain) NSDictionary * fakeResponseOperationResultByItemID;                         //@synthesize fakeResponseOperationResultByItemID=_fakeResponseOperationResultByItemID - In the implementation block
@property (readonly) BOOL isFinished; 
@property (nonatomic,readonly) NSDictionary * responseHeaders; 
@property (nonatomic,readonly) long long responseStatusCode;                                             //@synthesize responseStatusCode=_responseStatusCode - In the implementation block
@property (nonatomic,readonly) NSURL * lastRedirectURL; 
@property (nonatomic,readonly) NSString * requestUUID;                                                   //@synthesize requestUUID=_requestUUID - In the implementation block
@property (assign) BOOL needsAuthRetry;                                                                  //@synthesize needsAuthRetry=_needsAuthRetry - In the implementation block
@property (assign) BOOL isWaitingOnAuthRenew;                                                            //@synthesize isWaitingOnAuthRenew=_isWaitingOnAuthRenew - In the implementation block
@property (assign) BOOL isHandlingAuthRetry;                                                             //@synthesize isHandlingAuthRetry=_isHandlingAuthRetry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long qualityOfService; 
@property (nonatomic,readonly) NSString * flowControlKey; 
-(NSString *)description;
-(void)dealloc;
-(NSError *)error;
-(void)setCompletionBlock:(id)arg1 ;
-(long long)responseStatusCode;
-(NSDictionary *)responseHeaders;
-(NSDictionary *)timingData;
-(NSURLRequest *)request;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)cancel;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSHTTPURLResponse *)response;
-(NSString *)path;
-(double)timeoutIntervalForRequest;
-(double)timeoutIntervalForResource;
-(unsigned long long)networkServiceType;
-(BOOL)allowsCellularAccess;
-(NSURL *)url;
-(BOOL)isCancelled;
-(CKDOperation *)operation;
-(void)setOperation:(CKDOperation *)arg1 ;
-(BOOL)isFinished;
-(id)completionBlock;
-(long long)qualityOfService;
-(BOOL)validate:(id*)arg1 ;
-(long long)databaseScope;
-(NSString *)operationID;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(int)operationType;
-(long long)serverType;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)allowsPowerNapScheduling;
-(void)setMetrics:(CKDOperationMetrics *)arg1 ;
-(CKDOperationMetrics *)metrics;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(id)deviceIdentifier;
-(NSURLSession *)urlSession;
-(id)requestOptions;
-(void)finishWithError:(id)arg1 ;
-(id)ckShortDescription;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(NSDictionary *)unitTestOverrides;
-(void)setUnitTestOverrides:(NSDictionary *)arg1 ;
-(NSString *)flowControlKey;
-(NSString *)automatedDeviceGroup;
-(void)setAutomatedDeviceGroup:(NSString *)arg1 ;
-(NSString *)sectionID;
-(unsigned long long)duetPreClearedMode;
-(BOOL)usesBackgroundSession;
-(BOOL)preferAnonymousRequests;
-(NSString *)requestUUID;
-(NSString *)operationGroupID;
-(NSString *)authPromptReason;
-(BOOL)allowsBackgroundNetworking;
-(id)initWithOperation:(id)arg1 ;
-(NSString *)operationGroupName;
-(long long)partitionType;
-(NSObject*<OS_voucher>)voucher;
-(void)setVoucher:(NSObject*<OS_voucher>)arg1 ;
-(void)setRequestProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)requestProperties;
-(NSString *)iCloudAuthToken;
-(void)setTimingData:(NSDictionary *)arg1 ;
-(NSString *)httpMethod;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(void)setAccountInfoProvider:(id<CKDAccountInfoProvider>)arg1 ;
-(id<CKDAccountInfoProvider>)accountInfoProvider;
-(CKDResponseBodyParser *)responseBodyParser;
-(NSDictionary *)additionalHeaderValues;
-(void)setAllowAutomaticRedirects:(BOOL)arg1 ;
-(NSURL *)lastRedirectURL;
-(NSInputStream *)requestBodyStream;
-(void)tearDownResources;
-(void)setResponseBodyParser:(CKDResponseBodyParser *)arg1 ;
-(BOOL)markAsFinished;
-(id)requestProgressBlock;
-(id)responseProgressBlock;
-(BOOL)shouldLogResponseBody;
-(BOOL)allowAutomaticRedirects;
-(unsigned long long)numDownloadedElements;
-(void)overrideRequestHeader:(id)arg1 withValue:(id)arg2 ;
-(void)setRequestProgressBlock:(id)arg1 ;
-(void)setResponseProgressBlock:(id)arg1 ;
-(CKDProtocolTranslator *)translator;
-(void)setTranslator:(CKDProtocolTranslator *)arg1 ;
-(void)setNumDownloadedElements:(unsigned long long)arg1 ;
-(BOOL)expectsResponseBody;
-(id)statusReportWithIndent:(unsigned long long)arg1 ;
-(void)setContextInfoProvider:(id<CKDContextInfoProvider>)arg1 ;
-(void)setAccountAccessInfoProvider:(id<CKDAccountAccessInfoProvider>)arg1 ;
-(id<CKDContextInfoProvider>)contextInfoProvider;
-(void)setCachedFlowControlManager:(CKDFlowControlManager *)arg1 ;
-(void)setFakeResponseOperationResultByItemID:(NSDictionary *)arg1 ;
-(void)performRequest;
-(NSString *)applicationBundleIdentifierForContainerAccess;
-(NSString *)applicationBundleIdentifierForNetworkAttribution;
-(BOOL)resolvedAutomaticallyRetryNetworkFailures;
-(unsigned long long)resolvedDiscretionaryNetworkBehavior;
-(void)setClientProvidedAdditionalHeaderValues:(NSDictionary *)arg1 ;
-(void)setMetricsDelegate:(id<CKDURLRequestMetricsDelegate>)arg1 ;
-(void)setAuthRetryDelegate:(id<CKDURLRequestAuthRetryDelegate>)arg1 ;
-(id)requestOperationCountsByOperationType;
-(BOOL)expectDelayBeforeRequestBegins;
-(void)_tearDownStreamWriter;
-(NSURLSessionDataTask *)urlSessionTask;
-(NSObject*<OS_dispatch_queue>)lifecycleQueue;
-(id)generateRequestOperations;
-(NSArray *)requestOperations;
-(BOOL)includeContainerInfo;
-(BOOL)sendRequestAnonymously;
-(int)isolationLevel;
-(NSNumber *)operationGroupQuantity;
-(CKDFlowControlManager *)cachedFlowControlManager;
-(BOOL)requestGETPreAuth;
-(id)createAssetAuthorizeGetRequestOptionsHeaderInfoWithKey:(id)arg1 value:(id)arg2 ;
-(void)_registerRequestOperationTypesForOperations:(id)arg1 ;
-(CKDProtobufStreamWriter *)streamWriter;
-(NSMutableDictionary *)countsByRequestOperationType;
-(void)setCountsByRequestOperationType:(NSMutableDictionary *)arg1 ;
-(id<CKDURLRequestAuthRetryDelegate>)authRetryDelegate;
-(BOOL)usesiCloudAuthToken;
-(BOOL)usesCloudKitAuthToken;
-(id<CKDAccountAccessInfoProvider>)accountAccessInfoProvider;
-(void)setIsWaitingOnAuthRenew:(BOOL)arg1 ;
-(NSString *)cloudKitAuthToken;
-(BOOL)didRetryAuth;
-(void)setDidRetryAuth:(BOOL)arg1 ;
-(void)setIsHandlingAuthRetry:(BOOL)arg1 ;
-(void)tearDownResourcesAndReleaseTheZoneLocks:(BOOL)arg1 ;
-(void)performOnLifecycleQueueIfNotFinished:(/*^block*/id)arg1 ;
-(void)_renewAuthTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleAuthFailure;
-(long long)_handleServerProtobufResult:(id)arg1 rawData:(id)arg2 ;
-(NSMutableSet *)responseObjectUUIDs;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(long long)_handleServerJSONResult:(id)arg1 ;
-(void)requestDidParseJSONObject:(id)arg1 ;
-(long long)_handlePlistResult:(id)arg1 ;
-(void)requestDidParsePlistObject:(id)arg1 ;
-(Class)expectedResponseClass;
-(BOOL)parsingStandaloneMessage;
-(/*^block*/id)_protobufObjectParsedBlock;
-(CKDTrafficLogger *)trafficLogger;
-(/*^block*/id)_jsonObjectParsedBlock;
-(/*^block*/id)_xmlObjectParsedBlock;
-(void)requestDidParsePlaintextObject:(id)arg1 ;
-(void)requestDidParse509CertObject:(id)arg1 ;
-(void)_finishOnLifecycleQueueWithError:(id)arg1 ;
-(NSArray *)requestOperationClasses;
-(NSString *)protobufOperationName;
-(BOOL)shouldCompressBody;
-(BOOL)allowsAnonymousAccount;
-(void)setDidReceiveResponseBodyData:(BOOL)arg1 ;
-(void)_setupPublicDatabaseURL;
-(void)performASyncOnLifecycleQueueIfNotFinished:(/*^block*/id)arg1 ;
-(BOOL)requiresAppPartitionURL;
-(void)_setupPrivateDatabaseURL;
-(BOOL)requiresUserPartitionURL;
-(void)_setupConfiguration;
-(BOOL)requiresConfiguration;
-(void)_fetchContainerScopedUserID;
-(BOOL)allowsAuthedAccount;
-(void)_fetchDeviceID;
-(BOOL)requiresDeviceID;
-(void)_acquireZoneGates;
-(BOOL)requiresTokenRegistration;
-(void)_performRequest;
-(id)zoneIDsToLock;
-(void)_prepareAuthTokens;
-(void)_prepareCloudKitAuthToken;
-(void)prepareRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)setCloudKitAuthToken:(NSString *)arg1 ;
-(BOOL)didFetchNilAuthToken;
-(void)setDidFetchNilAuthToken:(BOOL)arg1 ;
-(void)_authTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setICloudAuthToken:(NSString *)arg1 ;
-(void)_registerPushTokens;
-(BOOL)hasRequestBody;
-(NSString *)requestContentType;
-(NSString *)acceptContentType;
-(NSString *)operationIDForProtobuf;
-(NSDictionary *)clientProvidedAdditionalHeaderValues;
-(NSMutableDictionary *)overriddenHeaders;
-(Class)requestMessageClass;
-(void)_loadRequest:(id)arg1 ;
-(void)setUrlSessionTask:(NSURLSessionDataTask *)arg1 ;
-(id)_CFNetworkTaskIdentifierString;
-(void)setDateRequestWentOut:(NSDate *)arg1 ;
-(BOOL)_onLifecycleQueue;
-(id)_wrapErrorIfNecessary:(id)arg1 ;
-(NSString *)serverProvidedAutoBugCaptureReason;
-(void)_triggerAutoBugCaptureWithErrorPayload:(id)arg1 ;
-(CKDTapToRadarRequest *)serverProvidedTapToRadarRequest;
-(NSString *)serverProvidedAutoSysdiagnoseCollectionReason;
-(NSDate *)dateRequestWentOut;
-(id<CKDURLRequestMetricsDelegate>)metricsDelegate;
-(void)setC2RequestOptions:(C2RequestOptions *)arg1 ;
-(NSMutableArray *)redirectHistory;
-(void)setRedirectHistory:(NSMutableArray *)arg1 ;
-(id)defaultParserForContentType:(id)arg1 ;
-(void)requestDidComplete;
-(void)setServerProvidedAutoBugCaptureReason:(NSString *)arg1 ;
-(void)setServerProvidedTapToRadarRequest:(CKDTapToRadarRequest *)arg1 ;
-(void)setServerProvidedAutoSysdiagnoseCollectionReason:(NSString *)arg1 ;
-(BOOL)isHandlingAuthRetry;
-(BOOL)needsAuthRetry;
-(void)setNeedsAuthRetry:(BOOL)arg1 ;
-(BOOL)didReceiveResponseBodyData;
-(BOOL)isWaitingOnAuthRenew;
-(BOOL)expectsSingleObject;
-(id)operationRequestWithType:(int)arg1 ;
-(NSDictionary *)fakeResponseOperationResultByItemID;
-(void)setLifecycleQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(C2RequestOptions *)c2RequestOptions;
-(void)setResponseObjectUUIDs:(NSMutableSet *)arg1 ;
-(void)setTrafficLogger:(CKDTrafficLogger *)arg1 ;
-(BOOL)haveCachedServerType;
-(void)setHaveCachedServerType:(BOOL)arg1 ;
-(BOOL)haveCachedPartitionType;
-(void)setHaveCachedPartitionType:(BOOL)arg1 ;
-(long long)cachedServerType;
-(void)setCachedServerType:(long long)arg1 ;
-(long long)cachedPartitionType;
-(void)setCachedPartitionType:(long long)arg1 ;
-(void)setOverriddenHeaders:(NSMutableDictionary *)arg1 ;
@end

