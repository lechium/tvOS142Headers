/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeadBoardModel/HBMBinaryFileDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HBMRetailDemoModeDataSource : HBMBinaryFileDataSource {

	int _backgroundStateNotificationToken;
	NSObject*<OS_dispatch_queue> _backgroundStateQueue;

}

@property (nonatomic,readonly) int backgroundStateNotificationToken;                           //@synthesize backgroundStateNotificationToken=_backgroundStateNotificationToken - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> backgroundStateQueue;              //@synthesize backgroundStateQueue=_backgroundStateQueue - In the implementation block
-(void)startListening;
-(void)stopListening;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(int)backgroundStateNotificationToken;
-(NSObject*<OS_dispatch_queue>)backgroundStateQueue;
@end

