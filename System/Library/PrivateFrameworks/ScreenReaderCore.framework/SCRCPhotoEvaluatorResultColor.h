/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@interface SCRCPhotoEvaluatorResultColor : SCRCPhotoEvaluatorResult {

	double _redLevel;
	double _blueLevel;
	double _greenLevel;

}

@property (nonatomic,readonly) double redLevel;                //@synthesize redLevel=_redLevel - In the implementation block
@property (nonatomic,readonly) double blueLevel;               //@synthesize blueLevel=_blueLevel - In the implementation block
@property (nonatomic,readonly) double greenLevel;              //@synthesize greenLevel=_greenLevel - In the implementation block
-(id)initWithRedLevel:(double)arg1 blueLevel:(double)arg2 greenLevel:(double)arg3 ;
-(id)humanReadableResult;
-(double)redLevel;
-(double)blueLevel;
-(double)greenLevel;
@end
