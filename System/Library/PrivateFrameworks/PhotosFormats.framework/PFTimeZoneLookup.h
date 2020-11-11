/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSString;

@interface PFTimeZoneLookup : NSObject {

	unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index>, std::__1::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index> > >* _backingFile;
	const vector<boost::container::basic_string<char, std::__1::char_traits<char>, boost::interprocess::allocator<char, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index> > >, boost::interprocess::allocator<boost::container::basic_string<char, std::__1::char_traits<char>, boost::interprocess::allocator<char, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index> > >, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index> > >* _timezones;
	const rtree<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short>, boost::geometry::index::quadratic<32, 8>, boost::geometry::index::indexable<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short> >, boost::geometry::index::equal_to<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short> >, boost::interprocess::allocator<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short>, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index> > >* _rtree;
	BOOL _loaded;
	NSString* _cacheDirectory;
	NSString* _indexFile;

}
-(id)init;
-(id)timeZoneNameForCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)anyCoordinateForTimeZoneName:(id)arg1 ;
-(BOOL)makeTimeZoneLookupCacheFile;
-(void)loadOrCreateIndex;
-(BOOL)loadIndexFile;
-(BOOL)createIndexFromArchiveFile:(id)arg1 tempIndexFile:(id)arg2 ;
@end

