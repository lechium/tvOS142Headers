/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDScorecardLayout, NSString, NSArray;

@interface GEOPlaceQuestionnaire : NSObject {

	GEOPDScorecardLayout* _scorecardLayout;
	NSString* _version;
	NSArray* _ratingCategories;

}

@property (nonatomic,copy,readonly) NSString * version;                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * ratingCategories;              //@synthesize ratingCategories=_ratingCategories - In the implementation block
-(NSString *)version;
-(id)initWithScorecardLayout:(id)arg1 ;
-(NSArray *)ratingCategories;
@end
