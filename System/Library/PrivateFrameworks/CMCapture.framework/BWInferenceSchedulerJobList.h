/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMapTable;

@interface BWInferenceSchedulerJobList : NSObject <NSFastEnumeration> {

	unsigned long long _jobCount;
	unsigned long long _mutations;
	SCD_Struct_BW115* _orderedJobs;
	NSMapTable* _jobIndexByProvider;

}

@property (readonly) unsigned long long count; 
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW114*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(SCD_Struct_BW115*)jobAtIndex:(unsigned long long)arg1 ;
@end
