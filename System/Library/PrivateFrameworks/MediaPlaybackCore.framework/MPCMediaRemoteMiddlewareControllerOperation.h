/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPCMediaRemoteMiddlewareControllerProviding.h>
#import <libobjc.A.dylib/MPMiddlewareAutomaticDependencyOperation.h>

@class MPCFuture, MPCMediaRemoteController, NSMapTable, NSArray, MPCMediaRemoteMiddleware, MPCPlayerPath, NSString, NSError;

@interface MPCMediaRemoteMiddlewareControllerOperation : MPAsyncOperation <MPCMediaRemoteMiddlewareControllerProviding, MPMiddlewareAutomaticDependencyOperation> {

	NSMapTable* _inputOperations;
	/*^block*/id _invalidationHandler;
	NSArray* _invalidationObservers;
	MPCMediaRemoteMiddleware* _middleware;
	MPCPlayerPath* _playerPath;
	MPCFuture* _controllerFuture;

}

@property (nonatomic,readonly) MPCFuture * controllerFuture; 
@property (nonatomic,readonly) MPCMediaRemoteController * controller; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPCMediaRemoteMiddleware * middleware;                //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPCPlayerPath * playerPath;                           //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,retain) MPCFuture * controllerFuture;                         //@synthesize controllerFuture=_controllerFuture - In the implementation block
@property (nonatomic,readonly) NSArray * inputProtocols; 
@property (nonatomic,readonly) NSArray * outputProtocols; 
@property (nonatomic,retain) NSMapTable * inputOperations;                         //@synthesize inputOperations=_inputOperations - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                                 //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                    //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)execute;
-(MPCMediaRemoteController *)controller;
-(MPCPlayerPath *)playerPath;
-(void)setPlayerPath:(MPCPlayerPath *)arg1 ;
-(id)timeoutDescription;
-(NSArray *)invalidationObservers;
-(MPCMediaRemoteMiddleware *)middleware;
-(void)setMiddleware:(MPCMediaRemoteMiddleware *)arg1 ;
-(NSArray *)inputProtocols;
-(NSArray *)outputProtocols;
-(NSMapTable *)inputOperations;
-(void)setInputOperations:(NSMapTable *)arg1 ;
-(MPCFuture *)controllerFuture;
-(void)setControllerFuture:(MPCFuture *)arg1 ;
-(id)initWithMiddleware:(id)arg1 playerPath:(id)arg2 ;
@end

