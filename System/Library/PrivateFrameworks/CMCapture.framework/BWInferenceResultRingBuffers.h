/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableDictionary;

@interface BWInferenceResultRingBuffers : NSObject {

	OpaqueFigSimpleMutexRef _lock;
	NSMutableDictionary* _rings;

}
-(id)init;
-(void)dealloc;
-(void)insertInferenceResultsFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setupRingBuffer:(int)arg1 inferencesOfType:(int)arg2 ;
-(id)retrieveInferencesForType:(int)arg1 beginning:(SCD_Struct_BW7)arg2 until:(SCD_Struct_BW7)arg3 ;
-(void)bufferingStatsForType:(int)arg1 firstOut:(SCD_Struct_BW7*)arg2 lastOut:(SCD_Struct_BW7*)arg3 countOut:(int*)arg4 ;
@end
