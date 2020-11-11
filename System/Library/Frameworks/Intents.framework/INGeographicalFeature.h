/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface INGeographicalFeature : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _geographicalFeatureType;
	NSArray* _geographicalFeatureDescriptors;

}

@property (nonatomic,copy,readonly) NSString * geographicalFeatureType;                    //@synthesize geographicalFeatureType=_geographicalFeatureType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * geographicalFeatureDescriptors;              //@synthesize geographicalFeatureDescriptors=_geographicalFeatureDescriptors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSArray *)geographicalFeatureDescriptors;
-(NSString *)geographicalFeatureType;
-(id)initWithGeographicalFeatureType:(id)arg1 geographicalFeatureDescriptors:(id)arg2 ;
@end

