/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIAnalytics : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)sendEventForFaceEvent:(id)arg1 homePersonManagerUUID:(id)arg2 camera:(id)arg3 ;
+(void)sendEventForPersonsModels:(id)arg1 ;
+(long long)bucketForValue:(long long)arg1 usingBuckets:(id)arg2 ;
+(void)sendEventForClusteringTask:(id)arg1 ;
@end

