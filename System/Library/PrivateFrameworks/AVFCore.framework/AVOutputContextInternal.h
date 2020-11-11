/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, AVOutputContextImpl, AVOutputContextCommunicationChannelDelegate;
@class NSObject;

@interface AVOutputContextInternal : NSObject {

	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	id<AVOutputContextImpl> impl;
	unsigned long long outputDeviceFeatures;
	int applicationPID;
	BOOL applicationPIDWasSet;
	id<AVOutputContextCommunicationChannelDelegate> communicationChannelDelegate;

}
@end
