/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PodcastsFoundation/IMAMSMetricsEvent.h>

@interface IMMetricsMemoryEvent : IMAMSMetricsEvent

@property (assign,nonatomic) unsigned long long usedBytes; 
@property (assign,nonatomic) unsigned long long totalBytes; 
-(id)init;
-(id)shortDescription;
-(unsigned long long)totalBytes;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(unsigned long long)usedBytes;
-(void)setUsedBytes:(unsigned long long)arg1 ;
@end

