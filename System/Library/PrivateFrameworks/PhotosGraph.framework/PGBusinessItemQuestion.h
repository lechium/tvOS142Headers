/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSDictionary, NSString;

@interface PGBusinessItemQuestion : PGSurveyQuestion {

	unsigned short _state;
	NSDictionary* _additionalInfo;
	NSString* _entityIdentifier;
	double _localFactoryScore;

}
-(unsigned short)type;
-(unsigned short)state;
-(unsigned short)displayType;
-(id)additionalInfo;
-(unsigned short)entityType;
-(id)entityIdentifier;
-(double)localFactoryScore;
-(id)initWithAssetUUID:(id)arg1 businessUUID:(id)arg2 businessName:(id)arg3 localFactoryScore:(double)arg4 ;
@end

