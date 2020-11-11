/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AWDObserverDelegate;
#import <WirelessDiagnostics/WirelessDiagnostics-Structs.h>
@interface AWDObserver : NSObject {

	shared_ptr<AWDObserverConnection>* observerConnection;
	id<AWDObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AWDObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<AWDObserverDelegate>)delegate;
-(void)setDelegate:(id<AWDObserverDelegate>)arg1 ;
-(void)setDelegate:(id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)setConfiguration:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

