/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDAllCollectionsViewResultFilter, NSArray, GEOAllCollectionsViewResultFilterTypeAddress, GEOAllCollectionsViewResultFilterTypeKeyword;

@interface GEOAllCollectionsViewResultFilter : NSObject {

	GEOPDAllCollectionsViewResultFilter* _resultFilter;
	NSArray* _places;

}

@property (nonatomic,readonly) long long filterType; 
@property (nonatomic,readonly) GEOAllCollectionsViewResultFilterTypeAddress * addressFilter; 
@property (nonatomic,readonly) GEOAllCollectionsViewResultFilterTypeKeyword * keywordFilter; 
-(long long)filterType;
-(GEOAllCollectionsViewResultFilterTypeAddress *)addressFilter;
-(GEOAllCollectionsViewResultFilterTypeKeyword *)keywordFilter;
-(id)initWithAllCollectionsViewResultFilter:(id)arg1 withPlaces:(id)arg2 ;
@end
