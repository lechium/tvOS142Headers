/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, ENSQLiteConnection;

@interface ENExposureDatabase : NSObject {

	NSURL* _databaseURL;
	/*^block*/id _errorMetricReporter;
	ENSQLiteConnection* _connection;

}

@property (nonatomic,readonly) ENSQLiteConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id errorMetricReporter;                           //@synthesize errorMetricReporter=_errorMetricReporter - In the implementation block
@property (nonatomic,readonly) BOOL isOpen; 
+(void)_obliterateDatabaseAtURL:(id)arg1 reason:(id)arg2 generateStackshot:(BOOL)arg3 ;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(ENSQLiteConnection *)connection;
-(BOOL)isOpen;
-(BOOL)openWithError:(id*)arg1 ;
-(id)initWithDirectoryURL:(id)arg1 ;
-(id)_initWithURL:(id)arg1 ;
-(BOOL)upsertExposureDetectionHistorySession:(id)arg1 error:(id*)arg2 ;
-(BOOL)getValue:(id*)arg1 forKey:(id)arg2 ofClass:(Class)arg3 error:(id*)arg4 ;
-(BOOL)setValue:(id)arg1 forKey:(id)arg2 expiryDate:(id)arg3 error:(id*)arg4 ;
-(long long)insertMatchedAdvertisements:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)insertExposureDetectionFile:(id)arg1 session:(id)arg2 error:(id*)arg3 ;
-(BOOL)enumerateMatchedAdvertisementsWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)getAdvertisementCount:(unsigned*)arg1 error:(id*)arg2 ;
-(void)_reportErrorMetric:(unsigned)arg1 ;
-(id)errorMetricReporter;
-(void)setErrorMetricReporter:(id)arg1 ;
-(BOOL)_reallyOpenDatabaseWithError:(id*)arg1 ;
-(BOOL)_createOrMigrateSchemaFromVersion:(long long)arg1 error:(id*)arg2 ;
-(void)_reportSQLiteResult:(int)arg1 ;
-(BOOL)_createSchemaWithConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)_checkDatabaseOpenWithError:(id*)arg1 ;
-(BOOL)_getExistingPersistentTemporaryExposureKey:(id*)arg1 rowID:(long long*)arg2 keyData:(id)arg3 connection:(id)arg4 error:(id*)arg5 ;
-(long long)_updateExistingPersistentKeyIfNecessary:(id)arg1 replacementKey:(id)arg2 existingKeyID:(long long)arg3 connection:(id)arg4 error:(id*)arg5 ;
-(BOOL)_insertPersistentTemporaryExposureKey:(id)arg1 connection:(id)arg2 error:(id*)arg3 ;
-(BOOL)_insertAdvertisement:(id)arg1 keyRowID:(long long)arg2 connection:(id)arg3 error:(id*)arg4 ;
-(id)_persistentTemporaryExposureKeyWithKeyData:(id)arg1 appBundleIdentifier:(id)arg2 regionCountryCode:(id)arg3 rollingStartNumber:(long long)arg4 rollingPeriod:(long long)arg5 daysSinceOnsetOfSymptoms:(long long)arg6 diagnosisReportType:(int)arg7 originalReportType:(int)arg8 transmissionRiskLevel:(int)arg9 ;
-(id)_advertisementsForTemporaryExposureKeyRowID:(long long)arg1 connection:(id)arg2 error:(id*)arg3 ;
-(id)_advertisementWithRPIData:(id)arg1 encryptedAEMData:(id)arg2 timestamp:(long long)arg3 scanInterval:(int)arg4 typicalRSSI:(int)arg5 maxRSSI:(int)arg6 saturated:(int)arg7 counter:(int)arg8 ;
-(BOOL)_insertOrUpdateExposureDetectionHistorySession:(id)arg1 connection:(id)arg2 error:(id*)arg3 ;
-(id)_sessionIDForUUID:(id)arg1 connection:(id)arg2 error:(id*)arg3 ;
-(BOOL)_insertExposureDetectionFile:(id)arg1 sessionID:(id)arg2 connection:(id)arg3 error:(id*)arg4 ;
-(BOOL)getValue:(id*)arg1 forKey:(id)arg2 ofClass:(Class)arg3 connection:(id)arg4 error:(id*)arg5 ;
-(BOOL)setValue:(id)arg1 forKey:(id)arg2 type:(long long)arg3 expiryDate:(id)arg4 modDate:(id)arg5 connection:(id)arg6 error:(id*)arg7 ;
-(id)initInMemoryDatabase;
-(id)advertisementCountsByTemporaryKeyDatasWithError:(id*)arg1 ;
-(BOOL)enumerateExposureDetectionHistorySessionsWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)enumerateExposureDetectionHistoryFilesForSessionUUID:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)deleteExposureDetectionHistoryWithError:(id*)arg1 ;
-(BOOL)setPropertyListValue:(id)arg1 forKey:(id)arg2 expiryDate:(id)arg3 error:(id*)arg4 ;
-(BOOL)purgeRecordsWithInterval:(double)arg1 nowDate:(id)arg2 error:(id*)arg3 ;
-(void)purgeAllAndCloseWithReason:(id)arg1 ;
@end
