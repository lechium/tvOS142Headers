/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol SZExtractor;
@class NSString, NSURLRequest, NSURLResponse, NSDate, NSError, NSURL, NSUUID, NSData, NSDictionary, AVURLAsset, __CFN_TaskMetrics;

@interface __NSCFURLSessionTaskInfo : NSObject <NSSecureCoding> {

	BOOL _resumedAndWaitingForEarliestBeginDate;
	BOOL _respondedToWillBeginDelayedRequestCallback;
	BOOL _hasStarted;
	BOOL _expectingResumeCallback;
	BOOL _establishedConnection;
	BOOL _disablesRetry;
	BOOL _shouldCancelOnDisconnect;
	BOOL _basePrioritySetExplicitly;
	BOOL _discretionary;
	BOOL _mayBeDemotedToDiscretionary;
	BOOL __hasSZExtractor;
	BOOL __doesSZExtractorConsumeExtractedData;
	BOOL _startedUserInitiated;
	BOOL _initializedWithAVAsset;
	unsigned short __TLSMinimumSupportedProtocolVersion;
	unsigned short __TLSMaximumSupportedProtocolVersion;
	unsigned _qos;
	unsigned long long _identifier;
	unsigned long long _taskKind;
	double _creationTime;
	long long _state;
	unsigned long long _suspendCount;
	NSString* _taskDescription;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	NSURLResponse* _response;
	NSDate* _earliestBeginDate;
	long long _countOfBytesClientExpectsToSend;
	long long _countOfBytesClientExpectsToReceive;
	NSError* _error;
	NSURL* _fileURL;
	NSURL* _downloadFileURL;
	NSString* _bundleID;
	NSString* _sessionID;
	unsigned long long _retryCount;
	unsigned long long _lowThroughputTimerRetryCount;
	long long _basePriority;
	long long _discretionaryOverride;
	NSString* _personaUniqueString;
	NSUUID* _uniqueIdentifier;
	NSString* _storagePartitionIdentifier;
	long long _bytesPerSecondLimit;
	unsigned long long _expectedProgressTarget;
	double _loadingPriority;
	NSString* _pathToDownloadTaskFile;
	double _timeoutIntervalForResource;
	id<SZExtractor> __extractor;
	unsigned long long _AVAssetDownloadToken;
	NSURL* _URL;
	NSURL* _destinationURL;
	NSString* _assetTitle;
	NSData* _assetArtworkData;
	NSDictionary* _options;
	AVURLAsset* _AVURLAsset;
	NSURL* _AVAssetURL;
	NSURL* _temporaryDestinationURL;
	NSDictionary* _resolvedMediaSelectionPlist;
	NSString* _avAssetDownloadChildDownloadSessionIdentifier;
	long long _countOfBytesReceived;
	long long _countOfBytesSent;
	long long _countOfBytesExpectedToSend;
	long long _countOfBytesExpectedToReceive;
	NSDictionary* __backgroundTrailers;
	NSDictionary* _additionalProperties;
	__CFN_TaskMetrics* _taskMetrics;

}

@property (assign) unsigned long long identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long taskKind;                                         //@synthesize taskKind=_taskKind - In the implementation block
@property (assign) double creationTime;                                                 //@synthesize creationTime=_creationTime - In the implementation block
@property (assign) long long state;                                                     //@synthesize state=_state - In the implementation block
@property (assign) unsigned long long suspendCount;                                     //@synthesize suspendCount=_suspendCount - In the implementation block
@property (copy) NSString * taskDescription;                                            //@synthesize taskDescription=_taskDescription - In the implementation block
@property (copy) NSURLRequest * originalRequest;                                        //@synthesize originalRequest=_originalRequest - In the implementation block
@property (copy) NSURLRequest * currentRequest;                                         //@synthesize currentRequest=_currentRequest - In the implementation block
@property (copy) NSURLResponse * response;                                              //@synthesize response=_response - In the implementation block
@property (copy) NSDate * earliestBeginDate;                                            //@synthesize earliestBeginDate=_earliestBeginDate - In the implementation block
@property (assign) long long countOfBytesClientExpectsToSend;                           //@synthesize countOfBytesClientExpectsToSend=_countOfBytesClientExpectsToSend - In the implementation block
@property (assign) long long countOfBytesClientExpectsToReceive;                        //@synthesize countOfBytesClientExpectsToReceive=_countOfBytesClientExpectsToReceive - In the implementation block
@property (assign) BOOL resumedAndWaitingForEarliestBeginDate;                          //@synthesize resumedAndWaitingForEarliestBeginDate=_resumedAndWaitingForEarliestBeginDate - In the implementation block
@property (assign) BOOL respondedToWillBeginDelayedRequestCallback;                     //@synthesize respondedToWillBeginDelayedRequestCallback=_respondedToWillBeginDelayedRequestCallback - In the implementation block
@property (copy) NSError * error;                                                       //@synthesize error=_error - In the implementation block
@property (copy) NSURL * fileURL;                                                       //@synthesize fileURL=_fileURL - In the implementation block
@property (copy) NSURL * downloadFileURL;                                               //@synthesize downloadFileURL=_downloadFileURL - In the implementation block
@property (copy) NSString * bundleID;                                                   //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSString * sessionID;                                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (assign) BOOL hasStarted;                                                     //@synthesize hasStarted=_hasStarted - In the implementation block
@property (assign) BOOL expectingResumeCallback;                                        //@synthesize expectingResumeCallback=_expectingResumeCallback - In the implementation block
@property (assign) BOOL establishedConnection;                                          //@synthesize establishedConnection=_establishedConnection - In the implementation block
@property (assign) unsigned long long retryCount;                                       //@synthesize retryCount=_retryCount - In the implementation block
@property (assign) unsigned long long lowThroughputTimerRetryCount;                     //@synthesize lowThroughputTimerRetryCount=_lowThroughputTimerRetryCount - In the implementation block
@property (assign) BOOL disablesRetry;                                                  //@synthesize disablesRetry=_disablesRetry - In the implementation block
@property (assign) BOOL shouldCancelOnDisconnect;                                       //@synthesize shouldCancelOnDisconnect=_shouldCancelOnDisconnect - In the implementation block
@property (assign) long long basePriority;                                              //@synthesize basePriority=_basePriority - In the implementation block
@property (assign) BOOL basePrioritySetExplicitly;                                      //@synthesize basePrioritySetExplicitly=_basePrioritySetExplicitly - In the implementation block
@property (getter=isDiscretionary) BOOL discretionary;                                  //@synthesize discretionary=_discretionary - In the implementation block
@property (assign) long long discretionaryOverride;                                     //@synthesize discretionaryOverride=_discretionaryOverride - In the implementation block
@property (assign) unsigned qos;                                                        //@synthesize qos=_qos - In the implementation block
@property (copy) NSString * personaUniqueString;                                        //@synthesize personaUniqueString=_personaUniqueString - In the implementation block
@property (copy) NSUUID * uniqueIdentifier;                                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (copy) NSString * storagePartitionIdentifier;                                 //@synthesize storagePartitionIdentifier=_storagePartitionIdentifier - In the implementation block
@property (assign) long long bytesPerSecondLimit;                                       //@synthesize bytesPerSecondLimit=_bytesPerSecondLimit - In the implementation block
@property (assign) unsigned long long expectedProgressTarget;                           //@synthesize expectedProgressTarget=_expectedProgressTarget - In the implementation block
@property (assign) double loadingPriority;                                              //@synthesize loadingPriority=_loadingPriority - In the implementation block
@property (assign) BOOL mayBeDemotedToDiscretionary;                                    //@synthesize mayBeDemotedToDiscretionary=_mayBeDemotedToDiscretionary - In the implementation block
@property (copy) NSString * pathToDownloadTaskFile;                                     //@synthesize pathToDownloadTaskFile=_pathToDownloadTaskFile - In the implementation block
@property (assign) double timeoutIntervalForResource;                                   //@synthesize timeoutIntervalForResource=_timeoutIntervalForResource - In the implementation block
@property (assign) unsigned short _TLSMinimumSupportedProtocolVersion;                  //@synthesize _TLSMinimumSupportedProtocolVersion=__TLSMinimumSupportedProtocolVersion - In the implementation block
@property (assign) unsigned short _TLSMaximumSupportedProtocolVersion;                  //@synthesize _TLSMaximumSupportedProtocolVersion=__TLSMaximumSupportedProtocolVersion - In the implementation block
@property (nonatomic,retain) id<SZExtractor> _extractor;                                //@synthesize _extractor=__extractor - In the implementation block
@property (assign,nonatomic) BOOL _hasSZExtractor;                                      //@synthesize _hasSZExtractor=__hasSZExtractor - In the implementation block
@property (assign,nonatomic) BOOL _doesSZExtractorConsumeExtractedData;                 //@synthesize _doesSZExtractorConsumeExtractedData=__doesSZExtractorConsumeExtractedData - In the implementation block
@property (assign) BOOL startedUserInitiated;                                           //@synthesize startedUserInitiated=_startedUserInitiated - In the implementation block
@property (assign) unsigned long long AVAssetDownloadToken;                             //@synthesize AVAssetDownloadToken=_AVAssetDownloadToken - In the implementation block
@property (copy) NSURL * URL;                                                           //@synthesize URL=_URL - In the implementation block
@property (copy) NSURL * destinationURL;                                                //@synthesize destinationURL=_destinationURL - In the implementation block
@property (copy) NSString * assetTitle;                                                 //@synthesize assetTitle=_assetTitle - In the implementation block
@property (copy) NSData * assetArtworkData;                                             //@synthesize assetArtworkData=_assetArtworkData - In the implementation block
@property (copy) NSDictionary * options;                                                //@synthesize options=_options - In the implementation block
@property (retain) AVURLAsset * AVURLAsset;                                             //@synthesize AVURLAsset=_AVURLAsset - In the implementation block
@property (copy) NSURL * AVAssetURL;                                                    //@synthesize AVAssetURL=_AVAssetURL - In the implementation block
@property (assign) BOOL initializedWithAVAsset;                                         //@synthesize initializedWithAVAsset=_initializedWithAVAsset - In the implementation block
@property (copy) NSURL * temporaryDestinationURL;                                       //@synthesize temporaryDestinationURL=_temporaryDestinationURL - In the implementation block
@property (copy) NSDictionary * resolvedMediaSelectionPlist;                            //@synthesize resolvedMediaSelectionPlist=_resolvedMediaSelectionPlist - In the implementation block
@property (copy) NSString * avAssetDownloadChildDownloadSessionIdentifier;              //@synthesize avAssetDownloadChildDownloadSessionIdentifier=_avAssetDownloadChildDownloadSessionIdentifier - In the implementation block
@property (assign) long long countOfBytesReceived;                                      //@synthesize countOfBytesReceived=_countOfBytesReceived - In the implementation block
@property (assign) long long countOfBytesSent;                                          //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
@property (assign) long long countOfBytesExpectedToSend;                                //@synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend - In the implementation block
@property (assign) long long countOfBytesExpectedToReceive;                             //@synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive - In the implementation block
@property (retain) NSDictionary * _backgroundTrailers;                                  //@synthesize _backgroundTrailers=__backgroundTrailers - In the implementation block
@property (copy) NSDictionary * additionalProperties;                                   //@synthesize additionalProperties=_additionalProperties - In the implementation block
@property (retain) __CFN_TaskMetrics * taskMetrics;                                     //@synthesize taskMetrics=_taskMetrics - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(NSError *)error;
-(NSUUID *)uniqueIdentifier;
-(long long)state;
-(NSURL *)URL;
-(NSURLRequest *)currentRequest;
-(id)_loggableDescription;
-(void)setCountOfBytesExpectedToReceive:(long long)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)setBytesPerSecondLimit:(long long)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(void)setCountOfBytesReceived:(long long)arg1 ;
-(long long)countOfBytesReceived;
-(void)setError:(NSError *)arg1 ;
-(NSURLResponse *)response;
-(NSURL *)fileURL;
-(unsigned long long)taskKind;
-(NSString *)pathToDownloadTaskFile;
-(NSString *)storagePartitionIdentifier;
-(void)setCountOfBytesClientExpectsToReceive:(long long)arg1 ;
-(long long)countOfBytesClientExpectsToReceive;
-(void)setCountOfBytesClientExpectsToSend:(long long)arg1 ;
-(long long)countOfBytesClientExpectsToSend;
-(void)setEarliestBeginDate:(NSDate *)arg1 ;
-(NSDate *)earliestBeginDate;
-(void)setTaskDescription:(NSString *)arg1 ;
-(NSString *)taskDescription;
-(NSURLRequest *)originalRequest;
-(long long)countOfBytesExpectedToReceive;
-(id<SZExtractor>)_extractor;
-(void)setOriginalRequest:(NSURLRequest *)arg1 ;
-(void)set_extractor:(id<SZExtractor>)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(unsigned long long)AVAssetDownloadToken;
-(unsigned short)_TLSMaximumSupportedProtocolVersion;
-(unsigned short)_TLSMinimumSupportedProtocolVersion;
-(long long)countOfBytesExpectedToSend;
-(long long)countOfBytesSent;
-(void)setAVAssetDownloadToken:(unsigned long long)arg1 ;
-(BOOL)_doesSZExtractorConsumeExtractedData;
-(BOOL)_hasSZExtractor;
-(void)set_hasSZExtractor:(BOOL)arg1 ;
-(void)set_doesSZExtractorConsumeExtractedData:(BOOL)arg1 ;
-(NSDictionary *)_backgroundTrailers;
-(__CFN_TaskMetrics *)taskMetrics;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSURL *)temporaryDestinationURL;
-(NSDictionary *)resolvedMediaSelectionPlist;
-(BOOL)initializedWithAVAsset;
-(NSString *)avAssetDownloadChildDownloadSessionIdentifier;
-(double)timeoutIntervalForResource;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(BOOL)isDiscretionary;
-(void)setDiscretionary:(BOOL)arg1 ;
-(void)_logTaskUUIDMapping;
-(id)initWithDataTask:(id)arg1 uniqueIdentifier:(id)arg2 bundleID:(id)arg3 sessionID:(id)arg4 ;
-(id)initWithUploadTask:(id)arg1 uniqueIdentifier:(id)arg2 bundleID:(id)arg3 sessionID:(id)arg4 ;
-(id)initWithDownloadTask:(id)arg1 uniqueIdentifier:(id)arg2 bundleID:(id)arg3 sessionID:(id)arg4 ;
-(id)initWithAVAssetDownloadURL:(id)arg1 destinationURL:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 taskIdentifier:(unsigned long long)arg6 uniqueIdentifier:(id)arg7 bundleID:(id)arg8 sessionID:(id)arg9 ;
-(id)initWithAVAggregateDownloadTaskNoChildTaskKindWithURL:(id)arg1 destinationURL:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 taskIdentifier:(unsigned long long)arg6 uniqueIdentifier:(id)arg7 bundleID:(id)arg8 sessionID:(id)arg9 ;
-(id)initWithAVAggregateAssetDownloadChildDownloadSessionIdentifier:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 taskIdentifier:(unsigned long long)arg5 uniqueIdentifier:(id)arg6 bundleID:(id)arg7 sessionID:(id)arg8 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)setTaskKind:(unsigned long long)arg1 ;
-(double)creationTime;
-(void)setCreationTime:(double)arg1 ;
-(unsigned long long)suspendCount;
-(void)setSuspendCount:(unsigned long long)arg1 ;
-(void)setCurrentRequest:(NSURLRequest *)arg1 ;
-(BOOL)resumedAndWaitingForEarliestBeginDate;
-(void)setResumedAndWaitingForEarliestBeginDate:(BOOL)arg1 ;
-(BOOL)respondedToWillBeginDelayedRequestCallback;
-(void)setRespondedToWillBeginDelayedRequestCallback:(BOOL)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSURL *)downloadFileURL;
-(void)setDownloadFileURL:(NSURL *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(BOOL)hasStarted;
-(void)setHasStarted:(BOOL)arg1 ;
-(BOOL)expectingResumeCallback;
-(void)setExpectingResumeCallback:(BOOL)arg1 ;
-(BOOL)establishedConnection;
-(void)setEstablishedConnection:(BOOL)arg1 ;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)lowThroughputTimerRetryCount;
-(void)setLowThroughputTimerRetryCount:(unsigned long long)arg1 ;
-(BOOL)disablesRetry;
-(void)setDisablesRetry:(BOOL)arg1 ;
-(BOOL)shouldCancelOnDisconnect;
-(void)setShouldCancelOnDisconnect:(BOOL)arg1 ;
-(long long)basePriority;
-(void)setBasePriority:(long long)arg1 ;
-(BOOL)basePrioritySetExplicitly;
-(void)setBasePrioritySetExplicitly:(BOOL)arg1 ;
-(long long)discretionaryOverride;
-(void)setDiscretionaryOverride:(long long)arg1 ;
-(unsigned)qos;
-(void)setQos:(unsigned)arg1 ;
-(NSString *)personaUniqueString;
-(void)setPersonaUniqueString:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(void)setStoragePartitionIdentifier:(NSString *)arg1 ;
-(long long)bytesPerSecondLimit;
-(unsigned long long)expectedProgressTarget;
-(void)setExpectedProgressTarget:(unsigned long long)arg1 ;
-(double)loadingPriority;
-(void)setLoadingPriority:(double)arg1 ;
-(BOOL)mayBeDemotedToDiscretionary;
-(void)setMayBeDemotedToDiscretionary:(BOOL)arg1 ;
-(void)setPathToDownloadTaskFile:(NSString *)arg1 ;
-(BOOL)startedUserInitiated;
-(void)setStartedUserInitiated:(BOOL)arg1 ;
-(NSString *)assetTitle;
-(void)setAssetTitle:(NSString *)arg1 ;
-(NSData *)assetArtworkData;
-(void)setAssetArtworkData:(NSData *)arg1 ;
-(AVURLAsset *)AVURLAsset;
-(void)setAVURLAsset:(AVURLAsset *)arg1 ;
-(NSURL *)AVAssetURL;
-(void)setAVAssetURL:(NSURL *)arg1 ;
-(void)setInitializedWithAVAsset:(BOOL)arg1 ;
-(void)setTemporaryDestinationURL:(NSURL *)arg1 ;
-(void)setResolvedMediaSelectionPlist:(NSDictionary *)arg1 ;
-(void)setAvAssetDownloadChildDownloadSessionIdentifier:(NSString *)arg1 ;
-(void)set_backgroundTrailers:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalProperties;
-(void)setAdditionalProperties:(NSDictionary *)arg1 ;
-(void)setTaskMetrics:(__CFN_TaskMetrics *)arg1 ;
@end
