/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VUICollectionChangeSet;

@interface VUIMediaItemEntityTypesFetchResponseChanges : NSObject {

	BOOL _localMediaItemsAvailableDidChange;
	VUICollectionChangeSet* _mediaItemEntityTypesChangeSet;

}

@property (nonatomic,readonly) VUICollectionChangeSet * mediaItemEntityTypesChangeSet;              //@synthesize mediaItemEntityTypesChangeSet=_mediaItemEntityTypesChangeSet - In the implementation block
@property (nonatomic,readonly) BOOL localMediaItemsAvailableDidChange;                              //@synthesize localMediaItemsAvailableDidChange=_localMediaItemsAvailableDidChange - In the implementation block
-(id)description;
-(id)init;
-(VUICollectionChangeSet *)mediaItemEntityTypesChangeSet;
-(BOOL)localMediaItemsAvailableDidChange;
-(id)initWithMediaItemEntityTypesChangeSet:(id)arg1 localMediaItemsAvailableDidChange:(BOOL)arg2 ;
@end

