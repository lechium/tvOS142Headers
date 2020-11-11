/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary, MUMathExpressionDoubleBased, NSMutableDictionary, NSMutableArray, MCContainerParallelizer;

@interface MPAnimatedSet : NSObject {

	NSString* mAnimatedSetID;
	NSDictionary* mDescription;
	MUMathExpressionDoubleBased* mTimeOfGoodPositionFormula;
	BOOL mTimeWraps;
	NSMutableDictionary* mSlides;
	NSMutableArray* mFeaturedSlidePositions;
	NSMutableArray* mFeaturingAttributes;
	double mStartTime;
	double mIntroDuration;
	double mMainDuration;
	double mOutroDuration;
	double mTotalNumberOfIntervals;
	double mDefaultFeaturingDuration;
	double mDefaultFeaturingAnimationDuration;
	NSDictionary* mDefaultFeaturingAnimationAttributes;
	NSDictionary* mAttributes;
	BOOL mEaseInEaseOutBetweenFeaturedSlides;
	BOOL mFirstSlideIsShared;
	BOOL mLastSlideIsShared;
	NSString* mIntroAnimationID;
	NSString* mOutroAnimationID;
	double mDistance;
	double mSpeed;
	MCContainerParallelizer* mContainer;

}

@property (readonly) NSString * animatedSetID; 
@property (readonly) BOOL timeWraps; 
@property (assign) double startTime; 
@property (readonly) double fullDuration; 
@property (assign) double defaultFeaturingDuration; 
@property (assign) double defaultFeaturingAnimationDuration; 
@property (readonly) unsigned long long minimumNumberOfSlides; 
@property (readonly) unsigned long long maximumNumberOfSlides; 
@property (readonly) BOOL needsEvenNumberOfSlides; 
@property (copy) NSDictionary * attributes; 
@property (assign) BOOL easeInEaseOutBetweenFeaturedSlides; 
@property (assign) BOOL firstSlideIsShared; 
@property (assign) BOOL lastSlideIsShared; 
@property (copy) NSString * introAnimationID; 
@property (copy) NSString * outroAnimationID; 
@property (assign) double distance; 
@property (assign) double speed; 
@property (readonly) MCContainerParallelizer * container; 
-(void)dealloc;
-(MCContainerParallelizer *)container;
-(double)startTime;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setStartTime:(double)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(double)speed;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(double)fullDuration;
-(void)updateContainer;
-(void)removeSlideAtPosition:(unsigned long long)arg1 ;
-(void)setAnimationPathsForPlug:(id)arg1 atPosition:(unsigned long long)arg2 ;
-(void)setAnimationPaths:(id)arg1 onPlug:(id)arg2 atPosition:(unsigned long long)arg3 atTimeOffset:(double)arg4 withTimeOffsetKind:(int)arg5 forDuration:(double)arg6 withFunctionTimeOffset:(double)arg7 andFunctionTimeFactor:(double)arg8 easeIn:(BOOL)arg9 easeOut:(BOOL)arg10 otherAttributes:(id)arg11 ;
-(void)applyIntroAnimationPathsToPlug:(id)arg1 atPosition:(unsigned long long)arg2 ;
-(double)timeOfGoodPositionForPosition:(long long)arg1 ;
-(id)initWithAnimatedSetID:(id)arg1 ;
-(unsigned long long)minimumNumberOfSlides;
-(unsigned long long)maximumNumberOfSlides;
-(BOOL)needsEvenNumberOfSlides;
-(void)decodeFromSlides:(id)arg1 ;
-(void)showSlide:(id)arg1 atPosition:(unsigned long long)arg2 featuringAttributes:(id)arg3 ;
-(void)removeAllSlides;
-(id)slides;
-(double)featuringTimeForSlideAtPosition:(unsigned long long)arg1 ;
-(void)insertIntoContainer:(id)arg1 ;
-(void)computeAnimationPathsForTime:(double)arg1 andPosition:(unsigned long long)arg2 usingAnimationPaths:(id)arg3 otherAttributes:(id)arg4 plugTimeOffset:(double)arg5 plugTimeOffsetKind:(int)arg6 plugAnimationPaths:(id)arg7 ;
-(void)chooseAnIntroAnimation;
-(void)chooseAnOutroAnimation;
-(NSString *)animatedSetID;
-(BOOL)timeWraps;
-(double)defaultFeaturingDuration;
-(void)setDefaultFeaturingDuration:(double)arg1 ;
-(double)defaultFeaturingAnimationDuration;
-(void)setDefaultFeaturingAnimationDuration:(double)arg1 ;
-(BOOL)easeInEaseOutBetweenFeaturedSlides;
-(void)setEaseInEaseOutBetweenFeaturedSlides:(BOOL)arg1 ;
-(BOOL)firstSlideIsShared;
-(void)setFirstSlideIsShared:(BOOL)arg1 ;
-(BOOL)lastSlideIsShared;
-(void)setLastSlideIsShared:(BOOL)arg1 ;
-(NSString *)introAnimationID;
-(void)setIntroAnimationID:(NSString *)arg1 ;
-(NSString *)outroAnimationID;
-(void)setOutroAnimationID:(NSString *)arg1 ;
-(double)time1OfGoodPositionForPosition:(long long)arg1 ;
-(double)time2OfGoodPositionForPosition:(long long)arg1 ;
@end

