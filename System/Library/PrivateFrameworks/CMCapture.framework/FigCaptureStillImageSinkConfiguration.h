/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkConfiguration.h>

@interface FigCaptureStillImageSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _quadraHighResCaptureEnabled;

}

@property (assign,nonatomic) BOOL quadraHighResCaptureEnabled;              //@synthesize quadraHighResCaptureEnabled=_quadraHighResCaptureEnabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setQuadraHighResCaptureEnabled:(BOOL)arg1 ;
-(int)sinkType;
-(BOOL)quadraHighResCaptureEnabled;
@end

