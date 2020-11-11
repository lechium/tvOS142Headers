/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface CompositionDuckingTimes : NSObject {

	NSMutableArray* m_duckingEvents;
	int m_projectDurationInFrames;

}

@property (nonatomic,retain) NSMutableArray * duckingEvents; 
@property (assign) int projectDurationInFrames; 
+(id)compositionDuckingTimesWithProject:(id)arg1 ;
-(void)dealloc;
-(id)initWithProject:(id)arg1 ;
-(BOOL)clipIsAudible:(id)arg1 ;
-(NSMutableArray *)duckingEvents;
-(BOOL)shouldDuckAtTime:(int)arg1 ;
-(int)projectDurationInFrames;
-(void)addDuckingFromTime:(int)arg1 toTime:(int)arg2 ;
-(void)setDuckingEvents:(NSMutableArray *)arg1 ;
-(void)setProjectDurationInFrames:(int)arg1 ;
-(void)makeDuckingDataForEditListWithProject:(id)arg1 ;
-(void)makeDuckingDataForForegroundAudioClipsWithProject:(id)arg1 ;
-(void)appendDuckingChangeAtFrameTime:(int)arg1 shouldDuck:(BOOL)arg2 ;
-(int)nextDuckChangeTimeFromTime:(int)arg1 ;
@end

