/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FBWorkspaceEventDispatcherTarget;
#import <FrontBoard/FrontBoard-Structs.h>
@class FBWorkspaceConnectionsStateStore, NSMutableDictionary, FBMutableWorkspaceConnectionsState;

@interface FBWorkspaceEventDispatcher : NSObject {

	FBWorkspaceConnectionsStateStore* _store;
	id<FBWorkspaceEventDispatcherTarget> _target;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _lock_workspaces;
	NSMutableDictionary* _lock_restartAssertions;
	FBMutableWorkspaceConnectionsState* _lock_mutableState;

}
+(id)sharedInstance;
-(id)init;
-(id)_initWithConnectionStore:(id)arg1 ;
-(void)_mainThread_dispatchHandshakeFromWorkspace:(id)arg1 toTarget:(id)arg2 ;
-(void)registerTarget:(id)arg1 ;
-(id)registerWorkspaceWithProcessHandle:(id)arg1 ;
-(void)noteHandshakeForWorkspaceRegistration:(id)arg1 withRemnants:(id)arg2 ;
@end

