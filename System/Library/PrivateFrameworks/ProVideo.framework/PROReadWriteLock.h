/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface PROReadWriteLock : NSObject <NSLocking> {

	opaque_pthread_rwlock_t lock;

}
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)lockForReading;
-(void)lockForWriting;
@end

