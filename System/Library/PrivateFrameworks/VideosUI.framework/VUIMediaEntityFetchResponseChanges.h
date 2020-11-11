/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VUICollectionChangeSet;

@interface VUIMediaEntityFetchResponseChanges : NSObject {

	VUICollectionChangeSet* _mediaEntitiesChangeSet;
	VUICollectionChangeSet* _groupingChangeSet;

}

@property (nonatomic,retain) VUICollectionChangeSet * mediaEntitiesChangeSet;              //@synthesize mediaEntitiesChangeSet=_mediaEntitiesChangeSet - In the implementation block
@property (nonatomic,retain) VUICollectionChangeSet * groupingChangeSet;                   //@synthesize groupingChangeSet=_groupingChangeSet - In the implementation block
-(id)description;
-(id)init;
-(VUICollectionChangeSet *)mediaEntitiesChangeSet;
-(id)initWithMediaEntitiesChangeSet:(id)arg1 ;
-(void)setMediaEntitiesChangeSet:(VUICollectionChangeSet *)arg1 ;
-(void)setGroupingChangeSet:(VUICollectionChangeSet *)arg1 ;
-(VUICollectionChangeSet *)groupingChangeSet;
@end

