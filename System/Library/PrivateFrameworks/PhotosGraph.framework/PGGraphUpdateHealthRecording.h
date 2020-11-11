/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PGGraphUpdateHealthRecording <NSObject>
@required
-(void)beginRecording;
-(void)recordNumberOfDatabaseChangesReceived:(unsigned long long)arg1 inBackground:(BOOL)arg2;
-(void)recordNumberOfDatabaseChangesConvertedToGraphChanges:(unsigned long long)arg1 inBackground:(BOOL)arg2;
-(void)recordNumberOfTimesGraphUpdatePaused:(unsigned long long)arg1;
-(void)recordTransactionSize:(unsigned long long)arg1;
-(void)endRecordingInBackground:(BOOL)arg1;

@end

