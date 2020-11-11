/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CommonUtilities/CUTCheckpointTrace.h>

@class CUTCheckpointRange;

@interface APSIncomingMessageCheckpointTrace : CUTCheckpointTrace {

	CUTCheckpointRange* _sendToClient;
	CUTCheckpointRange* _storeInMessageStore;

}

@property (nonatomic,readonly) CUTCheckpointRange * sendToClient;                     //@synthesize sendToClient=_sendToClient - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * storeInMessageStore;              //@synthesize storeInMessageStore=_storeInMessageStore - In the implementation block
-(id)init;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(CUTCheckpointRange *)storeInMessageStore;
-(CUTCheckpointRange *)sendToClient;
@end

