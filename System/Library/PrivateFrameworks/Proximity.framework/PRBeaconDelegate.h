/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PRBeaconDelegate <NSObject>
@optional
-(void)beacon:(id)arg1 didOutputRangeResults:(id)arg2;
-(void)beacon:(id)arg1 didOutputSuperframeStats:(id)arg2;

@required
-(void)beacon:(id)arg1 didChangeState:(unsigned long long)arg2;
-(void)beacon:(id)arg1 didFailWithError:(id)arg2;

@end

