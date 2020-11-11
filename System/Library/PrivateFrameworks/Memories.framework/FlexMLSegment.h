/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@class NSArray;

@interface FlexMLSegment : NSObject {

	NSArray* _gainFunction;
	SCD_Struct_TV3 _duration;
	SCD_Struct_TV3 _trackTime;
	SCD_Struct_TV3 _summaryTime;

}

@property (nonatomic,readonly) SCD_Struct_TV3 duration;                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TV3 trackTime;                //@synthesize trackTime=_trackTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TV3 summaryTime;              //@synthesize summaryTime=_summaryTime - In the implementation block
@property (nonatomic,readonly) NSArray * gainFunction;                  //@synthesize gainFunction=_gainFunction - In the implementation block
-(SCD_Struct_TV3)duration;
-(SCD_Struct_TV3)trackTime;
-(SCD_Struct_TV3)summaryTime;
-(id)initWithDuration:(SCD_Struct_TV3)arg1 trackTime:(SCD_Struct_TV3)arg2 summaryTime:(SCD_Struct_TV3)arg3 gainFunction:(id)arg4 ;
-(NSArray *)gainFunction;
@end

