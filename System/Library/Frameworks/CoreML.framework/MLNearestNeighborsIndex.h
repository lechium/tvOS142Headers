/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MLNearestNeighborsIndex
@required
-(vector<std::__1::pair<unsigned long, float>, std::__1::allocator<std::__1::pair<unsigned long, float> > >*)findNearestNeighbors:(unsigned long long)arg1 toQueryPoint:(const vector<float, std::__1::allocator<float> >*)arg2;
-(BOOL)updateWithData:(const vector<float, std::__1::allocator<float> >*)arg1 error:(id*)arg2;
-(unsigned long long)dataPointCount;

@end
