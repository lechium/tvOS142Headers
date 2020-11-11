/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface CKDFileWatcher : NSObject {

	int _fd;
	NSString* _path;
	NSObject*<OS_dispatch_source> _source;

}

@property (nonatomic,retain) NSString * path;                                   //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> source;              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) int fd;                                            //@synthesize fd=_fd - In the implementation block
+(id)queue;
-(void)dealloc;
-(NSObject*<OS_dispatch_source>)source;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(int)fd;
-(void)setFd:(int)arg1 ;
@end
