/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject, NSString;

@interface BWIntermediateJPEGCompressedBufferAssociatedSemaphore : NSObject {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSString* _name;
	SCD_Struct_BW7 _pts;

}
-(void)dealloc;
-(id)initWithSemaphore:(id)arg1 name:(id)arg2 presentationTimeStamp:(SCD_Struct_BW7)arg3 ;
@end

