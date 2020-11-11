/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Sharing/SFProximityEstimator.h>

@interface SFProximityEstimatorMaxOfMean : SFProximityEstimator {

	char* _channelNumberArray;
	char* _rssiArray;
	unsigned _rssiCount;
	unsigned _rssiIndex;
	unsigned _rssiMinCount;

}
-(id)description;
-(void)dealloc;
-(id)initWithProximityInfo:(id)arg1 ;
-(int)_estimateRSSIForSFBLEDevice:(id)arg1 ;
@end
