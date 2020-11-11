/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_os_transaction, OS_xpc_object;
@class NSObject, NSString;

@interface TRIRunningXPCActivityDescriptor : NSObject <NSCopying> {

	NSObject*<OS_os_transaction> _txn;
	NSString* _name;
	/*^block*/id _shouldDefer;
	/*^block*/id _completion;
	NSObject*<OS_xpc_object> _activity;
	unsigned long long _capabilities;

}

@property (nonatomic,copy) id shouldDefer;                                     //@synthesize shouldDefer=_shouldDefer - In the implementation block
@property (nonatomic,copy) id completion;                                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) unsigned long long capabilities;                //@synthesize capabilities=_capabilities - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)completion;
-(id)shouldDefer;
-(void)setCompletion:(id)arg1 ;
-(NSObject*<OS_xpc_object>)activity;
-(unsigned long long)capabilities;
-(void)setShouldDefer:(id)arg1 ;
-(id)initForImmediateWorkWithCapabilities:(unsigned long long)arg1 ;
-(id)initWithActivity:(id)arg1 capabilities:(unsigned long long)arg2 name:(id)arg3 ;
@end

