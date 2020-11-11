/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MKTransitDepartureServiceGapFormatterResult : NSObject {

	NSString* _format;
	NSString* _dateDescription;
	unsigned long long _dateFormat;

}

@property (nonatomic,copy,readonly) NSString * format;                       //@synthesize format=_format - In the implementation block
@property (nonatomic,copy,readonly) NSString * dateDescription;              //@synthesize dateDescription=_dateDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long dateFormat;                //@synthesize dateFormat=_dateFormat - In the implementation block
@property (nonatomic,readonly) NSString * formattedString; 
-(unsigned long long)dateFormat;
-(NSString *)format;
-(NSString *)formattedString;
-(NSString *)dateDescription;
-(id)initWithFormat:(id)arg1 dateDescription:(id)arg2 dateFormat:(unsigned long long)arg3 ;
@end

