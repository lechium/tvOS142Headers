/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSHashTable;

@interface WFRemoteExecutionFileCoordinator : NSObject {

	NSMutableDictionary* _waitingFiles;
	NSHashTable* _waitingArchivers;

}

@property (nonatomic,retain) NSMutableDictionary * waitingFiles;              //@synthesize waitingFiles=_waitingFiles - In the implementation block
@property (nonatomic,retain) NSHashTable * waitingArchivers;                  //@synthesize waitingArchivers=_waitingArchivers - In the implementation block
-(id)init;
-(void)handleFile:(id)arg1 withIdentifier:(id)arg2 ;
-(void)registerArchiver:(id)arg1 ;
-(NSMutableDictionary *)waitingFiles;
-(void)setWaitingFiles:(NSMutableDictionary *)arg1 ;
-(NSHashTable *)waitingArchivers;
-(void)setWaitingArchivers:(NSHashTable *)arg1 ;
@end
