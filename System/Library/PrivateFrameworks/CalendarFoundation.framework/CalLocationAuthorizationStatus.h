/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CalLocationAuthorizationStatus : NSObject {

	int _status;
	unsigned long long _precision;

}

@property (nonatomic,readonly) int status;                                //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long precision;              //@synthesize precision=_precision - In the implementation block
-(int)status;
-(unsigned long long)precision;
-(id)initWithStatus:(int)arg1 precision:(unsigned long long)arg2 ;
@end
