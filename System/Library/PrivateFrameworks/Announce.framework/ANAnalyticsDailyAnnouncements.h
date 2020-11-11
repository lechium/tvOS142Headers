/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface ANAnalyticsDailyAnnouncements : NSObject {

	double _lastAccess;
	NSMutableDictionary* _homes;

}

@property (assign,nonatomic) double lastAccess;                        //@synthesize lastAccess=_lastAccess - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * homes;              //@synthesize homes=_homes - In the implementation block
-(id)init;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)announcementsCount;
-(void)merge:(id)arg1 ;
-(NSMutableDictionary *)homes;
-(BOOL)shouldReport;
-(void)setLastAccess:(double)arg1 ;
-(double)lastAccess;
-(void)setHomes:(NSMutableDictionary *)arg1 ;
-(id)initWithLastAccess:(double)arg1 ;
-(unsigned long long)homesCount;
-(void)incrementCountInHome:(id)arg1 group:(id)arg2 ;
@end

