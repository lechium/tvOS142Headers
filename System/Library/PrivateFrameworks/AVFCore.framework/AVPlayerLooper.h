/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVPlayerLooperInternal, NSError, NSArray;

@interface AVPlayerLooper : NSObject {

	AVPlayerLooperInternal* _looper;

}

@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (readonly) long long loopCount; 
@property (nonatomic,readonly) NSArray * loopingPlayerItems; 
+(void)initialize;
+(id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
+(id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)status;
-(long long)loopCount;
-(void)disableLooping;
-(NSArray *)loopingPlayerItems;
-(id)initWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(BOOL)_setupLoopingReturningError:(id*)arg1 ;
-(void)_changeStatusToFailedWithError:(id)arg1 ;
-(void)_turnOffLooping;
-(int)_calculateNumberOfCopiesNeeded;
-(void)_configureLoopingItem:(id)arg1 ;
-(BOOL)_isWaitingForLastCopyToFinishSet;
-(void)_cleanupAfterPlayingLastLoopingCopy;
@end
