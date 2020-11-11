/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface EKRecurrenceIdentifier : NSObject <NSCopying> {

	NSString* _localUID;
	NSDate* _recurrenceDate;
	NSString* _identifierString;

}

@property (retain) NSString * localUID;                                //@synthesize localUID=_localUID - In the implementation block
@property (retain) NSDate * recurrenceDate;                            //@synthesize recurrenceDate=_recurrenceDate - In the implementation block
@property (nonatomic,retain) NSString * identifierString;              //@synthesize identifierString=_identifierString - In the implementation block
+(BOOL)_splitIdentifier:(id)arg1 intoLocalUID:(id*)arg2 recurrenceDate:(id*)arg3 ;
+(id)_recurrenceIdentifierWithRecurrenceDate:(id)arg1 localUID:(id)arg2 stripTime:(BOOL)arg3 stripTimeZone:(BOOL)arg4 ;
+(const char*)_dateFormatStripTime:(BOOL)arg1 stripTimeZone:(BOOL)arg2 ;
+(id)recurrenceIdentifierWithLocalUID:(id)arg1 recurrenceDate:(id)arg2 ;
+(id)recurrenceIdentifierWithString:(id)arg1 ;
+(id)localUIDForIdentifierString:(id)arg1 ;
+(id)_recurrenceStringForDate:(id)arg1 stripTime:(BOOL)arg2 stripTimeZone:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)identifierString;
-(NSString *)localUID;
-(void)setLocalUID:(NSString *)arg1 ;
-(void)setRecurrenceDate:(NSDate *)arg1 ;
-(void)setIdentifierString:(NSString *)arg1 ;
-(NSDate *)recurrenceDate;
@end

