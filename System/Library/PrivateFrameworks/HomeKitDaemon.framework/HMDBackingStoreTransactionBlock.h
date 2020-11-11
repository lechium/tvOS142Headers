/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDBackingStoreTransactionOptions, HMDBackingStore, NSMutableArray, NSString;

@interface HMDBackingStoreTransactionBlock : HMFObject <HMFLogging> {

	BOOL _committed;
	HMDBackingStoreTransactionOptions* _options;
	HMDBackingStore* _backingStore;
	NSMutableArray* _objects;

}

@property (assign,nonatomic,__weak) HMDBackingStore * backingStore;                      //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;                                   //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) BOOL committed;                                             //@synthesize committed=_committed - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreTransactionOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)sort:(id)arg1 ;
+(id)logCategory;
-(NSString *)description;
-(void)run;
-(HMDBackingStoreTransactionOptions *)options;
-(void)setCommitted:(BOOL)arg1 ;
-(void)save:(/*^block*/id)arg1 ;
-(void)save;
-(NSMutableArray *)objects;
-(void)add:(id)arg1 ;
-(void)run:(/*^block*/id)arg1 ;
-(HMDBackingStore *)backingStore;
-(void)setBackingStore:(HMDBackingStore *)arg1 ;
-(void)setObjects:(NSMutableArray *)arg1 ;
-(id)debugString:(BOOL)arg1 ;
-(id)logIdentifier;
-(void)add:(id)arg1 withMessage:(id)arg2 ;
-(void)dumpDebug;
-(BOOL)committed;
-(void)dumpDebug:(id)arg1 ;
-(void)addObjects:(id)arg1 ;
-(id)initWithBackingStore:(id)arg1 options:(id)arg2 label:(id)arg3 ;
-(void)runWithoutSave:(/*^block*/id)arg1 ;
@end

