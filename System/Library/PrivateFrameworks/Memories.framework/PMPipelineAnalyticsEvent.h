/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/PMCoreAnalyticsEvent.h>
#import <libobjc.A.dylib/CoreAnalyticsEventProtocol.h>

@class NSString;

@interface PMPipelineAnalyticsEvent : PMCoreAnalyticsEvent <CoreAnalyticsEventProtocol> {

	NSString* _songID;
	long long _moodID;
	NSString* _durationRequested;
	double _durationAchieved;
	NSString* _collectionClass;
	long long _assetCountRequested;
	long long _assetCountAchieved;
	long long _unsuccessfulDownloadCount;

}

@property (nonatomic,copy) NSString * songID;                                  //@synthesize songID=_songID - In the implementation block
@property (assign,nonatomic) long long moodID;                                 //@synthesize moodID=_moodID - In the implementation block
@property (assign,nonatomic) NSString * durationRequested;                     //@synthesize durationRequested=_durationRequested - In the implementation block
@property (assign,nonatomic) double durationAchieved;                          //@synthesize durationAchieved=_durationAchieved - In the implementation block
@property (nonatomic,copy) NSString * collectionClass;                         //@synthesize collectionClass=_collectionClass - In the implementation block
@property (assign,nonatomic) long long assetCountRequested;                    //@synthesize assetCountRequested=_assetCountRequested - In the implementation block
@property (assign,nonatomic) long long assetCountAchieved;                     //@synthesize assetCountAchieved=_assetCountAchieved - In the implementation block
@property (assign,nonatomic) long long unsuccessfulDownloadCount;              //@synthesize unsuccessfulDownloadCount=_unsuccessfulDownloadCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copy;
-(id)init;
-(id)eventName;
-(void)setSongID:(NSString *)arg1 ;
-(NSString *)songID;
-(id)eventPayload;
-(long long)moodID;
-(id)eventBySettingSongID:(id)arg1 ;
-(id)eventBySettingMoodID:(long long)arg1 ;
-(id)eventBySettingDurationRequested:(id)arg1 ;
-(id)eventBySettingDurationAchieved:(double)arg1 ;
-(id)eventBySettingCollectionClass:(id)arg1 ;
-(id)eventBySettingAssetCountRequested:(long long)arg1 ;
-(id)eventBySettingAssetCountAchieved:(long long)arg1 ;
-(id)eventBySettingUnsuccessfulDownloadCount:(long long)arg1 ;
-(void)setMoodID:(long long)arg1 ;
-(void)setDurationRequested:(NSString *)arg1 ;
-(void)setDurationAchieved:(double)arg1 ;
-(void)setCollectionClass:(NSString *)arg1 ;
-(void)setAssetCountRequested:(long long)arg1 ;
-(void)setAssetCountAchieved:(long long)arg1 ;
-(void)setUnsuccessfulDownloadCount:(long long)arg1 ;
-(double)durationAchieved;
-(long long)assetCountRequested;
-(long long)assetCountAchieved;
-(long long)unsuccessfulDownloadCount;
-(NSString *)collectionClass;
-(NSString *)durationRequested;
@end

