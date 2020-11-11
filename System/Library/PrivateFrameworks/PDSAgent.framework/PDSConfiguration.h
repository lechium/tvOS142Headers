/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDSAgent/PDSAgent-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, OS_dispatch_workloop;
@class NSObject, NSURL;

@interface PDSConfiguration : NSObject <NSCopying> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_workloop> _workloop;
	NSURL* _daemonRootDirectory;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_workloop> workloop;              //@synthesize workloop=_workloop - In the implementation block
@property (nonatomic,retain) NSURL * daemonRootDirectory;                           //@synthesize daemonRootDirectory=_daemonRootDirectory - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(void)setWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(NSURL *)daemonRootDirectory;
-(void)setDaemonRootDirectory:(NSURL *)arg1 ;
@end

