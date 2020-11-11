/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPCPlaybackHistoryRecordChangeRequest;

@interface MPCPlaybackHistoryRecordChangeRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	MPCPlaybackHistoryRecordChangeRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPCPlaybackHistoryRecordChangeRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                           //@synthesize responseHandler=_responseHandler - In the implementation block
-(MPCPlaybackHistoryRecordChangeRequest *)request;
-(void)execute;
-(void)setRequest:(MPCPlaybackHistoryRecordChangeRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)_finishChangeRequestOperationWithError:(id)arg1 ;
@end

