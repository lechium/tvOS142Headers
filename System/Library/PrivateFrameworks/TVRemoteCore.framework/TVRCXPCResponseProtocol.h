/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVRCXPCResponseProtocol <NSObject>
@required
-(void)deviceUpdatedState:(id)arg1;
-(void)deviceWithState:(id)arg1 encounteredAuthChallengeOfType:(long long)arg2 attributes:(long long)arg3 codeToEnterOnDevice:(id)arg4 throttleSeconds:(long long)arg5;
-(void)deviceQueryUpdatedDiscoveredDevices:(id)arg1;

@end

