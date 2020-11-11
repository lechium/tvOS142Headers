/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString, NSArray;

@interface HMICIFilter : HMFObject {

	NSString* _name;
	double _probability;
	NSArray* _attributes;

}

@property (readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (readonly) double probability;                //@synthesize probability=_probability - In the implementation block
@property (readonly) NSArray * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)attributes;
-(id)attributeForKey:(id)arg1 ;
-(double)probability;
-(id)expectedAttributeForKey:(id)arg1 ;
-(id)applyToImage:(id)arg1 withProbability:(double)arg2 ;
@end

