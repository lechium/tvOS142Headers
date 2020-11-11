/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCacheDelegate.h>
#import <libobjc.A.dylib/MKPublisherIconProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, NSCache, NSString;

@interface MKPlaceCollectionsPublisherIconManager : NSObject <NSCacheDelegate, MKPublisherIconProvider> {

	NSObject*<OS_dispatch_queue> _publisherLogoImageQueue;
	NSCache* _publisherIconCache;

}

@property (nonatomic,retain) NSCache * publisherIconCache;              //@synthesize publisherIconCache=_publisherIconCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(void)iconForPublisherNamed:(id)arg1 usingId:(unsigned)arg2 contentScale:(double)arg3 onCompletion:(/*^block*/id)arg4 ;
-(NSCache *)publisherIconCache;
-(void)setPublisherIconCache:(NSCache *)arg1 ;
@end

