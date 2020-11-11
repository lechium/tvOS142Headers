/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFScreenOnObserverDelegate, OS_dispatch_queue;
@class NSObject;

@interface WFScreenOnObserver : NSObject {

	BOOL _screenOn;
	int _token;
	id<WFScreenOnObserverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) int token;                                                   //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL screenOn;                                             //@synthesize screenOn=_screenOn - In the implementation block
@property (assign,nonatomic,__weak) id<WFScreenOnObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WFScreenOnObserverDelegate>)delegate;
-(void)setDelegate:(id<WFScreenOnObserverDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(int)token;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setToken:(int)arg1 ;
-(BOOL)screenOn;
-(void)stateChanged:(BOOL)arg1 ;
@end

