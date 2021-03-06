/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface LPYouTubeURLComponents : NSObject {

	NSString* _videoID;
	double _startTime;

}

@property (nonatomic,copy) NSString * videoID;              //@synthesize videoID=_videoID - In the implementation block
@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
+(BOOL)parseYouTubeTimeFormat:(id)arg1 outTime:(double*)arg2 ;
+(id)formatAsYouTubeTime:(double)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(NSString *)videoID;
-(void)setVideoID:(NSString *)arg1 ;
@end

