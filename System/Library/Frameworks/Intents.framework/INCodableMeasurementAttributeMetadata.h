/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INCodableAttributeMetadata.h>
#import <libobjc.A.dylib/INCodableAttributeDefaultValueProviding.h>

@class NSUnit, NSOrderedSet, NSString;

@interface INCodableMeasurementAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {

	BOOL _supportsNegativeNumbers;
	NSUnit* _unit;
	NSOrderedSet* _defaultUnits;
	double _defaultValue;

}

@property (nonatomic,retain) NSUnit * unit;                             //@synthesize unit=_unit - In the implementation block
@property (nonatomic,retain) NSOrderedSet * defaultUnits;               //@synthesize defaultUnits=_defaultUnits - In the implementation block
@property (assign,nonatomic) double defaultValue;                       //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign,nonatomic) BOOL supportsNegativeNumbers;              //@synthesize supportsNegativeNumbers=_supportsNegativeNumbers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUnit *)unit;
-(double)defaultValue;
-(void)setDefaultValue:(double)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(void)setUnit:(NSUnit *)arg1 ;
-(id)defaultValueForIntentDefaultValueProvider;
-(id)__INCodableDescriptionDefaultValueKey;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(id)__INCodableDescriptionDefaultUnitKey;
-(id)__INCodableDescriptionUnitKey;
-(id)__INIntentResponseCodableDescriptionUnitKey;
-(id)__INTypeCodableDescriptionUnitKey;
-(id)__INIntentResponseCodableDescriptionDefaultUnitKey;
-(id)__INTypeCodableDescriptionDefaultUnitKey;
-(Class)_unitClass;
-(id)_unitWithUnitName:(id)arg1 ;
-(id)_defaultUnitWithNames:(id)arg1 ;
-(NSOrderedSet *)defaultUnits;
-(void)setDefaultUnits:(NSOrderedSet *)arg1 ;
-(BOOL)supportsNegativeNumbers;
-(void)setSupportsNegativeNumbers:(BOOL)arg1 ;
-(id)__INCodableDescriptionSupportsNegativeNumbersKey;
-(id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
-(id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
@end

