/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreKit/ASKLoadResourceOperation.h>

@class NSString, NSArray;

@interface ASKLoadBundleResourceOperation : ASKLoadResourceOperation {

	NSString* _resourceName;
	NSArray* _searchBundles;

}

@property (nonatomic,copy,readonly) NSString * resourceName;              //@synthesize resourceName=_resourceName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchBundles;              //@synthesize searchBundles=_searchBundles - In the implementation block
-(void)main;
-(NSString *)resourceName;
-(NSArray *)searchBundles;
-(id)initWithResourceName:(id)arg1 searchBundles:(id)arg2 ;
@end

