/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlSupport.framework/SiriPlaybackControlSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMHomeManagerDelegate <NSObject>
@optional
-(void)homeManager:(id)arg1 didUpdateAuthorizationStatus:(unsigned long long)arg2;
-(void)homeManagerDidUpdateHomes:(id)arg1;
-(void)homeManagerDidUpdatePrimaryHome:(id)arg1;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
-(void)homeManager:(id)arg1 didReceiveAddAccessoryRequest:(id)arg2;

@end

