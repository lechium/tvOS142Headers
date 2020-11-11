/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoAnalysis/PHAWorkerJob.h>

@interface PHAAnalyticsJob : PHAWorkerJob {

	BOOL _complete;
	/*^block*/id _actionBlock;

}

@property (assign,nonatomic) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (copy) id actionBlock;                         //@synthesize actionBlock=_actionBlock - In the implementation block
+(id)analyticsJobWithLibrary:(id)arg1 scenario:(unsigned long long)arg2 actionBlock:(/*^block*/id)arg3 ;
-(BOOL)finished;
-(BOOL)complete;
-(void)setComplete:(BOOL)arg1 ;
-(float)completionScore;
-(void)setActionBlock:(id)arg1 ;
-(id)actionBlock;
-(BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(void)markAsFinishedWithCompletion:(BOOL)arg1 ;
@end
