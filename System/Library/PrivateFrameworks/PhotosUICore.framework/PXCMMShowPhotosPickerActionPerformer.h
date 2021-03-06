/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCMMActionPerformer.h>

@protocol PXGridPresentation;
@interface PXCMMShowPhotosPickerActionPerformer : PXCMMActionPerformer {

	id<PXGridPresentation> _gridPresentation;

}

@property (nonatomic,readonly) id<PXGridPresentation> gridPresentation;              //@synthesize gridPresentation=_gridPresentation - In the implementation block
-(id)performActionWithSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performPhotosPickerActionWithSession:(id)arg1 gridPresentation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<PXGridPresentation>)gridPresentation;
@end

