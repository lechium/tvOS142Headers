/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TDLayerStackRenditionSpec, NSMutableArray;

@interface _TDLayerStackFilterHelper : NSObject {

	TDLayerStackRenditionSpec* _layerStackRendition;
	NSMutableArray* _excludedIdioms;
	NSMutableArray* _excludedSubtypes;
	NSMutableArray* _excludedScaleFactors;
	NSMutableArray* _excludedHorizontalSizeClasses;
	NSMutableArray* _excludedVerticalSizeClasses;
	NSMutableArray* _excludedDirections;
	NSMutableArray* _excludedLayers;
	NSMutableArray* _excludedPresentationStates;
	NSMutableArray* _excludedSizes;
	NSMutableArray* _excludedStates;
	NSMutableArray* _excludedValues;

}

@property (nonatomic,retain) TDLayerStackRenditionSpec * layerStackRendition;              //@synthesize layerStackRendition=_layerStackRendition - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludedIdioms;                              //@synthesize excludedIdioms=_excludedIdioms - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludedSubtypes;                            //@synthesize excludedSubtypes=_excludedSubtypes - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludedScaleFactors;                        //@synthesize excludedScaleFactors=_excludedScaleFactors - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludedHorizontalSizeClasses;               //@synthesize excludedHorizontalSizeClasses=_excludedHorizontalSizeClasses - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludedVerticalSizeClasses;                 //@synthesize excludedVerticalSizeClasses=_excludedVerticalSizeClasses - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludedDirections;                          //@synthesize excludedDirections=_excludedDirections - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludedLayers;                              //@synthesize excludedLayers=_excludedLayers - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludedPresentationStates;                  //@synthesize excludedPresentationStates=_excludedPresentationStates - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludedSizes;                               //@synthesize excludedSizes=_excludedSizes - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludedStates;                              //@synthesize excludedStates=_excludedStates - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludedValues;                              //@synthesize excludedValues=_excludedValues - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setLayerStackRendition:(TDLayerStackRenditionSpec *)arg1 ;
-(void)establishExclusionsWithHelper:(id)arg1 idioms:(id)arg2 sizeClasses:(id)arg3 ;
-(TDLayerStackRenditionSpec *)layerStackRendition;
-(BOOL)allowKey:(id)arg1 ;
-(NSMutableArray *)excludedIdioms;
-(void)setExcludedIdioms:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludedSubtypes;
-(void)setExcludedSubtypes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludedScaleFactors;
-(void)setExcludedScaleFactors:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludedHorizontalSizeClasses;
-(void)setExcludedHorizontalSizeClasses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludedVerticalSizeClasses;
-(void)setExcludedVerticalSizeClasses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludedDirections;
-(void)setExcludedDirections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludedLayers;
-(void)setExcludedLayers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludedPresentationStates;
-(void)setExcludedPresentationStates:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludedSizes;
-(void)setExcludedSizes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludedStates;
-(void)setExcludedStates:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludedValues;
-(void)setExcludedValues:(NSMutableArray *)arg1 ;
@end

