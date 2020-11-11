/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, NSString;

@interface NSOperationQueue : NSObject <NSProgressReporting> {

	SCD_Struct_NS52 _iqp;

}

@property (readonly) NSProgress * progress; 
@property (assign) long long maxConcurrentOperationCount; 
@property (getter=isSuspended) BOOL suspended; 
@property (copy) NSString * name; 
@property (assign) long long qualityOfService; 
@property (assign) NSObject*<OS_dispatch_queue> underlyingQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)currentQueue;
+(id)mainQueue;
-(NSString *)name;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(void)setUnderlyingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(NSProgress *)progress;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(id)operations;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(unsigned long long)operationCount;
-(long long)maxConcurrentOperationCount;
-(BOOL)isSuspended;
-(BOOL)overcommitsOperations;
-(void)setOvercommitsOperations:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)underlyingQueue;
-(void)cancelAllOperations;
-(void)waitUntilAllOperationsAreFinished;
-(id)__graphDescription;
-(void)_fc_addUncancellableOperationWithBlock:(/*^block*/id)arg1 ;
-(void)_fc_addUncancellableOperationForReactorID:(id)arg1 block:(/*^block*/id)arg2 ;
@end

