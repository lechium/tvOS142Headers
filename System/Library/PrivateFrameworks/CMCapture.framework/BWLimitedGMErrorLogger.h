/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface BWLimitedGMErrorLogger : NSObject {

	int _maxLoggingCount;
	int _currentLoggingCount;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int maxLoggingCount;                  //@synthesize maxLoggingCount=_maxLoggingCount - In the implementation block
@property (nonatomic,readonly) int currentLoggingCount;              //@synthesize currentLoggingCount=_currentLoggingCount - In the implementation block
-(NSString *)name;
-(void)dealloc;
-(id)initWithName:(id)arg1 maxLoggingCount:(int)arg2 ;
-(void)resetCurrentLoggingCounter;
-(void)logErrorNumber:(int)arg1 errorString:(id)arg2 ;
-(int)maxLoggingCount;
-(int)currentLoggingCount;
@end
