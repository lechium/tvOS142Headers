/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVConferenceXPCClient;

@interface AVCVirtualTTYDevice : NSObject {

	AVConferenceXPCClient* _connection;
	id _delegate;
	BOOL _isStarted;

}

@property (assign,nonatomic) id<AVCVirtualTTYDeviceDelegate> delegate; 
-(void)dealloc;
-(id<AVCVirtualTTYDeviceDelegate>)delegate;
-(void)setDelegate:(id<AVCVirtualTTYDeviceDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(id)sendCharacter:(unsigned short)arg1 ;
-(BOOL)sendText:(id)arg1 ;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(void)terminateSession;
-(id)initWithMode:(long long)arg1 error:(id*)arg2 ;
-(id)initWithMode:(long long)arg1 error:(id*)arg2 streamToken:(long long)arg3 ;
-(id)initWithStreamToken:(long long)arg1 error:(id*)arg2 ;
@end

