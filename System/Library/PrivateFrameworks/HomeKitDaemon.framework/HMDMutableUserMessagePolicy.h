/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDUserMessagePolicy.h>

@interface HMDMutableUserMessagePolicy : HMDUserMessagePolicy

@property (assign) unsigned long long userPrivilege; 
@property (assign) BOOL requiresRemoteAccess; 
@property (assign) BOOL requiresCameraStreamingAccess; 
+(id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 ;
+(id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 requiresCameraStreamingAccess:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserPrivilege:(unsigned long long)arg1 ;
-(void)setRequiresRemoteAccess:(BOOL)arg1 ;
-(void)setRequiresCameraStreamingAccess:(BOOL)arg1 ;
@end

