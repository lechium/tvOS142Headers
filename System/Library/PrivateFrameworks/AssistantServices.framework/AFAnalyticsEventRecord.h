/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SiriCoreSQLiteRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AFAnalyticsEvent, NSString, NSDate;

@interface AFAnalyticsEventRecord : NSObject <SiriCoreSQLiteRecord, NSSecureCoding> {

	AFAnalyticsEvent* _event;
	NSString* _streamUID;
	NSDate* _dateCreated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) AFAnalyticsEvent * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,copy,readonly) NSString * streamUID;                  //@synthesize streamUID=_streamUID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateCreated;                  //@synthesize dateCreated=_dateCreated - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AFAnalyticsEvent *)event;
-(NSDate *)dateCreated;
-(id)initWithEvent:(id)arg1 streamUID:(id)arg2 dateCreated:(id)arg3 ;
-(NSString *)streamUID;
-(void)siriCoreSQLiteRecord_enumerateStorageKeysAndValuesUsingBlock:(/*^block*/id)arg1 ;
@end

