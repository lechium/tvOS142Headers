/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet, PHPhotoLibrary;

@interface CLSFocusPeopleCache : NSObject {

	NSSet* _peopleUUIDs;
	unsigned long long _maximumNumberOfPeople;
	PHPhotoLibrary* _photoLibrary;

}

@property (assign,nonatomic,__weak) PHPhotoLibrary * photoLibrary;                  //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfPeople;              //@synthesize maximumNumberOfPeople=_maximumNumberOfPeople - In the implementation block
@property (nonatomic,readonly) NSSet * peopleUUIDs;                                 //@synthesize peopleUUIDs=_peopleUUIDs - In the implementation block
+(id)_personSortDescriptors;
-(void)invalidate;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 maximumNumberOfPeople:(unsigned long long)arg2 ;
-(id)_collectValidPeopleUUIDs;
-(NSSet *)peopleUUIDs;
-(unsigned long long)maximumNumberOfPeople;
-(void)setMaximumNumberOfPeople:(unsigned long long)arg1 ;
@end

