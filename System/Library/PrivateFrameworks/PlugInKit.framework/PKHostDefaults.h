/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSUserDefaults.h>

@protocol OS_dispatch_queue;
@class PKHostPlugIn, NSObject;

@interface PKHostDefaults : NSUserDefaults {

	PKHostPlugIn* _plugin;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (__weak) PKHostPlugIn * plugin;                           //@synthesize plugin=_plugin - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)synchronize;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)registerDefaults:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPlugin:(PKHostPlugIn *)arg1 ;
-(PKHostPlugIn *)plugin;
-(id)initWithPlugIn:(id)arg1 ;
@end

