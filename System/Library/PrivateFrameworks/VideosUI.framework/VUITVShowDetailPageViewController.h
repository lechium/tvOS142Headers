/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUILibraryStackViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/VUILibraryDataSourceDelegate.h>

@class NSArray, VUITVShowDetailPageViewModel, VUIViewControllerContentPresenter, NSString, VUIMediaEntitiesDataSource, UICollectionViewDiffableDataSource;

@interface VUITVShowDetailPageViewController : VUILibraryStackViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, VUILibraryDataSourceDelegate> {

	BOOL _seasonsFetchHasCompleted;
	BOOL _episodesFetchHasCompleted;
	NSArray* _seasons;
	NSArray* _episodes;
	NSArray* _episodeGroups;
	VUITVShowDetailPageViewModel* _tvShowDetailPageViewModel;
	VUIViewControllerContentPresenter* _contentPresenter;
	NSString* _headerTitle;
	VUIMediaEntitiesDataSource* _seasonsDataSource;
	VUIMediaEntitiesDataSource* _episodesDataSource;
	UICollectionViewDiffableDataSource* _diffableDataSource;

}

@property (nonatomic,retain) NSArray * seasons;                                                     //@synthesize seasons=_seasons - In the implementation block
@property (nonatomic,retain) NSArray * episodes;                                                    //@synthesize episodes=_episodes - In the implementation block
@property (nonatomic,retain) NSArray * episodeGroups;                                               //@synthesize episodeGroups=_episodeGroups - In the implementation block
@property (nonatomic,retain) VUITVShowDetailPageViewModel * tvShowDetailPageViewModel;              //@synthesize tvShowDetailPageViewModel=_tvShowDetailPageViewModel - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;                  //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (nonatomic,retain) NSString * headerTitle;                                                //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,retain) VUIMediaEntitiesDataSource * seasonsDataSource;                        //@synthesize seasonsDataSource=_seasonsDataSource - In the implementation block
@property (nonatomic,retain) VUIMediaEntitiesDataSource * episodesDataSource;                       //@synthesize episodesDataSource=_episodesDataSource - In the implementation block
@property (assign,nonatomic) BOOL seasonsFetchHasCompleted;                                         //@synthesize seasonsFetchHasCompleted=_seasonsFetchHasCompleted - In the implementation block
@property (assign,nonatomic) BOOL episodesFetchHasCompleted;                                        //@synthesize episodesFetchHasCompleted=_episodesFetchHasCompleted - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;               //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(NSArray *)episodes;
-(NSArray *)seasons;
-(void)setEpisodes:(NSArray *)arg1 ;
-(void)setSeasons:(NSArray *)arg1 ;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(void)dataSourceDidFinishFetching:(id)arg1 ;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
-(void)configureWithCollectionView:(id)arg1 ;
-(id)_createDiffableDataSourceForCollectionView:(id)arg1 ;
-(id)_createDiffableDataSourceSnapshot;
-(id)initWithTitle:(id)arg1 withSeasonsDataSource:(id)arg2 withEpisodesDataSource:(id)arg3 ;
-(VUIMediaEntitiesDataSource *)seasonsDataSource;
-(VUIMediaEntitiesDataSource *)episodesDataSource;
-(void)setSeasonsFetchHasCompleted:(BOOL)arg1 ;
-(void)setEpisodesFetchHasCompleted:(BOOL)arg1 ;
-(BOOL)_allFetchesHaveCompleted;
-(void)setEpisodeGroups:(NSArray *)arg1 ;
-(VUITVShowDetailPageViewModel *)tvShowDetailPageViewModel;
-(void)_buildTvShowDetailPageViewModel;
-(id)_seasonIdentifiersWithSeasons:(id)arg1 ;
-(void)_updateTvShowDetailPageViewModelWithSeasonIdentifiers:(id)arg1 ;
-(void)_updateEpisodeShelvesWithLatestEpisodes;
-(id)_episodesBySeasonIdentifier;
-(BOOL)episodesFetchHasCompleted;
-(BOOL)seasonsFetchHasCompleted;
-(NSArray *)episodeGroups;
-(void)setTvShowDetailPageViewModel:(VUITVShowDetailPageViewModel *)arg1 ;
-(void)setSeasonsDataSource:(VUIMediaEntitiesDataSource *)arg1 ;
-(void)setEpisodesDataSource:(VUIMediaEntitiesDataSource *)arg1 ;
@end

