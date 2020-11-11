/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary;

@interface HMFClassRegistry : HMFObject {

	hmf_unfair_data_lock_s _lock;
	NSMutableDictionary* _classes;
	Class _defaultClass;

}

@property (nonatomic,readonly) Class defaultClass;              //@synthesize defaultClass=_defaultClass - In the implementation block
-(id)init;
-(id)initWithDefaultClass:(Class)arg1 ;
-(Class)classForKey:(id)arg1 ;
-(void)setClass:(Class)arg1 forKey:(id)arg2 ;
-(Class)defaultClass;
@end
