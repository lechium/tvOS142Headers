/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PVPhotoLibraryProtocol <NSObject>
@required
-(id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;
-(BOOL)pv_performChangesAndWait:(/*^block*/id)arg1 error:(id*)arg2;
-(id)pv_persistentStorageDirectoryURL;
-(id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1;
-(id)pv_fetchPersonsWithType:(unsigned long long)arg1;
-(id)pv_fetchPersonsInMoment:(id)arg1;
-(id)pv_fetchCandidatePersonsForPerson:(id)arg1;
-(id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1;
-(id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
-(unsigned long long)pv_numberOfFacesWithFaceprints;
-(id)pv_fetchFacesWithLocalIdentifiers:(id)arg1;
-(id)pv_fetchFacesForPerson:(id)arg1;
-(id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;
-(id)pv_fetchFacesForFaceGroup:(id)arg1;
-(id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;
-(id)pv_fetchMoments;
-(id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1;
-(id)pv_fetchMomentsForPerson:(id)arg1;
-(id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;
-(id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1;
-(id)pv_fetchAssetsInMoment:(id)arg1;
-(id)pv_fetchAssetsForPerson:(id)arg1;
-(id)pv_fetchAssetsForFaceGroup:(id)arg1;
-(id)pv_fetchFaceGroups;
-(id)pv_fetchFaceGroupsForPerson:(id)arg1;
-(id)pv_fetchInvalidAssetIdentifiersForCommonComparison;
-(id)pv_lastAssetDate;
-(float)pv_faceProcessingProgress;

@end

