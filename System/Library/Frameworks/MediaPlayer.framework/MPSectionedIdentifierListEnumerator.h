/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSEnumerator.h>

@class MPSectionedIdentifierList, NSMutableArray, MPSectionedIdentifierListEntry;

@interface MPSectionedIdentifierListEnumerator : NSEnumerator {

	MPSectionedIdentifierList* _sectionedIdentifierList;
	unsigned long long _options;
	NSMutableArray* _contexts;
	NSMutableArray* _nextEmittableEnumerationResults;
	MPSectionedIdentifierListEntry* _endEntry;

}

@property (assign,nonatomic) unsigned long long options;                                         //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSMutableArray * contexts;                                          //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) NSMutableArray * nextEmittableEnumerationResults;                   //@synthesize nextEmittableEnumerationResults=_nextEmittableEnumerationResults - In the implementation block
@property (nonatomic,retain) MPSectionedIdentifierListEntry * endEntry;                          //@synthesize endEntry=_endEntry - In the implementation block
@property (nonatomic,readonly) MPSectionedIdentifierList * sectionedIdentifierList;              //@synthesize sectionedIdentifierList=_sectionedIdentifierList - In the implementation block
-(id)nextObject;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSMutableArray *)contexts;
-(void)setContexts:(NSMutableArray *)arg1 ;
-(id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startEntry:(id)arg3 endEntry:(id)arg4 withExclusiveAccessToken:(id)arg5 ;
-(id)nextObjectWithExclusiveAccessToken:(id)arg1 ;
-(MPSectionedIdentifierList *)sectionedIdentifierList;
-(NSMutableArray *)nextEmittableEnumerationResults;
-(void)setNextEmittableEnumerationResults:(NSMutableArray *)arg1 ;
-(MPSectionedIdentifierListEntry *)endEntry;
-(void)setEndEntry:(MPSectionedIdentifierListEntry *)arg1 ;
@end

