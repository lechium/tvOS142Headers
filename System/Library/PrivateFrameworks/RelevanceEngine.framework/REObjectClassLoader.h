/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REClassLoader.h>

@class NSArray;

@interface REObjectClassLoader : REClassLoader {

	NSArray* _objects;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithObjects:(id)arg1 configuration:(id)arg2 ;
-(void)_enumerateClassesWithBlock:(/*^block*/id)arg1 ;
@end

