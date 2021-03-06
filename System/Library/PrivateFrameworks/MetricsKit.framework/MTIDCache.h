/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface MTIDCache : NSObject {

	NSMutableDictionary* _cache;

}

@property (nonatomic,retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
+(BOOL)idInfo:(id)arg1 isValidForDate:(id)arg2 ;
-(id)init;
-(NSMutableDictionary *)cache;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(void)removeNamespace:(id)arg1 ;
-(void)removeAllNamespaces;
-(void)removeUnsyncedNamespaces;
-(void)removeNamespaces:(id)arg1 ;
-(id)IDInfoForScheme:(id)arg1 date:(id)arg2 ;
-(void)addIDInfo:(id)arg1 ;
@end

