/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLPlacemark, NSArray, NSString;

@interface INSpatialEventTrigger : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	CLPlacemark* _placemark;
	long long _event;
	NSArray* _suggestedValues;
	long long _mobileSpace;

}

@property (nonatomic,copy,readonly) NSArray * suggestedValues;              //@synthesize suggestedValues=_suggestedValues - In the implementation block
@property (nonatomic,readonly) long long mobileSpace;                       //@synthesize mobileSpace=_mobileSpace - In the implementation block
@property (nonatomic,copy,readonly) CLPlacemark * placemark;                //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) long long event;                             //@synthesize event=_event - In the implementation block
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
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)event;
-(id)_dictionaryRepresentation;
-(CLPlacemark *)placemark;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(id)initWithPlacemark:(id)arg1 event:(long long)arg2 ;
-(id)initWithPlacemark:(id)arg1 event:(long long)arg2 suggestedValues:(id)arg3 mobileSpace:(long long)arg4 ;
-(id)initWithMobileSpace:(long long)arg1 event:(long long)arg2 ;
-(NSArray *)suggestedValues;
-(long long)mobileSpace;
@end

