/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCObject.h>

@class NSMutableSet, NSArray, MCContainer, NSSet;

@interface MCAudioPlaylist : MCObject {

	NSMutableSet* mSongs;
	NSArray* mCachedOrderedSongs;
	float mVolume;
	float mDuckLevel;
	double mFadeInDuration;
	double mFadeOutDuration;
	double mDuckInDuration;
	double mDuckOutDuration;
	MCContainer* mContainer;

}

@property (assign) MCContainer * container; 
@property (readonly) NSSet * songs; 
@property (readonly) NSArray * orderedSongs; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) float duckLevel; 
@property (assign,nonatomic) double duckInDuration; 
@property (assign,nonatomic) double duckOutDuration; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)init;
-(MCContainer *)container;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setContainer:(MCContainer *)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(NSSet *)songs;
-(double)duckInDuration;
-(void)setDuckInDuration:(double)arg1 ;
-(double)duckOutDuration;
-(void)setDuckOutDuration:(double)arg1 ;
-(float)duckLevel;
-(void)setDuckLevel:(float)arg1 ;
-(id)insertSongsForAssets:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeSongsAtIndices:(id)arg1 ;
-(void)moveSongsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)removeAllSongs;
-(unsigned long long)countOfSongs;
-(id)addSongsForAssets:(id)arg1 ;
-(void)demolish;
-(NSArray *)orderedSongs;
-(id)imprint;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(id)songAtIndex:(unsigned long long)arg1 ;
-(id)addSongForAsset:(id)arg1 ;
-(id)insertSongForAsset:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

