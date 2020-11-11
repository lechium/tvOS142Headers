/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBDateComponents : PBCodable <NSCopying> {

	NSString* _calendarIdentifier;
	int _day;
	int _month;
	NSString* _timeZoneName;
	int _year;
	SCD_Struct_PP4 _has;

}

@property (assign,nonatomic) BOOL hasDay; 
@property (assign,nonatomic) int day;                                    //@synthesize day=_day - In the implementation block
@property (assign,nonatomic) BOOL hasMonth; 
@property (assign,nonatomic) int month;                                  //@synthesize month=_month - In the implementation block
@property (assign,nonatomic) BOOL hasYear; 
@property (assign,nonatomic) int year;                                   //@synthesize year=_year - In the implementation block
@property (nonatomic,readonly) BOOL hasCalendarIdentifier; 
@property (nonatomic,retain) NSString * calendarIdentifier;              //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeZoneName; 
@property (nonatomic,retain) NSString * timeZoneName;                    //@synthesize timeZoneName=_timeZoneName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setYear:(int)arg1 ;
-(void)setMonth:(int)arg1 ;
-(void)setDay:(int)arg1 ;
-(int)year;
-(int)month;
-(int)day;
-(NSString *)calendarIdentifier;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTimeZoneName;
-(NSString *)timeZoneName;
-(void)setTimeZoneName:(NSString *)arg1 ;
-(BOOL)hasMonth;
-(void)setHasMonth:(BOOL)arg1 ;
-(BOOL)hasYear;
-(void)setHasYear:(BOOL)arg1 ;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(void)setHasDay:(BOOL)arg1 ;
-(BOOL)hasDay;
-(BOOL)hasCalendarIdentifier;
@end
