/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, MechanismContext, NSObject;

@interface MechanismManager : NSObject {

	NSMutableDictionary* _plugins;
	MechanismContext* _mechanismContext;
	NSObject*<OS_dispatch_queue> _serverQueue;
	long long _evaluatedPolicy;

}

@property (nonatomic,readonly) long long evaluatedPolicy;                           //@synthesize evaluatedPolicy=_evaluatedPolicy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)loadMechanism:(long long)arg1 initParams:(id)arg2 request:(id)arg3 className:(id)arg4 error:(id*)arg5 ;
-(BOOL)_canLoadPlugin:(long long)arg1 className:(id)arg2 userId:(id)arg3 error:(id*)arg4 ;
-(id)_pathForPlugin:(long long)arg1 error:(id*)arg2 ;
-(void)_logClass:(Class)arg1 tag:(id)arg2 ;
-(void)_logClass:(Class)arg1 tag:(id)arg2 level:(int)arg3 ;
-(id)loadMechanism:(long long)arg1 initParams:(id)arg2 request:(id)arg3 error:(id*)arg4 ;
-(long long)evaluatedPolicy;
@end
