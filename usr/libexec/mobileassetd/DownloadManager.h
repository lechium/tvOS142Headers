//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDateFormatter, NSMutableDictionary, NSOperationQueue, NSURL, NSURLSession, NSURLSessionConfiguration, PallasResponseVerifier;
@protocol NSURLSessionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface DownloadManager : NSObject
{
    _Bool _haveSyncedSplunkData;	// 8 = 0x8
    _Bool _currentlyBatchingSplunk;	// 9 = 0x9
    _Bool _haveSyncedSplunkState;	// 10 = 0xa
    _Bool _timerRunning;	// 11 = 0xb
    NSMutableDictionary *_downloadTasksInFlight;	// 16 = 0x10
    NSMutableDictionary *_cachedMetaDataForAssetType;	// 24 = 0x18
    NSURLSessionConfiguration *_backgroundDiscretionaryConfiguration;	// 32 = 0x20
    NSURLSessionConfiguration *_splunkDiscretionaryConfiguration;	// 40 = 0x28
    NSURLSessionConfiguration *_inProcessConfig;	// 48 = 0x30
    NSOperationQueue *_operationQueue;	// 56 = 0x38
    NSOperationQueue *_splunkOperationQueue;	// 64 = 0x40
    id <NSURLSessionDelegate> _delegate;	// 72 = 0x48
    id <NSURLSessionDelegate> _splunkDelegate;	// 80 = 0x50
    NSURLSession *_backgroundSession;	// 88 = 0x58
    NSURLSession *_splunkSession;	// 96 = 0x60
    NSURLSession *_pallasSession;	// 104 = 0x68
    NSURLSession *_inProcessSession;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_downloadStateQueue;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_splunkStateQueue;	// 128 = 0x80
    long long _currentState;	// 136 = 0x88
    PallasResponseVerifier *_pallasVerifier;	// 144 = 0x90
    NSDateFormatter *_dateFormatter;	// 152 = 0x98
    NSURL *_splunkUrl;	// 160 = 0xa0
    NSMutableDictionary *_currentSplunkEvent;	// 168 = 0xa8
    NSObject<OS_dispatch_source> *_timer;	// 176 = 0xb0
    NSDate *_previousTimeEstimatePoint;	// 184 = 0xb8
    CDUnknownBlockType _timerHandler;	// 192 = 0xc0
}

@property(readonly, nonatomic) CDUnknownBlockType timerHandler; // @synthesize timerHandler=_timerHandler;
@property(readonly, nonatomic) _Bool timerRunning; // @synthesize timerRunning=_timerRunning;
@property(readonly, nonatomic) NSDate *previousTimeEstimatePoint; // @synthesize previousTimeEstimatePoint=_previousTimeEstimatePoint;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSMutableDictionary *currentSplunkEvent; // @synthesize currentSplunkEvent=_currentSplunkEvent;
@property(readonly, nonatomic) NSURL *splunkUrl; // @synthesize splunkUrl=_splunkUrl;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) PallasResponseVerifier *pallasVerifier; // @synthesize pallasVerifier=_pallasVerifier;
@property(readonly, nonatomic) _Bool haveSyncedSplunkState; // @synthesize haveSyncedSplunkState=_haveSyncedSplunkState;
@property(readonly, nonatomic) _Bool currentlyBatchingSplunk; // @synthesize currentlyBatchingSplunk=_currentlyBatchingSplunk;
@property(readonly, nonatomic) _Bool haveSyncedSplunkData; // @synthesize haveSyncedSplunkData=_haveSyncedSplunkData;
@property(readonly) long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *splunkStateQueue; // @synthesize splunkStateQueue=_splunkStateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *downloadStateQueue; // @synthesize downloadStateQueue=_downloadStateQueue;
@property(readonly, nonatomic) NSURLSession *inProcessSession; // @synthesize inProcessSession=_inProcessSession;
@property(readonly, nonatomic) NSURLSession *pallasSession; // @synthesize pallasSession=_pallasSession;
@property(readonly, nonatomic) NSURLSession *splunkSession; // @synthesize splunkSession=_splunkSession;
@property(readonly, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(readonly, nonatomic) id <NSURLSessionDelegate> splunkDelegate; // @synthesize splunkDelegate=_splunkDelegate;
@property(readonly, nonatomic) id <NSURLSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSOperationQueue *splunkOperationQueue; // @synthesize splunkOperationQueue=_splunkOperationQueue;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) NSURLSessionConfiguration *inProcessConfig; // @synthesize inProcessConfig=_inProcessConfig;
@property(readonly, nonatomic) NSURLSessionConfiguration *splunkDiscretionaryConfiguration; // @synthesize splunkDiscretionaryConfiguration=_splunkDiscretionaryConfiguration;
@property(readonly, nonatomic) NSURLSessionConfiguration *backgroundDiscretionaryConfiguration; // @synthesize backgroundDiscretionaryConfiguration=_backgroundDiscretionaryConfiguration;
@property(readonly, nonatomic) NSMutableDictionary *cachedMetaDataForAssetType; // @synthesize cachedMetaDataForAssetType=_cachedMetaDataForAssetType;
@property(readonly, nonatomic) NSMutableDictionary *downloadTasksInFlight; // @synthesize downloadTasksInFlight=_downloadTasksInFlight;
- (id)lastModifiedDateFromResponse:(id)arg1;	// IMP=0x0000000100020bd0
- (void)handleSuccessfulDownload:(id)arg1 task:(id)arg2 taskId:(id)arg3 shouldMove:(_Bool)arg4 extractorExists:(_Bool)arg5 postedDate:(id)arg6 notModified:(_Bool)arg7;	// IMP=0x00000001000208f8
- (long long)processAssetDownload:(id)arg1 with:(id)arg2 and:(id)arg3 shouldMove:(_Bool)arg4 extractorExists:(_Bool)arg5;	// IMP=0x00000001000207a4
- (long long)massagePmvAndPersist:(id)arg1 from:(id)arg2 to:(id)arg3 postedDate:(id)arg4;	// IMP=0x0000000100020580
- (void)taskFinishedUpdateState:(id)arg1 with:(long long)arg2;	// IMP=0x0000000100020570
- (void)taskFinishedUpdateState:(id)arg1 with:(long long)arg2 extraInfo:(id)arg3;	// IMP=0x00000001000200b4
- (void)retryTask:(id)arg1 retryUrl:(id)arg2 modified:(id)arg3 using:(id)arg4 with:(id)arg5;	// IMP=0x000000010001feb0
- (id)currentConfig;	// IMP=0x000000010001fe78
- (id)currentSession;	// IMP=0x000000010001fe40
- (void)sendNotification:(id)arg1 suffix:(id)arg2;	// IMP=0x000000010001fdd8
- (void)sendNotification:(id)arg1;	// IMP=0x000000010001fd04
- (void)registerXmlDownloadJob:(id)arg1 using:(id)arg2 with:(id)arg3 clientName:(id)arg4 onCompletion:(CDUnknownBlockType)arg5;	// IMP=0x000000010001f484
- (void)registerPmvDownloadJob:(id)arg1 using:(id)arg2 with:(id)arg3 clientName:(id)arg4 onCompletion:(CDUnknownBlockType)arg5;	// IMP=0x000000010001f1a8
- (void)registerAssetDownloadJob:(id)arg1 forThis:(id)arg2 withBase:(id)arg3 relativeTo:(id)arg4 startingAt:(id)arg5 withLength:(id)arg6 extractWith:(id)arg7 using:(id)arg8 with:(id)arg9 notify:(unsigned long long)arg10 onCompletion:(CDUnknownBlockType)arg11;	// IMP=0x000000010001ee8c
- (_Bool)checkDownloadIsSyncing:(id)arg1 with:(id)arg2;	// IMP=0x000000010001ee2c
- (void)updateProgressIfRequired:(id)arg1 totalWritten:(long long)arg2 totalExpected:(long long)arg3 notify:(_Bool)arg4;	// IMP=0x000000010001eb60
- (void)startDownloadAndUpdateState:(id)arg1 for:(id)arg2 startingAt:(id)arg3 withLength:(id)arg4 extractWith:(id)arg5 modified:(id)arg6 options:(id)arg7 using:(id)arg8 with:(id)arg9 notify:(unsigned long long)arg10;	// IMP=0x000000010001e330
- (void)assessDownloadCompletion:(id)arg1 originalUrl:(id)arg2 taskDescription:(id)arg3 taskId:(id)arg4 error:(id)arg5 moveFile:(_Bool)arg6 extractorExists:(_Bool)arg7;	// IMP=0x000000010001e138
- (void)addLiveServerRequest:(id)arg1 using:(id)arg2 with:(id)arg3 task:(id)arg4 options:(id)arg5;	// IMP=0x000000010001dfb0
- (void)startDownloadAndUpdateState:(id)arg1 for:(id)arg2 modified:(id)arg3 options:(id)arg4 using:(id)arg5 with:(id)arg6;	// IMP=0x000000010001df70
- (long long)massageXmlAndPersist:(id)arg1 from:(id)arg2 to:(id)arg3 with:(id)arg4 postedDate:(id)arg5;	// IMP=0x000000010001dbe0
- (long long)massageXmlAndPersist:(id)arg1 catalogInfo:(id)arg2 descriptor:(id)arg3 assets:(id)arg4 transformations:(id)arg5 to:(id)arg6 postedDate:(id)arg7 receiptResults:(id *)arg8 assetSetId:(id)arg9 pallasUrl:(id)arg10;	// IMP=0x000000010001d648
- (void)applyTransformsAndCheckReceipts:(id)arg1 transformations:(id)arg2 assetType:(id)arg3 assets:(id)arg4 receiptResults:(id *)arg5;	// IMP=0x000000010001d0bc
- (void)applyTransforms:(id)arg1 toAssets:(id)arg2;	// IMP=0x000000010001cdd4
- (id)startDownloadTask:(id)arg1 downloadSize:(long long)arg2 for:(id)arg3 startingAt:(id)arg4 withLength:(id)arg5 extractWith:(id)arg6 options:(id)arg7 modified:(id)arg8 session:(id)arg9;	// IMP=0x000000010001cd34
- (id)startDownloadTask:(id)arg1 downloadSize:(long long)arg2 for:(id)arg3 startingAt:(id)arg4 withLength:(id)arg5 extractWith:(id)arg6 options:(id)arg7 modified:(id)arg8 session:(id)arg9 isCachingServer:(_Bool)arg10;	// IMP=0x000000010001c77c
- (void)getCurrentInflightDownloads:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c320
- (void)syncSplunkTasks;	// IMP=0x000000010001c078
- (void)pallasRequestV2:(id)arg1 normalizedType:(id)arg2 options:(id)arg3 using:(id)arg4 with:(id)arg5 clientName:(id)arg6 then:(CDUnknownBlockType)arg7;	// IMP=0x000000010001a928
- (id)addSUOptions:(id)arg1 options:(id)arg2;	// IMP=0x000000010001a4c0
- (id)newAssetAudience:(_Bool)arg1;	// IMP=0x000000010001a398
- (void)checkSplunkStatus:(id)arg1 failureReason:(id)arg2 productVersion:(id)arg3 sessionId:(id)arg4 nonce:(id)arg5 url:(id)arg6 statusCode:(long long)arg7 assetAudience:(id)arg8 version:(id)arg9 receiptResults:(id)arg10 baseUrl:(id)arg11;	// IMP=0x0000000100019cbc
- (id)newDefaultEventDictionary:(id)arg1 sessionId:(id)arg2 nonce:(id)arg3 url:(id)arg4 statusCode:(long long)arg5 assetAudience:(id)arg6 uuid:(id)arg7 assetType:(id)arg8 version:(id)arg9 receiptResults:(id)arg10 baseUrl:(id)arg11;	// IMP=0x0000000100019804
- (void)isDownloading:(id)arg1 then:(CDUnknownBlockType)arg2;	// IMP=0x00000001000193f4
- (void)cancelAllDownloading:(id)arg1 includingAssets:(_Bool)arg2 includingCatalog:(_Bool)arg3 includingOther:(_Bool)arg4 clientName:(id)arg5 then:(CDUnknownBlockType)arg6;	// IMP=0x00000001000190a8
- (void)allDownloading:(CDUnknownBlockType)arg1;	// IMP=0x0000000100018e7c
- (void)queryNSUrlSessiondAndUpdateState;	// IMP=0x000000010001878c
- (void)updateStateAndNotifyIfRequired;	// IMP=0x000000010001870c
- (void)sendDownloadResult:(id)arg1 with:(long long)arg2 extraInfo:(id)arg3;	// IMP=0x00000001000184c0
- (void)configDownload:(id)arg1 clientName:(id)arg2 using:(id)arg3 with:(id)arg4;	// IMP=0x000000010001810c
- (void)sendEvents:(id)arg1 sessionId:(id)arg2;	// IMP=0x0000000100017cf4
- (_Bool)addInFailedJobs:(id)arg1 finalEvents:(id)arg2;	// IMP=0x0000000100017848
- (void)handleSplunkReportFinished:(id)arg1 result:(_Bool)arg2;	// IMP=0x000000010001768c
- (void)initializeSessionsAsync;	// IMP=0x00000001000173ac
- (void)updateEstimateInfo:(double)arg1;	// IMP=0x0000000100017128
- (void)startDownloadTimer;	// IMP=0x0000000100016e5c
- (void)stopTimerIfNoDownloadsInProgress;	// IMP=0x0000000100016de8
- (void)dealloc;	// IMP=0x0000000100016cec
- (id)init;	// IMP=0x0000000100016aa4

@end

