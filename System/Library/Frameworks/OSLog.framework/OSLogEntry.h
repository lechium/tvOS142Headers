/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface OSLogEntry : NSObject {

	NSString* _composedMessage;
	NSDate* _date;
	long long _storeCategory;

}

@property (nonatomic,readonly) NSString * composedMessage;              //@synthesize composedMessage=_composedMessage - In the implementation block
@property (nonatomic,readonly) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long storeCategory;                 //@synthesize storeCategory=_storeCategory - In the implementation block
-(NSDate *)date;
-(NSString *)composedMessage;
-(id)initWithEventProxy:(id)arg1 ;
-(long long)storeCategory;
@end

