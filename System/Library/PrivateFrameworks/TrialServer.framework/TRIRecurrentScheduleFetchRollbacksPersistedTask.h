/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class TRIPersistedTaskAttribution;

@interface TRIRecurrentScheduleFetchRollbacksPersistedTask : TRIPBMessage

@property (nonatomic,retain) TRIPersistedTaskAttribution * taskAttribution; 
@property (assign,nonatomic) BOOL hasTaskAttribution; 
@property (assign,nonatomic) BOOL isRepeatedInstance; 
@property (assign,nonatomic) BOOL hasIsRepeatedInstance; 
+(id)descriptor;
@end
