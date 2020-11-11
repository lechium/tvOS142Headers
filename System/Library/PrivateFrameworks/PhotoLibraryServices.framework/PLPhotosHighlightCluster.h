/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSCopying;
@class NSSet, NSDate, NSString, PLDateRangeTitleGenerator, NSObject;

@interface PLPhotosHighlightCluster : NSObject {

	BOOL _isCurated;
	unsigned short _type;
	unsigned short _category;
	unsigned short _kind;
	int _startTimeZoneOffset;
	int _endTimeZoneOffset;
	NSSet* _moments;
	NSSet* _assets;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _title;
	PLDateRangeTitleGenerator* _dateRangeTitleGenerator;
	NSObject*<NSCopying> _objectID;

}

@property (nonatomic,retain) NSSet * assets;                                                   //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) PLDateRangeTitleGenerator * dateRangeTitleGenerator;              //@synthesize dateRangeTitleGenerator=_dateRangeTitleGenerator - In the implementation block
@property (nonatomic,retain) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                                 //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                               //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) int startTimeZoneOffset;                                          //@synthesize startTimeZoneOffset=_startTimeZoneOffset - In the implementation block
@property (assign,nonatomic) int endTimeZoneOffset;                                            //@synthesize endTimeZoneOffset=_endTimeZoneOffset - In the implementation block
@property (assign,nonatomic) BOOL isCurated;                                                   //@synthesize isCurated=_isCurated - In the implementation block
@property (assign,nonatomic) unsigned short type;                                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned short category;                                          //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned short kind;                                              //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSSet * moments;                                                //@synthesize moments=_moments - In the implementation block
@property (nonatomic,readonly) NSObject*<NSCopying> objectID;                                  //@synthesize objectID=_objectID - In the implementation block
-(void)setType:(unsigned short)arg1 ;
-(unsigned short)type;
-(unsigned short)category;
-(void)setCategory:(unsigned short)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned short)kind;
-(void)setKind:(unsigned short)arg1 ;
-(NSObject*<NSCopying>)objectID;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSSet *)assets;
-(void)setAssets:(NSSet *)arg1 ;
-(void)setIsCurated:(BOOL)arg1 ;
-(BOOL)isCurated;
-(int)startTimeZoneOffset;
-(void)setStartTimeZoneOffset:(int)arg1 ;
-(int)endTimeZoneOffset;
-(void)setEndTimeZoneOffset:(int)arg1 ;
-(NSSet *)moments;
-(void)setMoments:(NSSet *)arg1 ;
-(PLDateRangeTitleGenerator *)dateRangeTitleGenerator;
-(id)initWithMoments:(id)arg1 dateRangeTitleGenerator:(id)arg2 ;
-(void)_calculatePropertyValues;
-(void)setDateRangeTitleGenerator:(PLDateRangeTitleGenerator *)arg1 ;
@end

