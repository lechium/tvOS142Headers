/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CMWorkoutMetsInternal;

@interface CMWorkoutMets : NSObject {

	CMWorkoutMetsInternal* _internal;

}

@property (nonatomic,readonly) CMWorkoutMetsInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(id)init;
-(void)dealloc;
-(CMWorkoutMetsInternal *)_internal;
-(void)queryWorkoutMetsWithSessionId:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

