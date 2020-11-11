/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class NSArray;

@interface GKDashboardTurnDataSource : GKCollectionDataSource {

	BOOL _shouldShowPlay;
	BOOL _shouldShowQuit;
	NSArray* _matches;

}

@property (nonatomic,retain) NSArray * matches;                //@synthesize matches=_matches - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlay;              //@synthesize shouldShowPlay=_shouldShowPlay - In the implementation block
@property (assign,nonatomic) BOOL shouldShowQuit;              //@synthesize shouldShowQuit=_shouldShowQuit - In the implementation block
-(id)init;
-(void)dealloc;
-(long long)itemCount;
-(NSArray *)matches;
-(void)setMatches:(NSArray *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(double)preferredCollectionHeight;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(void)setShouldShowPlay:(BOOL)arg1 ;
-(BOOL)shouldShowPlay;
-(void)setShouldShowQuit:(BOOL)arg1 ;
-(BOOL)shouldShowQuit;
@end

