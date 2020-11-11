/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreRecognition/CoreRecognition-Structs.h>
@interface ActivationMapTools : NSObject
+(id)textFromActivationMap:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg1 codeMap:(const int*)arg2 invert:(BOOL)arg3 ;
+(id)fitSpacingModel:(id)arg1 toActivationMap:(const vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >*)arg2 codeMap:(const int*)arg3 minWordLengthFractionForCorrelationPeak:(float)arg4 cost:(float*)arg5 ;
+(BOOL)matchLabel:(int)arg1 toModelCharacter:(unsigned short)arg2 ;
+(id)characterCentroidsFromActivationMap:(vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >*)arg1 codeMap:(const int*)arg2 potentialPatterns:(id)arg3 minWordLengthFractionForCorrelationPeak:(float)arg4 bestModelIndex:(long long*)arg5 ;
+(id)decodeStringWithCentroids:(id)arg1 activationMap:(const vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >*)arg2 codeMap:(const int*)arg3 model:(id)arg4 ;
+(id)characterCentroidsFromActivationMap:(const vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >*)arg1 codeMap:(const int*)arg2 decodedSymbolIndexes:(id*)arg3 ;
+(void)extractActivationSignals:(map<int, std::__1::vector<float, std::__1::allocator<float> >, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::vector<float, std::__1::allocator<float> > > > >*)arg1 fromActivationMap:(const vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >*)arg2 forModel:(id)arg3 codeMap:(const int*)arg4 ;
+(int)colInImage:(vImage_Buffer*)arg1 forPoint:(int)arg2 inActivationMapWithSize:(int)arg3 ;
@end

