/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ENRegionHistoryManagerDelegate, OS_dispatch_queue;
@class NSString, ENSecureArchiveFileWrapper, ENRegionHistory, NSObject;

@interface ENRegionHistoryManager : NSObject {

	int _resetToken;
	id<ENRegionHistoryManagerDelegate> _delegate;
	long long _fileStatus;
	NSString* _directoryPath;
	ENSecureArchiveFileWrapper* _regionHistoryFileWrapper;
	ENRegionHistory* _regionHistory;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) NSString * directoryPath;                                             //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,retain) ENSecureArchiveFileWrapper * regionHistoryFileWrapper;              //@synthesize regionHistoryFileWrapper=_regionHistoryFileWrapper - In the implementation block
@property (nonatomic,retain) ENRegionHistory * regionHistory;                                    //@synthesize regionHistory=_regionHistory - In the implementation block
@property (assign,nonatomic) int resetToken;                                                     //@synthesize resetToken=_resetToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<ENRegionHistoryManagerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long fileStatus;                                               //@synthesize fileStatus=_fileStatus - In the implementation block
+(id)regionHistoryFileStatusToString:(long long)arg1 ;
-(void)dealloc;
-(id<ENRegionHistoryManagerDelegate>)delegate;
-(void)setDelegate:(id<ENRegionHistoryManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(NSString *)directoryPath;
-(int)resetToken;
-(void)addRegionVisit:(id)arg1 ;
-(ENRegionHistory *)regionHistory;
-(void)updateFileStatus;
-(long long)fileStatus;
-(id)getAllRegionVisits;
-(BOOL)purgeAllRegionHistoryWithError:(id*)arg1 ;
-(BOOL)purgeRegionsOlderThanDate:(id)arg1 error:(id*)arg2 ;
-(id)getAllRegions;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 directoryPath:(id)arg3 ;
-(void)resetRegionHistory;
-(void)setupPersistedRegionHistory;
-(void)setFileStatus:(long long)arg1 ;
-(void)setRegionHistoryFileWrapper:(ENSecureArchiveFileWrapper *)arg1 ;
-(ENSecureArchiveFileWrapper *)regionHistoryFileWrapper;
-(id)mergeRegionHistoryOnDisk:(id)arg1 inMemory:(id)arg2 ;
-(void)setRegionHistory:(ENRegionHistory *)arg1 ;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(void)setResetToken:(int)arg1 ;
@end

