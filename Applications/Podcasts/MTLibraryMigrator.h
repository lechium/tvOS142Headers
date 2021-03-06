//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTLibraryMigrator : NSObject
{
}

+ (_Bool)runImageStoreMigation;	// IMP=0x000000010015f9c0
+ (_Bool)moveSQLiteFilesFromDocumentsToSharedContainer;	// IMP=0x000000010015f440
+ (id)legacyLibraryPath;	// IMP=0x000000010015f324
+ (_Bool)runCoreDataMigration;	// IMP=0x000000010015f24c
+ (void)fixupDataMigrationVersion;	// IMP=0x000000010015f120
+ (_Bool)needsMigration;	// IMP=0x000000010015f04c
+ (void)migrateDatabaseToSharedContainerIfNeeded;	// IMP=0x000000010015efb8
+ (_Bool)needToMigrateDataToSharedContainer;	// IMP=0x000000010015ee10
+ (void)touchCoreDataMigrationVersion;	// IMP=0x000000010015edf8
+ (void)touchLibraryMigrationVersion;	// IMP=0x000000010015ede0
+ (void)touchAllMigrationVersions;	// IMP=0x000000010015edac
+ (void)recalculateAllPlaylists;	// IMP=0x000000010015e9f8
+ (long long)episodesToKeepToEpisodeLimit:(int)arg1;	// IMP=0x000000010015e9d4
+ (int)episodesToKeepDefaultValue;	// IMP=0x000000010015e978
+ (void)deleteDuplicateVideoEpisodesForRdar59691904;	// IMP=0x000000010015e52c
+ (_Bool)podcastMigrationForVersion8to9:(id)arg1;	// IMP=0x000000010015e28c
+ (void)podcastMigrationForVersion6to7:(id)arg1;	// IMP=0x000000010015e13c
+ (void)podcastMigrationForVersion9to10:(id)arg1;	// IMP=0x000000010015e0f0
+ (void)podcastMigrationForVersion11to12:(id)arg1;	// IMP=0x000000010015e0a0
+ (void)podcastMigrationForVersion14to15:(id)arg1;	// IMP=0x000000010015dfa8
+ (void)podcastMigrationForVersion19to20:(id)arg1;	// IMP=0x000000010015dd58
+ (void)podcastMigrationForVersion20to21:(id)arg1;	// IMP=0x000000010015dd44
+ (void)podcastMigrationForVersion24to25:(id)arg1;	// IMP=0x000000010015dd40
+ (void)podcastMigrationForVersion25to26:(id)arg1;	// IMP=0x000000010015dbd8
+ (void)podcastMigrationForVersion26to27:(id)arg1;	// IMP=0x000000010015dbd4
+ (void)podcastMigrationForVersion27to28:(id)arg1;	// IMP=0x000000010015db6c
+ (void)podcastMigrationForVersion28to29:(id)arg1;	// IMP=0x000000010015daa8
+ (void)podcastMigrationForVersion32to33:(id)arg1;	// IMP=0x000000010015da94
+ (void)podcastMigrationForVersion34to35:(id)arg1;	// IMP=0x000000010015d824
+ (void)podcastMigrationForVersion35to36:(id)arg1;	// IMP=0x000000010015d820
+ (void)podcastMigrationForVersion36to37:(id)arg1;	// IMP=0x000000010015d5a4
+ (_Bool)runMigrationForPodcast:(id)arg1 version:(long long)arg2;	// IMP=0x000000010015d35c
+ (void)episodeMigrationForVersion24to25:(id)arg1;	// IMP=0x000000010015d240
+ (void)episodeMigrationForVersion23to24:(id)arg1;	// IMP=0x000000010015d128
+ (void)episodeMigrationForVersion21to22:(id)arg1;	// IMP=0x000000010015d090
+ (void)episodeMigrationForVersion17to18:(id)arg1;	// IMP=0x000000010015d024
+ (void)episodeMigrationForVersion16to17:(id)arg1;	// IMP=0x000000010015cfac
+ (void)episodeMigrationForVersion13to14:(id)arg1;	// IMP=0x000000010015cf1c
+ (void)episodeMigrationForVersion6to7:(id)arg1;	// IMP=0x000000010015cc0c
+ (void)episodeMigrationForVersion0to1:(id)arg1;	// IMP=0x000000010015cb80
+ (void)episodeMigrationForVersion29to30:(id)arg1;	// IMP=0x000000010015ca9c
+ (void)runMigrationOnEpisodesByPodcastForVersion:(long long)arg1;	// IMP=0x000000010015c354
+ (void)migrateSettingDefaultsForVersion10to11;	// IMP=0x000000010015c1f4
+ (void)migrateSettingDefaultsForVersion9to10;	// IMP=0x000000010015c144
+ (void)migrateSettingDefaultsForVersion6to7;	// IMP=0x000000010015c034
+ (void)migrateSettingDefaultsForVersion30to31;	// IMP=0x000000010015bedc
+ (void)migrateSettingsForVersion:(unsigned long long)arg1;	// IMP=0x000000010015be60
+ (_Bool)isDefaultSettingsForPlaylist:(id)arg1 title:(id)arg2 episodesToShow:(long long)arg3 showPlayedEpisodes:(_Bool)arg4 includeAllPodcasts:(_Bool)arg5;	// IMP=0x000000010015bd24
+ (void)deleteOrUpdatePlaylist:(id)arg1 ifIsDefault:(_Bool)arg2;	// IMP=0x000000010015bc90
+ (void)migrateDefaultPlaylistsForVersion18to19;	// IMP=0x000000010015b7f4
+ (void)migratePlaylistDefaultsForVersion7to8;	// IMP=0x000000010015b5a4
+ (void)migratePlaylistsForVersion:(long long)arg1;	// IMP=0x000000010015b54c
+ (_Bool)runDataMigration;	// IMP=0x000000010015b2c8

@end

