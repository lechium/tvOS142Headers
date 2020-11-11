/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDPublisherViewResultFilter, NSArray, GEOPublisherViewResultFilterAddress, GEOPublisherViewResultFilterKeyword;

@interface GEOPublisherViewResultFilter : NSObject {

	GEOPDPublisherViewResultFilter* _resultFilter;
	NSArray* _places;

}

@property (nonatomic,readonly) long long filterType; 
@property (nonatomic,readonly) GEOPublisherViewResultFilterAddress * addressFilter; 
@property (nonatomic,readonly) GEOPublisherViewResultFilterKeyword * keywordFilter; 
-(long long)filterType;
-(id)initWithPublisherViewResultFilter:(id)arg1 withPlaces:(id)arg2 ;
-(GEOPublisherViewResultFilterAddress *)addressFilter;
-(GEOPublisherViewResultFilterKeyword *)keywordFilter;
@end

