/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class Project, MiroMemory, MiroAutoEditLogger;


@protocol MiroAutoEditDelegate <NSObject>
@property (nonatomic,readonly) Project * project; 
@property (nonatomic,readonly) MiroMemory * activeMemory; 
@property (nonatomic,readonly) MiroAutoEditLogger * logger; 
@property (nonatomic,readonly) BOOL titleIsSupported; 
@optional
-(BOOL)titleIsSupported;

@required
-(MiroAutoEditLogger *)logger;
-(Project *)project;
-(MiroMemory *)activeMemory;

@end

