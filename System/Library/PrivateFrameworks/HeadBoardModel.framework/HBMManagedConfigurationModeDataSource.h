/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeadBoardModel/HBMDataSource.h>
#import <libobjc.A.dylib/HBMDataSource.h>

@class HBMStoreCollection, NSString;

@interface HBMManagedConfigurationModeDataSource : HBMDataSource <HBMDataSource> {

	HBMStoreCollection* _collection;

}

@property (assign,nonatomic,__weak) id<HBMDataSourceDelegate> delegate; 
@property (nonatomic,copy,readonly) HBMStoreCollection * collection;                 //@synthesize collection=_collection - In the implementation block
@property (getter=isReadOnly,nonatomic,readonly) BOOL readOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HBMStoreCollection *)collection;
-(BOOL)load:(id*)arg1 ;
-(BOOL)isReadOnly;
-(id)initWithManagedHomeScreenLayout:(id)arg1 options:(id)arg2 ;
@end

