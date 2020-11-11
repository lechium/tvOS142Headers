/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString, NSDate;

@interface PGGraphContactNode : PGGraphOptimizedNode {

	NSString* _name;
	NSString* _contactIdentifier;
	NSDate* _birthdayDate;
	NSDate* _potentialBirthdayDate;

}

@property (readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (readonly) NSString * contactIdentifier;                //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (readonly) NSDate * birthdayDate;                       //@synthesize birthdayDate=_birthdayDate - In the implementation block
@property (readonly) NSDate * potentialBirthdayDate;              //@synthesize potentialBirthdayDate=_potentialBirthdayDate - In the implementation block
-(NSString *)name;
-(id)description;
-(id)init;
-(unsigned short)domain;
-(id)label;
-(NSString *)contactIdentifier;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
-(NSDate *)birthdayDate;
-(NSDate *)potentialBirthdayDate;
-(unsigned long long)sexHintForGivenName;
@end

