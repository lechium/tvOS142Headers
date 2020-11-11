/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSDate;

@interface VUIStreamingBookmark : NSObject {

	NSNumber* _absoluteResumeTime;
	NSDate* _absoluteBookmarkTimestamp;
	NSNumber* _relativeResumeTime;
	NSDate* _relativeBookmarkTimestamp;

}

@property (nonatomic,retain) NSNumber * absoluteResumeTime;                   //@synthesize absoluteResumeTime=_absoluteResumeTime - In the implementation block
@property (nonatomic,retain) NSDate * absoluteBookmarkTimestamp;              //@synthesize absoluteBookmarkTimestamp=_absoluteBookmarkTimestamp - In the implementation block
@property (nonatomic,retain) NSNumber * relativeResumeTime;                   //@synthesize relativeResumeTime=_relativeResumeTime - In the implementation block
@property (nonatomic,retain) NSDate * relativeBookmarkTimestamp;              //@synthesize relativeBookmarkTimestamp=_relativeBookmarkTimestamp - In the implementation block
-(id)initWithAbsoluteResumeTime:(id)arg1 absoluteTimestamp:(id)arg2 relativeResumeTime:(id)arg3 relativeBookmarkTimestamp:(id)arg4 ;
-(NSNumber *)absoluteResumeTime;
-(void)setAbsoluteResumeTime:(NSNumber *)arg1 ;
-(NSDate *)absoluteBookmarkTimestamp;
-(void)setAbsoluteBookmarkTimestamp:(NSDate *)arg1 ;
-(NSNumber *)relativeResumeTime;
-(void)setRelativeResumeTime:(NSNumber *)arg1 ;
-(NSDate *)relativeBookmarkTimestamp;
-(void)setRelativeBookmarkTimestamp:(NSDate *)arg1 ;
@end

