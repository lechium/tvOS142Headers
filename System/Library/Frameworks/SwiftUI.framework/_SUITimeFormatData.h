/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumberFormatter;

@interface _SUITimeFormatData : NSObject {

	NSString* _formatHourMinSecSubsec;
	NSString* _formatHourMinSec;
	NSString* _formatHourMin;
	NSString* _formatMinSecSubsec;
	NSString* _formatMinSec;
	NSString* _formatMin;
	NSNumberFormatter* _singleWidthNumberFormatter;
	NSNumberFormatter* _doubleWidthNumberFormatter;

}

@property (nonatomic,readonly) NSString * formatHourMinSecSubsec;                           //@synthesize formatHourMinSecSubsec=_formatHourMinSecSubsec - In the implementation block
@property (nonatomic,readonly) NSString * formatHourMinSec;                                 //@synthesize formatHourMinSec=_formatHourMinSec - In the implementation block
@property (nonatomic,readonly) NSString * formatHourMin;                                    //@synthesize formatHourMin=_formatHourMin - In the implementation block
@property (nonatomic,readonly) NSString * formatMinSecSubsec;                               //@synthesize formatMinSecSubsec=_formatMinSecSubsec - In the implementation block
@property (nonatomic,readonly) NSString * formatMinSec;                                     //@synthesize formatMinSec=_formatMinSec - In the implementation block
@property (nonatomic,readonly) NSString * formatMin;                                        //@synthesize formatMin=_formatMin - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * singleWidthNumberFormatter;              //@synthesize singleWidthNumberFormatter=_singleWidthNumberFormatter - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * doubleWidthNumberFormatter;              //@synthesize doubleWidthNumberFormatter=_doubleWidthNumberFormatter - In the implementation block
+(id)_timeFormatDataAccessLock;
+(id)_timeLocaleForLocale:(id)arg1 ;
+(id)instanceForLocale:(id)arg1 ;
-(id)initWithLocale:(id)arg1 ;
-(NSString *)formatHourMinSecSubsec;
-(NSString *)formatHourMinSec;
-(NSString *)formatHourMin;
-(NSString *)formatMinSecSubsec;
-(NSString *)formatMinSec;
-(NSString *)formatMin;
-(NSNumberFormatter *)singleWidthNumberFormatter;
-(NSNumberFormatter *)doubleWidthNumberFormatter;
@end

