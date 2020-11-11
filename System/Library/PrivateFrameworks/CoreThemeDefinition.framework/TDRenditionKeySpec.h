/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/TDElementAttributes.h>

@class TDThemeState, TDThemePresentationState, TDThemeValue, TDThemeSize, TDThemeDirection, TDThemePart, TDThemeElement, TDThemeDrawingLayer, TDThemeIdiom, TDThemeGraphicsFeatureSetClass, TDThemeUISizeClass, TDThemeDisplayGamut, TDThemeDeploymentTarget, TDAppearance, TDLocalization, TDThemeGlyphSize, TDThemeGlyphWeight;

@interface TDRenditionKeySpec : NSManagedObject <TDElementAttributes> {

	unsigned _dimension1;
	unsigned _dimension2;
	unsigned _scaleFactor;
	unsigned _subtype;
	unsigned _nameIdentifier;
	unsigned _memoryClass;
	renditionkeytoken _stackScratchKey[22];
	renditionkeytoken* _scratchKey;

}

@property (nonatomic,retain) TDThemeState * state; 
@property (nonatomic,retain) TDThemeState * previousState; 
@property (nonatomic,retain) TDThemePresentationState * presentationState; 
@property (nonatomic,retain) TDThemeValue * value; 
@property (nonatomic,retain) TDThemeValue * previousValue; 
@property (nonatomic,retain) TDThemeSize * size; 
@property (nonatomic,retain) TDThemeDirection * direction; 
@property (nonatomic,retain) TDThemePart * part; 
@property (nonatomic,retain) TDThemeElement * element; 
@property (nonatomic,retain) TDThemeDrawingLayer * layer; 
@property (nonatomic,retain) TDThemeIdiom * idiom; 
@property (nonatomic,retain) TDThemeGraphicsFeatureSetClass * graphicsFeatureSetClass; 
@property (nonatomic,retain) TDThemeUISizeClass * sizeClassHorizontal; 
@property (nonatomic,retain) TDThemeUISizeClass * sizeClassVertical; 
@property (nonatomic,retain) TDThemeDisplayGamut * gamut; 
@property (nonatomic,retain) TDThemeDeploymentTarget * target; 
@property (nonatomic,retain) TDAppearance * appearance; 
@property (nonatomic,retain) TDLocalization * localization; 
@property (nonatomic,retain) TDThemeGlyphSize * glyphSize; 
@property (nonatomic,retain) TDThemeGlyphWeight * glyphWeight; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(const renditionkeytoken*)key;
-(unsigned)subtype;
-(void)setSubtype:(unsigned)arg1 ;
-(unsigned)scaleFactor;
-(void)setScaleFactor:(unsigned)arg1 ;
-(const renditionkeyfmt*)keyFormat;
-(unsigned)dimension1;
-(unsigned)dimension2;
-(void)setDimension1:(unsigned)arg1 ;
-(unsigned)memoryClass;
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(void)setDimension2:(unsigned)arg1 ;
-(id)dataFromAttributes;
-(void)setAttributesFromData:(id)arg1 ;
-(unsigned)nameIdentifier;
-(void)setNameIdentifier:(unsigned)arg1 ;
-(void)setMemoryClass:(unsigned)arg1 ;
-(long long)attributeCount;
-(void)getKey:(renditionkeytoken*)arg1 ;
-(id)scaleFactorString;
-(void)setScaleFactorString:(id)arg1 ;
-(void)setAttributesFromRenditionKey:(const renditionkeytoken*)arg1 withDocument:(id)arg2 ;
-(id)keyDescription;
@end

