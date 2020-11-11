/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>

@class NSArray, DeviceQuery;

@interface SetRepeatStateIntent : INIntent

@property (nonatomic,copy) NSArray * devices; 
@property (assign,nonatomic) long long repeatState; 
@property (nonatomic,copy) NSArray * deviceContext; 
@property (assign,nonatomic) long long mediaType; 
@property (nonatomic,copy) DeviceQuery * deviceQuery; 
@end

