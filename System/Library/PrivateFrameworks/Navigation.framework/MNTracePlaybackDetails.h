/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface MNTracePlaybackDetails : PBCodable <NSCopying> {

	double _currentPosition;
	double _pedestrianTraceStartRelativeTimestamp;
	double _traceDuration;
	NSMutableArray* _bookmarks;
	int _eventType;
	NSString* _pedestrianTracePath;
	unsigned _recordedBookmarkID;
	NSString* _tracePath;
	SCD_Struct_MN9 _has;

}

@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                                              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL hasTracePath; 
@property (nonatomic,retain) NSString * tracePath;                                       //@synthesize tracePath=_tracePath - In the implementation block
@property (assign,nonatomic) BOOL hasTraceDuration; 
@property (assign,nonatomic) double traceDuration;                                       //@synthesize traceDuration=_traceDuration - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentPosition; 
@property (assign,nonatomic) double currentPosition;                                     //@synthesize currentPosition=_currentPosition - In the implementation block
@property (nonatomic,retain) NSMutableArray * bookmarks;                                 //@synthesize bookmarks=_bookmarks - In the implementation block
@property (assign,nonatomic) BOOL hasRecordedBookmarkID; 
@property (assign,nonatomic) unsigned recordedBookmarkID;                                //@synthesize recordedBookmarkID=_recordedBookmarkID - In the implementation block
@property (nonatomic,readonly) BOOL hasPedestrianTracePath; 
@property (nonatomic,retain) NSString * pedestrianTracePath;                             //@synthesize pedestrianTracePath=_pedestrianTracePath - In the implementation block
@property (assign,nonatomic) BOOL hasPedestrianTraceStartRelativeTimestamp; 
@property (assign,nonatomic) double pedestrianTraceStartRelativeTimestamp;               //@synthesize pedestrianTraceStartRelativeTimestamp=_pedestrianTraceStartRelativeTimestamp - In the implementation block
+(Class)bookmarkType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)eventType;
-(void)setEventType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)eventTypeAsString:(int)arg1 ;
-(int)StringAsEventType:(id)arg1 ;
-(double)currentPosition;
-(void)setCurrentPosition:(double)arg1 ;
-(void)addBookmark:(id)arg1 ;
-(void)setTracePath:(NSString *)arg1 ;
-(unsigned long long)bookmarksCount;
-(void)clearBookmarks;
-(id)bookmarkAtIndex:(unsigned long long)arg1 ;
-(void)setPedestrianTracePath:(NSString *)arg1 ;
-(BOOL)hasTracePath;
-(void)setTraceDuration:(double)arg1 ;
-(void)setHasTraceDuration:(BOOL)arg1 ;
-(BOOL)hasTraceDuration;
-(void)setHasCurrentPosition:(BOOL)arg1 ;
-(BOOL)hasCurrentPosition;
-(void)setRecordedBookmarkID:(unsigned)arg1 ;
-(void)setHasRecordedBookmarkID:(BOOL)arg1 ;
-(BOOL)hasRecordedBookmarkID;
-(BOOL)hasPedestrianTracePath;
-(void)setPedestrianTraceStartRelativeTimestamp:(double)arg1 ;
-(void)setHasPedestrianTraceStartRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasPedestrianTraceStartRelativeTimestamp;
-(NSString *)tracePath;
-(double)traceDuration;
-(NSMutableArray *)bookmarks;
-(void)setBookmarks:(NSMutableArray *)arg1 ;
-(unsigned)recordedBookmarkID;
-(NSString *)pedestrianTracePath;
-(double)pedestrianTraceStartRelativeTimestamp;
@end
