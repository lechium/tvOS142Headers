/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLBinaryArchiveSPI.h>

@protocol MTLDevice, OS_dispatch_queue;
@class NSArray, MTLLoadedFile, NSData, NSObject, NSMutableDictionary, NSString;

@interface _MTLBinaryArchive : _MTLObjectWithLabel <MTLBinaryArchiveSPI> {

	id<MTLDevice> _device;
	unsigned long long _options;
	MTLLoadedFile* _fileMapping;
	NSData* _fileData;
	NSObject*<OS_dispatch_queue> _queue;
	map<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long>, CompareHash, std::__1::allocator<std::__1::pair<const MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> > > >* _fileIndex;
	NSMutableDictionary* _entries;
	unique_ptr<MTLPipelineCollection, std::__1::default_delete<MTLPipelineCollection> >* _pipelineCollection;
	BOOL _collectArchives;

}

@property (readonly) unsigned long long options;                    //@synthesize options=_options - In the implementation block
@property (readonly) NSArray * keys; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)deserializeBinaryArchiveHeader:(SCD_Struct_MT14*)arg1 fileData:(id)arg2 device:(id)arg3 ;
+(BOOL)deserializeBinaryArchiveDescriptorMachO:(SCD_Struct_MT14*)arg1 fileData:(id)arg2 ;
+(id)descriptorDataForArchive:(id)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(NSArray *)keys;
-(unsigned long long)options;
-(id<MTLDevice>)device;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 device:(id)arg2 url:(id)arg3 error:(id*)arg4 ;
-(id)materializeFromFileOffset:(unsigned long long)arg1 hash:(SCD_Struct_MT6*)arg2 ;
-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)materializeAll;
-(id)materializeFromHash:(SCD_Struct_MT6*)arg1 ;
-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)serializeToURL:(id)arg1 error:(id*)arg2 ;
-(void)addBinaryEntry:(id)arg1 forKey:(id)arg2 ;
-(id)getBinaryDataForKey:(id)arg1 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
@end

