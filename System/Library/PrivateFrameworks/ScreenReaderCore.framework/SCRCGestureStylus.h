/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <ScreenReaderCore/SCRCGestureFinger.h>

@interface SCRCGestureStylus : SCRCGestureFinger {

	double _altitude;
	double _azimuth;

}
-(long long)type;
-(double)altitude;
-(double)azimuth;
-(id)initWithIdentifier:(unsigned long long)arg1 location:(CGPoint)arg2 pressure:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5 ;
@end
