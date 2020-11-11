/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSArray;

@interface PXMemoryEntryInfo : NSObject <NSCopying> {

	NSDate* _representativeDate;
	NSArray* _memories;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSDate * representativeDate;              //@synthesize representativeDate=_representativeDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * memories;                  //@synthesize memories=_memories - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                         //@synthesize endDate=_endDate - In the implementation block
+(long long)compareMemoryInfo:(id)arg1 toMemoryInfo:(id)arg2 ;
+(long long)compareMemoryInfo:(id)arg1 byRelevanceScoreToMemoryInfo:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSDate *)representativeDate;
-(NSArray *)memories;
-(id)initWithMemories:(id)arg1 ;
-(id)initWithSortedMemories:(id)arg1 ;
-(unsigned long long)indexOfMemory:(id)arg1 ;
-(id)entryByAddingMemory:(id)arg1 ;
-(id)entryByRemovingMemory:(id)arg1 ;
-(id)entryByReplacingMemoryInfoAtIndex:(long long)arg1 withMemoryInfo:(id)arg2 ;
@end

