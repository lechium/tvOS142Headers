/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSArray, ENSecureArchiveFileWrapper, NSURL, NSBackgroundActivityScheduler, NSURLSession, ENDownloadManagerState;

@interface ENDownloadManager : NSObject {

	BOOL _invalidated;
	BOOL _didUnscheduleOnce;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _pendingEndpoints;
	ENSecureArchiveFileWrapper* _stateFileWrapper;
	NSURL* _directoryURL;
	/*^block*/id _errorMetricReporter;
	NSBackgroundActivityScheduler* _fetchScheduler;
	NSURLSession* _URLSession;
	ENDownloadManagerState* _state;

}

@property (nonatomic,readonly) NSBackgroundActivityScheduler * fetchScheduler;              //@synthesize fetchScheduler=_fetchScheduler - In the implementation block
@property (nonatomic,retain) NSURLSession * URLSession;                                     //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,readonly) ENDownloadManagerState * state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSURL * directoryURL;                                   //@synthesize directoryURL=_directoryURL - In the implementation block
@property (nonatomic,readonly) unsigned long long enabledEndpointCount; 
@property (nonatomic,copy) id errorMetricReporter;                                          //@synthesize errorMetricReporter=_errorMetricReporter - In the implementation block
-(id)description;
-(void)invalidate;
-(ENDownloadManagerState *)state;
-(void)activate;
-(id)initWithQueue:(id)arg1 ;
-(void)update;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(NSURLSession *)URLSession;
-(NSURL *)directoryURL;
-(id)initWithDirectoryURL:(id)arg1 queue:(id)arg2 ;
-(void)_reportErrorMetric:(unsigned)arg1 ;
-(BOOL)enumerateDownloadsWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)_downloadsDirectoryPathForEndpointState:(id)arg1 ;
-(BOOL)_readStateIfNecessaryWithError:(id*)arg1 ;
-(BOOL)_saveState;
-(void)_updateFetchSchedule;
-(void)_performDownloadsWithScheduler:(id)arg1 atDate:(id)arg2 forced:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_shouldFetchFromEndpointWithState:(id)arg1 time:(double)arg2 ;
-(void)_downloadIndexWithTask:(id)arg1 ;
-(void)_handleIndexFileDownloadFinishedForTask:(id)arg1 filePath:(id)arg2 ;
-(void)_reportErrorMetricForHTTPStatus:(long long)arg1 forIndexFile:(BOOL)arg2 ;
-(id)_baseDirectoryPathForEndpointWithState:(id)arg1 ;
-(id)_indexFilePathForEndpointState:(id)arg1 ;
-(BOOL)_copyDownloadedFileAtPath:(id)arg1 toPath:(id)arg2 removeExisting:(BOOL)arg3 error:(id*)arg4 ;
-(void)_downloadNextFileFromServerWithTask:(id)arg1 ;
-(id)_nextFilePathToDownloadWithEndpointState:(id)arg1 ;
-(void)_handleFileDownloadFinishedForTask:(id)arg1 serverFilePath:(id)arg2 downloadedFilePath:(id)arg3 ;
-(BOOL)_saveStateWithError:(id*)arg1 ;
-(void)_purgeKeepingDownloadsForIdentifiers:(id)arg1 expiryDate:(id)arg2 ;
-(void)setDownloadEndpoints:(id)arg1 ;
-(id)createScheduler;
-(double)_aggregateDownloadIntervalFromEndpoints:(id)arg1 ;
-(void)_backgroundActivityFiredWithCompletion:(/*^block*/id)arg1 ;
-(id)countOfAvailableDownloadsWithError:(id*)arg1 ;
-(unsigned long long)enabledEndpointCount;
-(void)performDownloadsForced:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)performDownloadsAtDate:(id)arg1 forced:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)purgeAllDownloads;
-(void)purgeExpiredDownloadsWithDate:(id)arg1 ;
-(id)errorMetricReporter;
-(void)setErrorMetricReporter:(id)arg1 ;
-(NSBackgroundActivityScheduler *)fetchScheduler;
@end

