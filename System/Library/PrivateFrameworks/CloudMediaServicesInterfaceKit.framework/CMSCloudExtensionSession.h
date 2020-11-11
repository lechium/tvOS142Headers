/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudMediaServicesInterfaceKit/CloudMediaServicesInterfaceKit-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue, CMSCloudExtensionAuthProviderDelegate;
@class CMSCloudExtensionConfiguration, NSObject, NSURLRequest, NSURLSessionDataTask, NSError, NSString, CMSPlayerContext, NSURLSession, NSMutableDictionary, NSMutableArray;

@interface CMSCloudExtensionSession : NSObject <NSURLSessionDelegate> {

	CMSCloudExtensionConfiguration* _config;
	os_unfair_lock_s _requestQueueLock;
	NSObject*<OS_dispatch_queue> _requestDispatch;
	BOOL _connected;
	BOOL _waiting;
	NSURLRequest* _lastRequest;
	NSURLSessionDataTask* _dataTask;
	NSError* _closeError;
	id<CMSCloudExtensionAuthProviderDelegate> _authProvider;
	/*^block*/id _closeCompletion;
	BOOL _updateUserTasteProfile;
	BOOL _allowExplicitContent;
	BOOL _shuffledPlayback;
	unsigned _qosClass;
	NSString* _sessionIdentifier;
	NSString* _authHeader;
	double _timeoutInterval;
	CMSPlayerContext* _intentPlayerContext;
	/*^block*/id _prepareRequestHook;
	NSURLSession* _session;
	NSMutableDictionary* _results;
	NSMutableDictionary* _exceptions;
	NSMutableArray* _requestQueue;
	NSMutableDictionary* _completions;
	NSMutableDictionary* _durations;
	double _totalDuration;

}

@property (nonatomic,retain) NSURLSession * session;                               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * results;                        //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * exceptions;                     //@synthesize exceptions=_exceptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestQueue;                        //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * completions;                    //@synthesize completions=_completions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * durations;                      //@synthesize durations=_durations - In the implementation block
@property (assign,nonatomic) double totalDuration;                                 //@synthesize totalDuration=_totalDuration - In the implementation block
@property (nonatomic,retain) CMSCloudExtensionConfiguration * config;              //@synthesize config=_config - In the implementation block
@property (nonatomic,copy) NSString * sessionIdentifier;                           //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * authHeader;                                  //@synthesize authHeader=_authHeader - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                               //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) unsigned qosClass;                                    //@synthesize qosClass=_qosClass - In the implementation block
@property (assign,nonatomic) BOOL updateUserTasteProfile;                          //@synthesize updateUserTasteProfile=_updateUserTasteProfile - In the implementation block
@property (assign,nonatomic) BOOL allowExplicitContent;                            //@synthesize allowExplicitContent=_allowExplicitContent - In the implementation block
@property (assign,nonatomic) BOOL shuffledPlayback;                                //@synthesize shuffledPlayback=_shuffledPlayback - In the implementation block
@property (nonatomic,copy) CMSPlayerContext * intentPlayerContext;                 //@synthesize intentPlayerContext=_intentPlayerContext - In the implementation block
@property (assign,nonatomic) id prepareRequestHook;                                //@synthesize prepareRequestHook=_prepareRequestHook - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(NSURLSession *)session;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(NSMutableDictionary *)results;
-(CMSCloudExtensionConfiguration *)config;
-(void)setConfig:(CMSCloudExtensionConfiguration *)arg1 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setDurations:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)durations;
-(void)setResults:(NSMutableDictionary *)arg1 ;
-(void)setCompletions:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)completions;
-(void)setTotalDuration:(double)arg1 ;
-(double)totalDuration;
-(NSMutableArray *)requestQueue;
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(void)setRequestQueue:(NSMutableArray *)arg1 ;
-(unsigned)qosClass;
-(void)setQosClass:(unsigned)arg1 ;
-(NSMutableDictionary *)exceptions;
-(void)setExceptions:(NSMutableDictionary *)arg1 ;
-(NSString *)authHeader;
-(id)initWithConfiguration:(id)arg1 authProviderDelegate:(id)arg2 ;
-(BOOL)_updateDynamicHeadersOnRequest:(id)arg1 withDeadline:(id)arg2 ;
-(id)_parsedObjectFromData:(id)arg1 inResponse:(id)arg2 error:(id*)arg3 ;
-(id)_constraintsDefinition;
-(void)_retryRequest:(id)arg1 before:(id)arg2 networkActivity:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_retryRequestAfterAuthTokenRenewal:(id)arg1 parentNetworkActivity:(id)arg2 before:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleURLResponse:(id)arg1 before:(id)arg2 networkActivity:(id)arg3 request:(id)arg4 data:(id)arg5 error:(id)arg6 ;
-(BOOL)_handleURLResponseCode:(long long)arg1 error:(id)arg2 before:(id)arg3 request:(id)arg4 networkActivity:(id)arg5 retryHandler:(/*^block*/id)arg6 ;
-(id)_resultsFromData:(id)arg1 inResponse:(id)arg2 error:(id*)arg3 ;
-(void)_connectSession;
-(id)_sessionDescriptionWithDeadline:(id)arg1 ;
-(id)_requestForMethods:(id)arg1 before:(id)arg2 error:(id*)arg3 ;
-(id)_queuePlayMediaForActivity:(id)arg1 ;
-(void)_performActivityUpdate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCloseCompletion:(/*^block*/id)arg1 ;
-(id)peekResponseForMethod:(id)arg1 exception:(id*)arg2 ;
-(void)performMethod:(id)arg1 withParams:(id)arg2 networkActivity:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)requestQueueForActivity:(id)arg1 networkActivity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getQueueSegmentFromURL:(id)arg1 referrer:(id)arg2 networkActivity:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)report:(unsigned long long)arg1 forActivity:(id)arg2 nowPlaying:(id)arg3 previous:(id)arg4 timestamp:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)reportContentFailure:(id)arg1 forActivity:(id)arg2 whilePlaying:(id)arg3 nowPlaying:(id)arg4 timestamp:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)getAlbumArtDataFromURL:(id)arg1 networkActivity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(double)durationForMethod:(id)arg1 ;
-(void)closeWithForce:(BOOL)arg1 ;
-(void)setAuthHeader:(NSString *)arg1 ;
-(BOOL)updateUserTasteProfile;
-(void)setUpdateUserTasteProfile:(BOOL)arg1 ;
-(BOOL)allowExplicitContent;
-(void)setAllowExplicitContent:(BOOL)arg1 ;
-(BOOL)shuffledPlayback;
-(void)setShuffledPlayback:(BOOL)arg1 ;
-(CMSPlayerContext *)intentPlayerContext;
-(void)setIntentPlayerContext:(CMSPlayerContext *)arg1 ;
-(id)prepareRequestHook;
-(void)setPrepareRequestHook:(id)arg1 ;
@end

