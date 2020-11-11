/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HBMStoreChangeSet;

@interface HBMStoreCollectionChangeSet : NSObject {

	HBMStoreChangeSet* _applicationChangeSet;
	HBMStoreChangeSet* _folderChangeSet;

}

@property (nonatomic,readonly) HBMStoreChangeSet * applicationChangeSet;              //@synthesize applicationChangeSet=_applicationChangeSet - In the implementation block
@property (nonatomic,readonly) HBMStoreChangeSet * folderChangeSet;                   //@synthesize folderChangeSet=_folderChangeSet - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
+(id)changeSet;
-(id)init;
-(BOOL)isEmpty;
-(id)initWithApplicationChangeSet:(id)arg1 folderChangeSet:(id)arg2 ;
-(HBMStoreChangeSet *)applicationChangeSet;
-(HBMStoreChangeSet *)folderChangeSet;
-(id)initWithUpdatedApplications:(id)arg1 removedApplicationIDs:(id)arg2 updatedFolders:(id)arg3 removedFolderIDs:(id)arg4 ;
-(id)collectionChangeSetByAddingCollectionChangeSet:(id)arg1 ;
@end

