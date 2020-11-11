/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/BackgroundTaskDelegate.h>

@class ADBackgroundTaskRequest, NSNumber, NSString;

@interface ADDeviceKnowledgeManager : ADSingleton <BackgroundTaskDelegate> {

	BOOL _taskIsRunning;
	ADBackgroundTaskRequest* _xpc_task;
	NSNumber* _refreshInterval;

}

@property (assign,nonatomic) BOOL taskIsRunning;                              //@synthesize taskIsRunning=_taskIsRunning - In the implementation block
@property (nonatomic,retain) ADBackgroundTaskRequest * xpc_task;              //@synthesize xpc_task=_xpc_task - In the implementation block
@property (nonatomic,retain) NSNumber * refreshInterval;                      //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSNumber *)refreshInterval;
-(void)setRefreshInterval:(NSNumber *)arg1 ;
-(BOOL)runTask:(id)arg1 ;
-(void)checkOnTask:(id)arg1 activity:(id)arg2 ;
-(void)scheduleDeviceDataProcessing:(double)arg1 ;
-(void)processDeviceData:(/*^block*/id)arg1 ;
-(BOOL)taskIsRunning;
-(void)setTaskIsRunning:(BOOL)arg1 ;
-(ADBackgroundTaskRequest *)xpc_task;
-(void)setXpc_task:(ADBackgroundTaskRequest *)arg1 ;
@end

