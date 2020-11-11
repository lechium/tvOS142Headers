/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/MPSCNNConvolutionDataSource.h>

@class MPSCNNConvolutionDescriptor, NSString;

@interface VCPCNNMPSDataSource : NSObject <MPSCNNConvolutionDataSource> {

	unsigned _dataType;
	MPSCNNConvolutionDescriptor* _descriptor;
	void* _kernelWeights;
	float* _biasTerms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(id)descriptor;
-(unsigned)dataType;
-(void)purge;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void*)weights;
-(float*)biasTerms;
-(id)initWith:(unsigned)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(void*)arg3 biasTerm:(float*)arg4 ;
@end

