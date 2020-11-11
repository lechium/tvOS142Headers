/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSProgress.h>

@protocol NSProgressPublisher;
@interface _NSProgressProxy : NSProgress {

	id<NSProgressPublisher> _forwarder;
	BOOL _isOld;
	/*^block*/id _unpublishingHandler;

}
-(void)dealloc;
-(void)cancel;
-(void)resume;
-(id)fileURL;
-(void)publish;
-(void)setFileURL:(id)arg1 ;
-(void)setFileOperationKind:(id)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)setByteTotalCount:(id)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setByteCompletedCount:(id)arg1 ;
-(void)setPausingHandler:(/*^block*/id)arg1 ;
-(void)setCancellationHandler:(/*^block*/id)arg1 ;
-(void)pause;
-(void)prioritize;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 ;
-(void)resignCurrent;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(double)fractionCompleted;
-(void)unpublish;
-(void)setLocalizedDescription:(id)arg1 ;
-(void)setCancellable:(BOOL)arg1 ;
-(void)setPausable:(BOOL)arg1 ;
-(id)estimatedTimeRemaining;
-(void)setEstimatedTimeRemaining:(id)arg1 ;
-(id)throughput;
-(void)setThroughput:(id)arg1 ;
-(id)fileOperationKind;
-(id)fileTotalCount;
-(void)setFileTotalCount:(id)arg1 ;
-(id)fileCompletedCount;
-(void)setFileCompletedCount:(id)arg1 ;
-(id)byteTotalCount;
-(id)byteCompletedCount;
-(void)setKind:(id)arg1 ;
-(void)acknowledgeWithSuccess:(BOOL)arg1 ;
-(BOOL)isOld;
-(void)setPrioritizable:(BOOL)arg1 ;
-(void)setPrioritizationHandler:(/*^block*/id)arg1 ;
-(void)_setRemoteUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setRemoteValues:(id)arg1 forKeys:(id)arg2 ;
-(id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(BOOL)arg3 ;
-(void)_invokePublishingHandler:(/*^block*/id)arg1 ;
-(void)_invokeUnpublishingHandler;
-(void)_acknowledgeWithSuccess:(BOOL)arg1 ;
@end

