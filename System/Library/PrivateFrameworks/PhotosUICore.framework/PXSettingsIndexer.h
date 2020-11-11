/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXSettings, PXSettingsIndex, NSMutableArray, NSProgress;

@interface PXSettingsIndexer : NSObject {

	PXSettings* _rootSettings;
	PXSettingsIndex* _index;
	NSMutableArray* _completionHandlers;
	long long _state;
	NSProgress* _indexingProgress;

}

@property (nonatomic,readonly) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (assign,nonatomic) long long state;                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSProgress * indexingProgress;                      //@synthesize indexingProgress=_indexingProgress - In the implementation block
@property (nonatomic,retain) PXSettingsIndex * index;                            //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) PXSettings * rootSettings;                        //@synthesize rootSettings=_rootSettings - In the implementation block
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(PXSettingsIndex *)index;
-(void)setIndex:(PXSettingsIndex *)arg1 ;
-(PXSettings *)rootSettings;
-(NSMutableArray *)completionHandlers;
-(NSProgress *)indexingProgress;
-(void)setIndexingProgress:(NSProgress *)arg1 ;
-(id)initWithRootSettings:(id)arg1 ;
-(id)startIndexingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_startIndexingIfNecessary;
-(void)_handleResultIndex:(id)arg1 ;
-(void)_callCompletionHandlersIfNecessary;
@end

