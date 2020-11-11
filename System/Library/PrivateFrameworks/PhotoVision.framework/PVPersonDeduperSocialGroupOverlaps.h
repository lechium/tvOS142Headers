/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoVision/PVPersonDeduperStep.h>

@interface PVPersonDeduperSocialGroupOverlaps : PVPersonDeduperStep
-(id)name;
-(id)metricsKey;
-(BOOL)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3 minAgeType:(unsigned short)arg4 ;
-(void)mergePersons:(id)arg1 otherPersonLocalIdentifiers:(id)arg2 personsFetchResult:(id)arg3 mergeSocialGroupPersonIdentifiers:(id)arg4 ;
-(void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 resultBlock:(/*^block*/id)arg4 ;
@end

