/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOAnalyticsPipelineReportOperation.h>

@class NSData;

@interface GEOAnalyticsPipelineReportEventOperation : GEOAnalyticsPipelineReportOperation {

	int _logMsgType;
	int _handlingPolicyId;
	NSData* _logMsg;

}
-(void)main;
-(id)initWithType:(int)arg1 handlingPolicyId:(int)arg2 logMsg:(id)arg3 remoteProxy:(id)arg4 runQueue:(id)arg5 completionQueue:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
@end

