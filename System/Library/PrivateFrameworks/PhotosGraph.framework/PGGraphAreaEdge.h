/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphPropertylessEdge.h>

@interface PGGraphAreaEdge : PGGraphPropertylessEdge {

	float _weight;

}
-(unsigned short)domain;
-(id)label;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)edgeDescription;
-(id)initFromAddressNode:(id)arg1 toAreaNode:(id)arg2 weight:(float)arg3 ;
@end

