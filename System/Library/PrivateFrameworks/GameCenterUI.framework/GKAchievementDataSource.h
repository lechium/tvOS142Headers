/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class GKGameRecord, NSArray;

@interface GKAchievementDataSource : GKCollectionDataSource {

	GKGameRecord* _gameRecord;
	NSArray* _achievements;
	NSArray* _localAchievements;
	UIEdgeInsets _collectionLayoutInsets;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                        //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) NSArray * achievements;                           //@synthesize achievements=_achievements - In the implementation block
@property (nonatomic,retain) NSArray * localAchievements;                      //@synthesize localAchievements=_localAchievements - In the implementation block
@property (assign,nonatomic) UIEdgeInsets collectionLayoutInsets;              //@synthesize collectionLayoutInsets=_collectionLayoutInsets - In the implementation block
-(void)dealloc;
-(long long)itemCount;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)achievements;
-(void)setAchievements:(NSArray *)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(double)preferredCollectionHeight;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(id)initWithGameRecord:(id)arg1 ;
-(GKGameRecord *)gameRecord;
-(void)setCollectionLayoutInsets:(UIEdgeInsets)arg1 ;
-(void)setLocalAchievements:(NSArray *)arg1 ;
-(id)heightMultipliersForSizeCategories;
-(NSArray *)localAchievements;
-(UIEdgeInsets)collectionLayoutInsets;
@end

