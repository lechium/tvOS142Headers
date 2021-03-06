/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@interface GEOCoarseLocationData : NSObject {

	unique_ptr<gloria::DB, std::__1::default_delete<gloria::DB> >* _db;
	vector<unsigned char, std::__1::allocator<unsigned char> > _availableZoomLevels;

}
-(id)init;
-(id)initWithFileURL:(id)arg1 ;
-(id)snappedLocationForLocation:(id)arg1 ;
-(BOOL)_populateAvailableZoomRange;
@end

