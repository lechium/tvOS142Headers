/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSDate, NSString, NSFileHandle, NSObject;

@interface ATRollableLog : NSObject {

	NSDate* _lastStatDate;
	NSString* _directory;
	NSString* _baseFilename;
	NSString* _generationalFilenameFormat;
	NSFileHandle* _fh;
	NSObject*<OS_dispatch_source> _fdWatcher;
	NSObject*<OS_dispatch_queue> _logQueue;
	NSObject*<OS_dispatch_queue> _logRequestQueue;

}

@property (retain) NSDate * lastStatDate;              //@synthesize lastStatDate=_lastStatDate - In the implementation block
@property (retain) NSFileHandle * fh;                  //@synthesize fh=_fh - In the implementation block
+(id)_filenameWithBase:(id)arg1 generationalFormat:(id)arg2 generation:(int)arg3 ;
+(id)_generationalFormatFromBase:(id)arg1 ;
+(void)enableLogRolling;
+(id)allLogFilesForFilename:(id)arg1 ;
+(id)loggerWithFilename:(id)arg1 ;
-(void)logString:(id)arg1 ;
-(id)initWithFilename:(id)arg1 ;
-(id)_filenameWithGenerationNumber:(int)arg1 ;
-(id)_fullFilePathWithGenerationNumber:(int)arg1 ;
-(void)setFh:(NSFileHandle *)arg1 ;
-(void)setLastStatDate:(NSDate *)arg1 ;
-(void)_setFilePermissions:(id)arg1 ;
-(void)_loadUpHandle;
-(id)_fullCompressedFilePathWithGenerationNumber:(int)arg1 ;
-(id)compressFile:(id)arg1 ;
-(void)_rollLogs;
-(void)_statFileIfNecessaryForRollingCheck;
-(void)logData:(id)arg1 ;
-(void)logLine:(id)arg1 withPrefix:(id)arg2 ;
-(void)slurpDataFromFile:(id)arg1 ;
-(NSFileHandle *)fh;
-(NSDate *)lastStatDate;
@end

