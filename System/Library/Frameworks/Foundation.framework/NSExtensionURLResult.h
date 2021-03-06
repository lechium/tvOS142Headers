/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
#import <Foundation/Foundation-Structs.h>
@class NSObject, NSURL;

@interface NSExtensionURLResult : NSObject {

	NSObject*<OS_dispatch_semaphore> _sema;
	NSURL* _url;
	os_unfair_lock_s _lock;

}

@property (setter=setURL:,copy) NSURL * url; 
-(id)init;
-(void)dealloc;
-(void)setURL:(id)arg1 ;
-(NSURL *)url;
-(id)copiedURL;
-(void)signal;
-(BOOL)wait:(double)arg1 ;
@end

