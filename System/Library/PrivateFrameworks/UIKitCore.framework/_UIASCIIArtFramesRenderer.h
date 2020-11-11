/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray;

@interface _UIASCIIArtFramesRenderer : NSObject {

	NSArray* _frames;
	double _outputLineWidth;

}

@property (nonatomic,readonly) NSArray * frames; 
@property (nonatomic,readonly) double outputLineWidth; 
-(id)description;
-(id)visualDescription;
-(id)initWithFrames:(id)arg1 ;
-(NSArray *)frames;
-(id)_normalizeFrames:(id)arg1 ;
-(id)initWithFrames:(id)arg1 outputLineWidth:(double)arg2 ;
-(id)renderedLines;
-(double)outputLineWidth;
-(CGRect)scaledRectForRect:(CGRect)arg1 scaleSize:(CGSize)arg2 ;
@end

