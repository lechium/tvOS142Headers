/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVMutableValueTiming.h>

@interface AVConcreteMutableValueTiming : AVMutableValueTiming {

	double _value;
	double _timeStamp;
	double _rate;

}
-(void)setRate:(double)arg1 ;
-(double)rate;
-(CGPoint)_timing;
-(double)anchorValue;
-(double)anchorTimeStamp;
-(id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
-(void)setAnchorValue:(double)arg1 ;
-(void)setAnchorTimeStamp:(double)arg1 ;
@end
