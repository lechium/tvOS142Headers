/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PHAJobConstraintsObserverDelegate;
@class PHAJobConstraints;

@interface PHAJobConstraintsObserver : NSObject {

	BOOL _shutdownRequested;
	id<PHAJobConstraintsObserverDelegate> _delegate;
	PHAJobConstraints* _currentConstraints;

}

@property (nonatomic,retain) PHAJobConstraints * currentConstraints;                             //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<PHAJobConstraintsObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL shutdownRequested;                                                       //@synthesize shutdownRequested=_shutdownRequested - In the implementation block
-(id)init;
-(void)dealloc;
-(id<PHAJobConstraintsObserverDelegate>)delegate;
-(void)setDelegate:(id<PHAJobConstraintsObserverDelegate>)arg1 ;
-(PHAJobConstraints *)currentConstraints;
-(void)setCurrentConstraints:(PHAJobConstraints *)arg1 ;
-(id)acceptConstraints:(id)arg1 mask:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shutdownRequested;
-(void)setShutdownRequested:(BOOL)arg1 ;
-(id)initWithInitialConstraints:(id)arg1 delegate:(id)arg2 ;
-(void)setShutdownRequested;
@end

