/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PGPeopleTitleUtility : NSObject
+(id)beautifiedLocationStringWithPersonNode:(id)arg1 peopleAddressEdge:(id)arg2 titleComponent:(id)arg3 insertLineBreak:(BOOL)arg4 allowFamilyHome:(BOOL)arg5 ;
+(id)nameStringForPersonNodes:(id)arg1 includeMe:(BOOL)arg2 insertLineBreaks:(BOOL)arg3 ;
+(id)nameStringForPersonNodes:(id)arg1 includeMe:(BOOL)arg2 allowUnnamed:(BOOL)arg3 allowedGroupsFormat:(unsigned long long)arg4 insertLineBreaks:(BOOL)arg5 ;
+(id)ageStringForPersonNode:(id)arg1 date:(id)arg2 ;
+(id)ageStringForPersonNode:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)_ageStringWithStartAge:(long long)arg1 endAge:(long long)arg2 ;
+(id)peopleGroupNameForPersonNodes:(id)arg1 allowedGroupsFormat:(unsigned long long)arg2 ;
+(id)nameFromPersonNode:(id)arg1 ;
+(id)_placeDisplayNameForPeopleAddressNodeLabel:(id)arg1 titleComponent:(id)arg2 containsMe:(BOOL)arg3 ;
@end

