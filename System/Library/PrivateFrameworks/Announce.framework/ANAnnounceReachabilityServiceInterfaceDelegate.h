/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ANAnnounceReachabilityServiceInterfaceDelegate <NSObject>
@required
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForHomeName:(id)arg2;
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoomName:(id)arg2 inHomeName:(id)arg3;
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForHomeUUID:(id)arg2;
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoomUUID:(id)arg2 inHomeUUID:(id)arg3;

@end

