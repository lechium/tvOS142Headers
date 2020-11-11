/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, NSMutableDictionary, NSMutableArray;

@interface MPClusterSlide : NSObject <NSCopying> {

	NSDate* mCaptureDate;
	NSString* mPath;
	long long mReferenceCounter;
	NSMutableDictionary* mUsageCounterPerLayer;
	NSMutableArray* mUsableSlideClusters;
	long long mIndex;

}

@property (copy) NSDate * captureDate; 
@property (copy) NSString * path; 
@property (assign) long long referenceCounter; 
@property (assign) long long index; 
@property (retain) NSMutableDictionary * usageCounterPerLayer; 
@property (retain) NSMutableArray * usableSlideClusters; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(NSDate *)captureDate;
-(NSMutableArray *)usableSlideClusters;
-(id)usageCountDescription;
-(void)resetAllUsageCounters;
-(NSMutableDictionary *)usageCounterPerLayer;
-(void)setUsageCounterPerLayer:(NSMutableDictionary *)arg1 ;
-(long long)overallUsageCounter;
-(void)setUsableSlideClusters:(NSMutableArray *)arg1 ;
-(long long)referenceCounter;
-(void)setReferenceCounter:(long long)arg1 ;
-(void)setCaptureDate:(NSDate *)arg1 ;
-(void)setUsageCounterForLayer:(id)arg1 to:(long long)arg2 ;
-(void)increaseUsageCounterForLayer:(id)arg1 ;
-(long long)usageCounterForLayer:(id)arg1 ;
@end

