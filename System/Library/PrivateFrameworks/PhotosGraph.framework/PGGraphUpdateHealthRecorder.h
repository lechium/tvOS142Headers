/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGGraphUpdateHealthRecording.h>

@class NSString;

@interface PGGraphUpdateHealthRecorder : NSObject <PGGraphUpdateHealthRecording> {

	BOOL _changeConsumer;
	unsigned long long _numberOfDatabaseChangesReceivedInForeground;
	unsigned long long _numberOfDatabaseChangesReceivedInBackground;
	unsigned long long _numberOfDatabaseChangesConvertedToGraphChangesInForeground;
	unsigned long long _numberOfDatabaseChangesConvertedToGraphChangesInBackground;
	unsigned long long _numberOfTimesGraphUpdatePaused;
	unsigned long long _maximumTransactionSize;

}

@property (nonatomic,readonly) unsigned long long numberOfDatabaseChangesReceivedInForeground;                             //@synthesize numberOfDatabaseChangesReceivedInForeground=_numberOfDatabaseChangesReceivedInForeground - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfDatabaseChangesReceivedInBackground;                             //@synthesize numberOfDatabaseChangesReceivedInBackground=_numberOfDatabaseChangesReceivedInBackground - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfDatabaseChangesConvertedToGraphChangesInForeground;              //@synthesize numberOfDatabaseChangesConvertedToGraphChangesInForeground=_numberOfDatabaseChangesConvertedToGraphChangesInForeground - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfDatabaseChangesConvertedToGraphChangesInBackground;              //@synthesize numberOfDatabaseChangesConvertedToGraphChangesInBackground=_numberOfDatabaseChangesConvertedToGraphChangesInBackground - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfTimesGraphUpdatePaused;                                          //@synthesize numberOfTimesGraphUpdatePaused=_numberOfTimesGraphUpdatePaused - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumTransactionSize;                                                  //@synthesize maximumTransactionSize=_maximumTransactionSize - In the implementation block
@property (getter=isChangeConsumer,nonatomic,readonly) BOOL changeConsumer;                                                //@synthesize changeConsumer=_changeConsumer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginRecording;
-(void)recordNumberOfDatabaseChangesReceived:(unsigned long long)arg1 inBackground:(BOOL)arg2 ;
-(void)recordNumberOfDatabaseChangesConvertedToGraphChanges:(unsigned long long)arg1 inBackground:(BOOL)arg2 ;
-(void)recordNumberOfTimesGraphUpdatePaused:(unsigned long long)arg1 ;
-(void)recordTransactionSize:(unsigned long long)arg1 ;
-(void)endRecordingInBackground:(BOOL)arg1 ;
-(id)initForChangeConsumer:(BOOL)arg1 ;
-(unsigned long long)numberOfDatabaseChangesReceivedInForeground;
-(unsigned long long)numberOfDatabaseChangesReceivedInBackground;
-(unsigned long long)numberOfDatabaseChangesConvertedToGraphChangesInForeground;
-(unsigned long long)numberOfDatabaseChangesConvertedToGraphChangesInBackground;
-(unsigned long long)numberOfTimesGraphUpdatePaused;
-(unsigned long long)maximumTransactionSize;
-(BOOL)isChangeConsumer;
@end

