/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PPXPCServerHelper : NSObject
+(BOOL)shouldAcceptConnection:(id)arg1 serviceName:(id)arg2 allowedServerInterface:(id)arg3 allowedClientInterface:(id)arg4 requestHandler:(id)arg5 validateConnection:(/*^block*/id)arg6 setupClientProxy:(/*^block*/id)arg7 interruptionHandler:(/*^block*/id)arg8 invalidationHandler:(/*^block*/id)arg9 ;
+(BOOL)hasTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 ;
+(BOOL)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3 ;
@end

