/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol REFeatureTransformerInvalidationDelegate;
@class REPriorityQueue, REUpNextTimer, NSString;

@interface REFeatureTransformer : NSObject <NSCopying> {

	REPriorityQueue* _scheduledUpdates;
	REUpNextTimer* _updateTimer;
	id<REFeatureTransformerInvalidationDelegate> _invalidationDelegate;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)functionName;
+(BOOL)supportsInvalidation;
+(BOOL)supportsPersistence;
+(id)roundTransformer;
+(id)hashTransform;
+(id)maskTransformWithWidth:(unsigned long long)arg1 ;
+(id)bucketTransformerWithCount:(unsigned long long)arg1 minValue:(id)arg2 maxValue:(id)arg3 ;
+(id)binaryTransformerWithThreshold:(id)arg1 ;
+(id)customCategoricalTransformerWithName:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)bucketTransformerWithBitWidth:(unsigned long long)arg1 ;
+(id)customCategoricalTransformerWithName:(id)arg1 featureCount:(unsigned long long)arg2 transformation:(/*^block*/id)arg3 ;
+(id)changedTransformWithImpulseDuration:(double)arg1 ;
+(id)customTransformerWithName:(id)arg1 outputType:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
+(id)customTransformerWithName:(id)arg1 outputType:(unsigned long long)arg2 featureCount:(unsigned long long)arg3 transformation:(/*^block*/id)arg4 ;
+(id)featureTransformerClasses;
+(id)logTransformerWithBase:(id)arg1 ;
+(id)changedTransform;
+(id)maskAndShiftTransformWithStartIndex:(unsigned long long)arg1 endIndex:(unsigned long long)arg2 ;
+(id)recentTransformerWithCount:(unsigned long long)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(void)_invalidate;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)invalidationDelegate;
-(void)setInvalidationDelegate:(id)arg1 ;
-(void)invalidateWithContext:(id)arg1 ;
-(BOOL)readFromURL:(id)arg1 error:(id*)arg2 ;
-(void)configureWithInvocation:(id)arg1 ;
-(id)_invalidationQueue;
-(void)_invalidationQueue_scheduleInvalidation:(id)arg1 ;
-(void)_performAndScheduleTimer;
@end

