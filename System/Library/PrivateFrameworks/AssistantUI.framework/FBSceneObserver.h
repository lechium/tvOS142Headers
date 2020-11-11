/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FBSceneObserver <NSObject>
@optional
-(void)sceneContentStateDidChange:(id)arg1;
-(void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;
-(void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
-(void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
-(void)sceneDidInvalidate:(id)arg1;

@end

