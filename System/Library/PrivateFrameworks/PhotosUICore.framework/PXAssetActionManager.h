/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXActionManager.h>

@class PXSectionedSelectionManager, PXSectionedObjectReference;

@interface PXAssetActionManager : PXActionManager {

	PXSectionedSelectionManager* _selectionManager;
	PXSectionedObjectReference* _objectReference;

}

@property (nonatomic,retain) PXSectionedSelectionManager * selectionManager;              //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,retain) PXSectionedObjectReference * objectReference;                //@synthesize objectReference=_objectReference - In the implementation block
-(id)init;
-(PXSectionedObjectReference *)objectReference;
-(PXSectionedSelectionManager *)selectionManager;
-(void)setSelectionManager:(PXSectionedSelectionManager *)arg1 ;
-(id)initWithSelectionManager:(id)arg1 ;
-(id)initWithSelectedObjectReference:(id)arg1 dataSourceManager:(id)arg2 ;
-(BOOL)canPerformAssetVariationActions;
-(id)actionPerformerForActionType:(id)arg1 ;
-(BOOL)shouldEnableActionType:(id)arg1 onAsset:(id)arg2 ;
-(BOOL)canPerformActionType:(id)arg1 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 ;
-(id)systemImageNameForActionType:(id)arg1 ;
-(void)executeActionForActionType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setObjectReference:(PXSectionedObjectReference *)arg1 ;
-(void)px_registerAdditionalPerformerClasses;
@end

