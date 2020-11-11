/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNGreedyClusteringReadOnly.h>
#import <libobjc.A.dylib/VNClusteringWritable.h>

@interface VNGreedyClusteringReadWrite : VNGreedyClusteringReadOnly <VNClusteringWritable> {

	shared_ptr<vision::mod::FaceClustering>* m_ClusteringImpl;

}
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)getClustersWithOptions:(id)arg1 error:(id*)arg2 ;
-(long long)_cancellableUpdate:(ImageDescriptorBufferAbstract*)arg1 facesToMove:(vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long> > >*)arg2 requestRevision:(unsigned long long)arg3 ;
@end

