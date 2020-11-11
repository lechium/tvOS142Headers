/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSLocking.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface CNBinarySemaphoreLock : NSObject <NSLocking> {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSString* _name;

}

@property (copy) NSString * name;              //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)invalidate;
-(void)setName:(NSString *)arg1 ;
@end

