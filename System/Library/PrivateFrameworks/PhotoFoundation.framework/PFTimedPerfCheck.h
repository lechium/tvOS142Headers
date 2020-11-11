/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoFoundation/PhotoFoundation-Structs.h>
@interface PFTimedPerfCheck : NSObject {

	BOOL _isSessionCompleted;
	os_unfair_lock_s _sessionCompletedLock;
	pc_sessionRef _pc_session;
	double _initialProcessMemoryPeak;
	double _initialProcessMemoryCurrent;

}
+(id)start;
-(id)init;
-(void)dealloc;
-(id)stop;
-(void)setup;
-(id)perfCheckLogStringWithPerfCheckInfo:(id)arg1 ;
-(id)endSessionAndReturnPerfCheckExtraInformation;
@end
