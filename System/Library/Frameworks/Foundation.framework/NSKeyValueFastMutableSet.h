/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSKeyValueMutableSet.h>

@class NSKeyValueMutatingSetMethodSet;

@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet {

	NSKeyValueMutatingSetMethodSet* _mutatingMethods;

}
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
@end

