/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCMMPeopleSuggestionsDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, PXCMMPhotoKitPeopleSuggestionsDataSourceState;

@interface PXCMMPhotoKitPeopleSuggestionsDataSource : PXCMMPeopleSuggestionsDataSource {

	NSObject*<OS_dispatch_queue> _queue;
	PXCMMPhotoKitPeopleSuggestionsDataSourceState* __state;

}

@property (nonatomic,readonly) PXCMMPhotoKitPeopleSuggestionsDataSourceState * _state;              //@synthesize _state=__state - In the implementation block
-(PXCMMPhotoKitPeopleSuggestionsDataSourceState *)_state;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)initWithState:(id)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
@end
