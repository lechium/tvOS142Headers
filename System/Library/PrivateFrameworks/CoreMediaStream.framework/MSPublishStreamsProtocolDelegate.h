/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MSPublishStreamsProtocolDelegate <MSStreamsProtocolDelegate>
@required
-(void)publishStreamsProtocol:(id)arg1 didFinishUploadingMetadataResponse:(id)arg2 error:(id)arg3;
-(void)publishStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
-(void)publishStreamsProtocol:(id)arg1 didFinishSendingUploadCompleteError:(id)arg2;

@end

