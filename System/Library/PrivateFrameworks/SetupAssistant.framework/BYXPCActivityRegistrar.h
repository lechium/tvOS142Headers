/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BYXPCActivityRegistrar : NSObject
+(id)sharedInstance;
-(void)registerActivityWithIdentifier:(const char*)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)unregisterActivityWithIdentifier:(const char*)arg1 ;
@end

