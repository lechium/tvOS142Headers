/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSDictionary.h>

@protocol OKCollectionProxyDataSource;
@interface OKCollectionProxy : NSDictionary {

	id<OKCollectionProxyDataSource> _dataSource;
	unsigned long long _tag;

}

@property (assign,nonatomic) id<OKCollectionProxyDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned long long tag;                                  //@synthesize tag=_tag - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(unsigned long long)tag;
-(id)objectAtIndexPath:(id)arg1 ;
-(void)setTag:(unsigned long long)arg1 ;
-(id<OKCollectionProxyDataSource>)dataSource;
-(void)setDataSource:(id<OKCollectionProxyDataSource>)arg1 ;
@end

