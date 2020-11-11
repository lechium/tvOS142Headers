/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFSystemInfoMigrationDataSource.h>

@protocol HMFSystemInfoMigrationDataSourceDelegate;
@class NSString;

@interface __HMFSetupAssistantDataSource : HMFObject <HMFSystemInfoMigrationDataSource> {

	id<HMFSystemInfoMigrationDataSourceDelegate> _delegate;

}

@property (__weak) id<HMFSystemInfoMigrationDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isMigrating,nonatomic,readonly) BOOL migrating; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<HMFSystemInfoMigrationDataSourceDelegate>)delegate;
-(void)setDelegate:(id<HMFSystemInfoMigrationDataSourceDelegate>)arg1 ;
-(BOOL)isMigrating;
@end

