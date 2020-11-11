/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class NSMutableDictionary, MRImageProvider, NSMutableArray, NSArray;

@interface MREffectPinMap : MREffect {

	NSMutableDictionary* mSprites;
	float mLocalMatrix[16];
	MRImageProvider* mGradientProvider;
	MRImageProvider* mPinProvider;
	MRImageProvider* mYellowPinProvider;
	MRImageProvider* mRedPinProvider;
	MRImageProvider* mTextBoxArrowProvider;
	MRImageProvider* mTextBoxMiddleProvider;
	MRImageProvider* mTextBoxCapProvider;
	MRImageProvider* mTextBoxArrowFlippedProvider;
	MRImageProvider* mTextBoxMiddleFlippedProvider;
	MRImageProvider* mTextBoxCapFlippedProvider;
	MRImageProvider* mTextBox2ArrowProvider;
	MRImageProvider* mTextBox2MiddleProvider;
	MRImageProvider* mTextBox2CapProvider;
	MRImageProvider* mTextBox2ArrowFlippedProvider;
	MRImageProvider* mTextBox2MiddleFlippedProvider;
	MRImageProvider* mTextBox2CapFlippedProvider;
	MRImageProvider* mTitleBoxLeftProvider;
	MRImageProvider* mTitleBoxMiddleProvider;
	MRImageProvider* mTitleBoxRightProvider;
	MRImageProvider* mBoxShadowSmall;
	MRImageProvider* mBoxShadowBigScaled;
	MRImageProvider* mWaterProvider;
	NSMutableArray* mTextImages;
	NSMutableArray* mTextLineCounts;
	NSMutableArray* mTextYOffsets;
	NSArray* mSortedPins;
	BOOL mNeedsWater;
	BOOL mHas2LineLabels;
	BOOL mHas1LineLabels;
	BOOL mNeedsTitle;

}
-(void)setAttributes:(id)arg1 ;
-(void)_cleanup;
-(void)setPixelSize:(CGSize)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)_unload;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
-(void)_drawArrowInContext:(id)arg1 atTime:(double)arg2 withArguments:(id)arg3 atPoint:(CGPoint)arg4 scale:(double)arg5 withTextAtIndex:(long long)arg6 t:(CGPoint)arg7 pointDown:(BOOL)arg8 m:(float)arg9 ;
-(void)_drawTitleInContext:(id)arg1 atTime:(double)arg2 withArguments:(id)arg3 atPoint:(CGPoint)arg4 scale:(double)arg5 withTextAtIndex:(long long)arg6 ;
@end

