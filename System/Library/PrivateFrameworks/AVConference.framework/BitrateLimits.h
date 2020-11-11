/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface BitrateLimits : NSObject {

	int operatingMode;
	unsigned long long defaultValue;
	unsigned long long defaultValueCellular;
	unsigned long long defaultValue2G;
	NSArray* limits;

}

@property (nonatomic,readonly) int operatingMode; 
@property (nonatomic,readonly) NSArray * limits; 
+(unsigned long long)insertionIndex:(id)arg1 forValue:(id)arg2 ;
-(void)dealloc;
-(NSArray *)limits;
-(int)operatingMode;
-(void)capDefaultValues:(unsigned long long)arg1 ;
-(id)initWithOperatingMode:(int)arg1 withBitrateCap:(unsigned long long)arg2 useCaseWatchContinuity:(BOOL)arg3 ;
-(unsigned long long)defaultValueForNetwork:(BOOL)arg1 ;
@end

