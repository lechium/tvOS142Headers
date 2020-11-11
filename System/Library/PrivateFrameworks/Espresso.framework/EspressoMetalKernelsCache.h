/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLLibrary, MTLDevice, OS_dispatch_queue;
#import <Espresso/Espresso-Structs.h>
@class NSObject, NSMutableDictionary, NSString, NSDictionary;

@interface EspressoMetalKernelsCache : NSObject {

	id<MTLLibrary> m_ShaderLibrary;
	id<MTLLibrary> m_DefaultLibrary;
	id<MTLDevice> _device;
	BOOL isSupportingiOSGPUFamilyV2;
	NSObject*<OS_dispatch_queue> dictionary_write_queue;
	NSMutableDictionary* auxLibraries;
	NSMutableDictionary* m_kernelCache_rw;
	mutex setup_mutex;
	NSString* _kernelPrefix;
	NSDictionary* _m_kernelCache;

}

@property (retain) NSDictionary * m_kernelCache;                   //@synthesize m_kernelCache=_m_kernelCache - In the implementation block
@property (nonatomic,retain) NSString * kernelPrefix;              //@synthesize kernelPrefix=_kernelPrefix - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(void)setKernelPrefix:(NSString *)arg1 ;
-(id)kernelForFunction:(const char*)arg1 cacheString:(const char*)arg2 withConstants:(id)arg3 ;
-(void)lazySetup;
-(BOOL)wasSetup;
-(void)loadLibraryNamed:(id)arg1 ;
-(void)addLibraryAtPath:(id)arg1 ;
-(id)kernelForFunction:(const char*)arg1 ;
-(BOOL)shouldUseTexArray;
-(NSString *)kernelPrefix;
-(NSDictionary *)m_kernelCache;
-(void)setM_kernelCache:(NSDictionary *)arg1 ;
@end

