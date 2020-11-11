/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TextRecognition/TextRecognition-Structs.h>
@interface CRTextDecodingUtils : NSObject
+(void)getWordBoundariesForWhiteSpaceRanges:(id)arg1 topPoints:(id*)arg2 bottomPoints:(id*)arg3 imageSize:(CGSize)arg4 scale:(float)arg5 rect:(CGRect)arg6 rotatedRoi:(CGRect)arg7 radians:(float)arg8 model:(id)arg9 configuration:(id)arg10 ;
+(BOOL)validateProbability:(id)arg1 precisionThreshold:(double)arg2 withLM:(BOOL)arg3 ;
+(id)whitespaceRangesForTokens:(id)arg1 ;
@end

