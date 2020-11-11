/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphOptimizedEdge.h>

@class NSString;

@interface PGGraphRelationshipEdge : PGGraphOptimizedEdge {

	unsigned _numberOfMomentsAtHome : 32;
	unsigned _numberOfLoveEmojisExchanged : 32;
	unsigned _hasParentContactName : 1;
	unsigned _hasSameFamilyNameAsMePerson : 1;
	unsigned _hasAnniversaryDate : 1;
	unsigned _isTopTwoPersonsSocialGroup : 1;
	unsigned _isTopPerson : 1;
	unsigned _isPersonAgeDifferentThanMeNode : 1;
	unsigned _isPersonOldEnoughToBeParentOrGrandparent : 1;
	BOOL _isPersonYoungEnoughToBeMeNodeChild;
	float _confidence;
	NSString* _relationship;
	double _familyHolidayAttendanceRate;
	double _friendNightOutAttendanceRate;
	double _partnerTripAttendanceRate;
	double _friendsAndFamilyTripAttendanceRate;
	double _weekendAppearanceRatio;
	double _momentsAtWorkAppearanceRate;
	double _calendarAttendanceRatio;

}

@property (readonly) NSString * relationship;                                     //@synthesize relationship=_relationship - In the implementation block
@property (readonly) float confidence;                                            //@synthesize confidence=_confidence - In the implementation block
@property (readonly) unsigned long long status; 
@property (readonly) double familyHolidayAttendanceRate;                          //@synthesize familyHolidayAttendanceRate=_familyHolidayAttendanceRate - In the implementation block
@property (readonly) BOOL hasParentContactName;                                   //@synthesize hasParentContactName=_hasParentContactName - In the implementation block
@property (readonly) BOOL hasSameFamilyNameAsMePerson;                            //@synthesize hasSameFamilyNameAsMePerson=_hasSameFamilyNameAsMePerson - In the implementation block
@property (readonly) unsigned long long numberOfMomentsAtHome;                    //@synthesize numberOfMomentsAtHome=_numberOfMomentsAtHome - In the implementation block
@property (readonly) BOOL hasAnniversaryDate;                                     //@synthesize hasAnniversaryDate=_hasAnniversaryDate - In the implementation block
@property (readonly) BOOL isTopTwoPersonsSocialGroup;                             //@synthesize isTopTwoPersonsSocialGroup=_isTopTwoPersonsSocialGroup - In the implementation block
@property (readonly) unsigned long long numberOfLoveEmojisExchanged;              //@synthesize numberOfLoveEmojisExchanged=_numberOfLoveEmojisExchanged - In the implementation block
@property (readonly) BOOL isTopPerson;                                            //@synthesize isTopPerson=_isTopPerson - In the implementation block
@property (readonly) double friendNightOutAttendanceRate;                         //@synthesize friendNightOutAttendanceRate=_friendNightOutAttendanceRate - In the implementation block
@property (readonly) double partnerTripAttendanceRate;                            //@synthesize partnerTripAttendanceRate=_partnerTripAttendanceRate - In the implementation block
@property (readonly) double friendsAndFamilyTripAttendanceRate;                   //@synthesize friendsAndFamilyTripAttendanceRate=_friendsAndFamilyTripAttendanceRate - In the implementation block
@property (readonly) double weekendAppearanceRatio;                               //@synthesize weekendAppearanceRatio=_weekendAppearanceRatio - In the implementation block
@property (readonly) double momentsAtWorkAppearanceRate;                          //@synthesize momentsAtWorkAppearanceRate=_momentsAtWorkAppearanceRate - In the implementation block
@property (readonly) double calendarAttendanceRatio;                              //@synthesize calendarAttendanceRatio=_calendarAttendanceRatio - In the implementation block
@property (readonly) BOOL isPersonAgeDifferentThanMeNode;                         //@synthesize isPersonAgeDifferentThanMeNode=_isPersonAgeDifferentThanMeNode - In the implementation block
@property (readonly) BOOL isPersonOldEnoughToBeParentOrGrandparent;               //@synthesize isPersonOldEnoughToBeParentOrGrandparent=_isPersonOldEnoughToBeParentOrGrandparent - In the implementation block
@property (readonly) BOOL isPersonYoungEnoughToBeMeNodeChild;                     //@synthesize isPersonYoungEnoughToBeMeNodeChild=_isPersonYoungEnoughToBeMeNodeChild - In the implementation block
+(id)filter;
+(id)partnerFilter;
+(id)fatherFilter;
+(id)motherFilter;
+(id)brotherFilter;
+(id)sisterFilter;
+(id)daughterFilter;
+(id)sonFilter;
+(id)parentFilter;
+(id)familyFilter;
+(id)familySocialGroupFilter;
+(id)childFilter;
+(id)friendFilter;
+(id)coworkerFilter;
+(id)coworkerSocialGroupFilter;
+(id)acquaintanceFilter;
+(id)vipFilter;
-(unsigned short)domain;
-(float)confidence;
-(unsigned long long)status;
-(id)label;
-(float)weight;
-(NSString *)relationship;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(void)setLocalProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)edgeDescription;
-(id)initWithRelationship:(id)arg1 fromPersonNode:(id)arg2 toPersonNode:(id)arg3 withConfidence:(float)arg4 ;
-(id)_readableStringForProperty:(id)arg1 ;
-(double)familyHolidayAttendanceRate;
-(BOOL)hasParentContactName;
-(BOOL)hasSameFamilyNameAsMePerson;
-(unsigned long long)numberOfMomentsAtHome;
-(BOOL)hasAnniversaryDate;
-(BOOL)isTopTwoPersonsSocialGroup;
-(unsigned long long)numberOfLoveEmojisExchanged;
-(BOOL)isTopPerson;
-(double)friendNightOutAttendanceRate;
-(double)partnerTripAttendanceRate;
-(double)friendsAndFamilyTripAttendanceRate;
-(double)weekendAppearanceRatio;
-(double)momentsAtWorkAppearanceRate;
-(double)calendarAttendanceRatio;
-(BOOL)isPersonAgeDifferentThanMeNode;
-(BOOL)isPersonOldEnoughToBeParentOrGrandparent;
-(BOOL)isPersonYoungEnoughToBeMeNodeChild;
@end

