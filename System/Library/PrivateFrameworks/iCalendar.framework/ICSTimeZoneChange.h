/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ICSTimeZoneChange : NSObject {

	double _interval;
	long long _tzOffsetTo;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(double)interval;
-(long long)tzOffsetTo;
-(BOOL)isCloseTo:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 tzOffsetTo:(long long)arg2 ;
@end

