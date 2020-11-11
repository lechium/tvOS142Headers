/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class NSMutableDictionary, NSArray, MRTextRenderer, MRImage, NSMutableArray;

@interface MREffectScrapbook : MREffect {

	NSMutableDictionary* mFrameProviders;
	NSMutableDictionary* mSprites;
	BOOL mIsLoaded;
	char mTitleAspectRatio;
	NSArray* mLayouts;
	MRTextRenderer* mTextRenderer0;
	MRImage* mTextImage0;
	NSMutableArray* mRectsToSubtract;
	BOOL mIsMovieOnly;
	CGSize mTextSize;
	float mLocalMatrix[16];

}
+(void)initialize;
-(BOOL)isOpaque;
-(void)_cleanup;
-(void)setPixelSize:(CGSize)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)_unload;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isAlphaFriendly;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
-(void)_drawBreakFrameInRect:(CGRect)arg1 frameWidth:(double)arg2 time:(double)arg3 inContext:(id)arg4 withArguments:(id)arg5 ;
-(void)_drawBreakTwoPartFrame:(id)arg1 index:(long long)arg2 rect:(CGRect)arg3 rotation:(double)arg4 forcedAspectRatio:(double)arg5 time:(double)arg6 inContext:(id)arg7 withArguments:(id)arg8 ;
-(void)_drawBreakFrame:(id)arg1 index:(long long)arg2 rect:(CGRect)arg3 rotation:(double)arg4 forcedAspectRatio:(double)arg5 layout:(id)arg6 offset:(CGSize)arg7 time:(double)arg8 inContext:(id)arg9 withArguments:(id)arg10 ;
-(void)_drawTextWithInfo:(id)arg1 rect:(CGRect)arg2 zIndex:(long long)arg3 zRotation:(double)arg4 time:(double)arg5 inContext:(id)arg6 withArguments:(id)arg7 ;
-(void)_drawFrame:(id)arg1 info:(id)arg2 rect:(CGRect)arg3 stretch:(BOOL)arg4 zIndex:(long long)arg5 zRotation:(double)arg6 subtract:(id)arg7 key:(id)arg8 time:(double)arg9 inContext:(id)arg10 withArguments:(id)arg11 ;
-(void)_drawMask:(id)arg1 index:(long long)arg2 rect:(CGRect)arg3 zIndex:(long long)arg4 zRotation:(double)arg5 subtract:(id)arg6 time:(double)arg7 inContext:(id)arg8 withArguments:(id)arg9 ;
-(void)_drawBlendedFrame:(id)arg1 info:(id)arg2 index:(long long)arg3 rect:(CGRect)arg4 zIndex:(long long)arg5 zRotation:(double)arg6 subtract:(id)arg7 time:(double)arg8 inContext:(id)arg9 withArguments:(id)arg10 ;
-(void)_drawPortraitPanoBackgroundInRect:(CGRect)arg1 flippedRect:(CGRect)arg2 paperType:(id)arg3 subtract:(id)arg4 inTime:(double)arg5 inContext:(id)arg6 withArguments:(id)arg7 ;
-(void)_drawLandscapePanoBackgroundInRect:(CGRect)arg1 paperType:(id)arg2 subtract:(id)arg3 inTime:(double)arg4 inContext:(id)arg5 withArguments:(id)arg6 ;
-(void)_drawFrame:(id)arg1 info:(id)arg2 index:(long long)arg3 rect:(CGRect)arg4 zIndex:(long long)arg5 zRotation:(double)arg6 subtract:(id)arg7 time:(double)arg8 inContext:(id)arg9 withArguments:(id)arg10 ;
@end

