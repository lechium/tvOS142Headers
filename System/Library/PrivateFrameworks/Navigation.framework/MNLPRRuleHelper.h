/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MNLPRRuleHelper : NSObject
-(id)workQueue;
-(void)fetchRulesForWaypoints:(id)arg1 forceUpdateManifest:(BOOL)arg2 forceUpdateRules:(BOOL)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_loadRules:(id)arg1 asyncCompletion:(/*^block*/id)arg2 ;
-(void)_findTileKeysForRegions:(id)arg1 forceUpdate:(BOOL)arg2 asyncCompletion:(/*^block*/id)arg3 ;
-(void)_loadTileKeys:(id)arg1 forceUpdate:(BOOL)arg2 asyncCompletion:(/*^block*/id)arg3 ;
-(void)prefetchRulesForWaypoints:(id)arg1 ;
@end

