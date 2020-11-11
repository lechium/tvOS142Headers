/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOperationQueue, NSMutableArray, NSError;

@interface ML3DatabaseImportManager : NSObject {

	NSOperationQueue* _importOperationQueue;
	NSMutableArray* _suspendedImportOperations;
	NSError* _lastImportError;

}

@property (nonatomic,retain) NSError * lastImportError;                                  //@synthesize lastImportError=_lastImportError - In the implementation block
@property (nonatomic,readonly) unsigned long long operationsCount; 
@property (nonatomic,readonly) unsigned long long suspendedOperationsCount; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
-(id)init;
-(BOOL)isSuspended;
-(id)_importOperations;
-(void)_handleImportOperationCancelled:(id)arg1 ;
-(void)_handleImportOperationCompleted:(id)arg1 ;
-(void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 progressBlock:(/*^block*/id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)operationsCount;
-(unsigned long long)suspendedOperationsCount;
-(float)currentOperationProgressWithError:(id*)arg1 ;
-(void)cancelAllImportOperations;
-(void)cancelImportOperationsOriginatingFromClient:(id)arg1 ;
-(void)cancelImportOperationsForSource:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)suspendImportOperations;
-(void)resumeSuspendedImportOperations;
-(id)_suspendedImportOperations;
-(NSError *)lastImportError;
-(void)setLastImportError:(NSError *)arg1 ;
@end

