/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDevice;
@class CIContext, NSHashTable, NSLock;

@interface VNImageBufferManager : NSObject {

	CIContext* mainCIContext;
	id<MTLDevice> mainCIContextMetalDevice;
	CIContext* lowPriorityCIContext;
	id<MTLDevice> lowPriorityCIContextMetalDevice;
	NSHashTable* activeImageBuffers;
	NSLock* bufferTableLock;

}
+(id)manager;
-(id)init;
-(void)dealloc;
-(void)purgeAllCaches;
-(void)addImageBuffer:(id)arg1 ;
-(void)removeBuffer:(id)arg1 ;
-(id)sharedCIContextWithOptions:(id)arg1 ;
@end

