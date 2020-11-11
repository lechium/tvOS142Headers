/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MCPlug.h>

@class NSString, MCContainerParallelizer;

@interface MCPlugParallel : MCPlug {

	void* mGeometry;
	short mZIndex;
	short mAudioPriority;
	NSString* mIDInSupercontainer;
	MCContainerParallelizer* mSupercontainer;
	double mTimeIn;
	double mOpacity;

}

@property (setter=setIDInSupercontainer:,getter=idInSupercontainer,copy) NSString * idInSupercontainer; 
@property (assign) MCContainerParallelizer * supercontainer; 
@property (assign,nonatomic) BOOL isTriggered; 
@property (assign,nonatomic) BOOL resetsTimeOnTrigger; 
@property (readonly) BOOL hasAbsoluteAspectRatio; 
@property (readonly) BOOL hasValidWidth; 
@property (assign,nonatomic) BOOL clipsContainer; 
@property (assign,nonatomic) double timeIn; 
@property (assign,nonatomic) short zIndex; 
@property (assign,nonatomic) short audioPriority; 
@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) CGSize size; 
@property (readonly) double width; 
@property (readonly) double height; 
@property (readonly) double aspectRatio; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double rotation; 
@property (assign,nonatomic) double rotationAngle; 
@property (assign,nonatomic) double positionZ; 
@property (assign,nonatomic) double zPosition; 
@property (assign,nonatomic) double rotationX; 
@property (assign,nonatomic) double xRotationAngle; 
@property (assign,nonatomic) double rotationY; 
@property (assign,nonatomic) double yRotationAngle; 
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (readonly) unsigned char countOfLayouts; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)description;
-(id)init;
-(CGSize)size;
-(double)scale;
-(CGPoint)position;
-(void)setPosition:(CGPoint)arg1 ;
-(double)width;
-(double)height;
-(void)setScale:(double)arg1 ;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(double)opacity;
-(double)zPosition;
-(void)setZPosition:(double)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(double)aspectRatio;
-(short)zIndex;
-(void)setZIndex:(short)arg1 ;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(short)audioPriority;
-(void)setAudioPriority:(short)arg1 ;
-(double)rotationY;
-(double)rotationX;
-(void)setTimeIn:(double)arg1 ;
-(BOOL)isTriggered;
-(void)setIsTriggered:(BOOL)arg1 ;
-(NSString *)idInSupercontainer;
-(void)demolish;
-(double)xRotationAngle;
-(double)yRotationAngle;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setYRotationAngle:(double)arg1 ;
-(double)timeIn;
-(MCContainerParallelizer *)supercontainer;
-(CGSize)sizeForParentAspectRatio:(double)arg1 ;
-(BOOL)clipsContainer;
-(unsigned char)currentLayoutIndex;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(double)aspectRatioForParentAspectRatio:(double)arg1 ;
-(BOOL)resetsTimeOnTrigger;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)setSupercontainer:(MCContainerParallelizer *)arg1 ;
-(void)setIDInSupercontainer:(id)arg1 ;
-(double)positionZ;
-(void)setPositionZ:(double)arg1 ;
-(void)setRotationX:(double)arg1 ;
-(void)setRotationY:(double)arg1 ;
-(BOOL)hasAbsoluteAspectRatio;
-(BOOL)hasValidWidth;
-(void)setWidth:(double)arg1 andAbsoluteAspectRatio:(double)arg2 ;
-(void)setHeight:(double)arg1 andAbsoluteAspectRatio:(double)arg2 ;
-(void)setResetsTimeOnTrigger:(BOOL)arg1 ;
-(void)setClipsContainer:(BOOL)arg1 ;
-(unsigned char)countOfLayouts;
@end

